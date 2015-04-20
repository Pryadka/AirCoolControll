#include "ConfigMap.h"


ConfigMap::ConfigMap(const std::string& vendor, const std::string& product, const std::string& versionMin, const std::string& versionMax) :
    m_vendor(vendor),
    m_product(product),
    m_versionMin(versionMin),
    m_versionMax(versionMax),
    m_inputRegistersInterval(0,0)
{
}


ConfigMap::~ConfigMap()
{
}

void ConfigMap::addVariable(const std::string& name, const Parameter& p)
{
    m_map[name] = p;
    if (!p.m_isWriteble)
    {
        if (p.m_registerNumber < m_inputRegistersInterval.first)
            m_inputRegistersInterval.first = p.m_registerNumber;

        if (p.m_registerNumber > m_inputRegistersInterval.second)
            m_inputRegistersInterval.second = p.m_registerNumber;
    }
}

int  ConfigMap::getRegisterNumber(const std::string& name) const
{
    if (!haveVariableWithName(name))
        return -1;

    Parameter p = m_map.at(name);
    return p.m_registerNumber;
}

bool ConfigMap::haveVariableWithName(const std::string& name) const
{
    return m_map.find(name) != m_map.end();
}

unsigned int  ConfigMap::getValue(const std::string& name, const QList<quint16>& array) const
{
    if (!haveVariableWithName(name))
        return -1;

    Parameter p = m_map.at(name);
    qint16 ret = array[p.m_registerNumber];

    if (p.m_isBool)
    {
        ret =  ret && (1 << p.m_bitNumber) ? 1 : 0;
    }

    return ret;
}

std::pair<int, int> ConfigMap::getInputInterval() const
{
    return m_inputRegistersInterval;
}