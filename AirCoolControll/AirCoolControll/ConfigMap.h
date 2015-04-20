#ifndef __CONFIGMAP__
#define __CONFIGMAP__

#include <string>
#include <map>
#include <qlist.h>

class ConfigMap
{
public:
    ConfigMap(const std::string& vendor, const std::string& product, const std::string& versionMin, const std::string& versionMax);
    ~ConfigMap();

    typedef struct 
    {
        int          m_registerNumber;
        std::string  m_description;
        bool         m_isBool = false;
        bool         m_isWriteble = false;
        int          m_bitNumber;
    } Parameter;

    void addVariable(const std::string& name, const Parameter& p);
    int  getRegisterNumber(const std::string& name) const;
    bool haveVariableWithName(const std::string& name) const;
    unsigned int  getValue(const std::string& name, const QList<quint16>& array) const;
    std::pair<int, int> getInputInterval() const;

private:
    std::string     m_vendor;
    std::string     m_product;
    std::string     m_versionMin;
    std::string     m_versionMax;

    std::map<std::string, Parameter> m_map;
    std::pair<int, int>              m_inputRegistersInterval;
};

#endif // __CONFIGMAP__