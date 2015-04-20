#include "coollerexplorer.h"
#include "Configurator.h"
#include "Logger.h"
#include "ConfigMap.h"
#include <qdiriterator.h>
#include <boost/property_tree/xml_parser.hpp>

CoollerExplorer::CoollerExplorer(QObject *parent)
    : QObject(parent),
    m_state(Ready)
{
    QString configsPath = Configurator::getConfigFilesPath();
    QDirIterator iter(configsPath, QStringList() << "*.xml", QDir::Files | QDir::NoDotAndDotDot, QDirIterator::NoIteratorFlags);
    int configsRed = 0;
    while (iter.hasNext())
    {
        iter.next();
        QString xmlFilePath = iter.filePath();
        if (readXMLConfig(xmlFilePath))
            configsRed++;
    }
    if (0 == configsRed)
        m_state = NoConfigs;
}

CoollerExplorer::~CoollerExplorer()
{

}

bool CoollerExplorer::setNewAdress(const QString& portName, int id)
{
    return true;
}

int  CoollerExplorer::getRegisterValue(int regNumber)
{
    return 0;
}

bool CoollerExplorer::setRegisterValue(int regNumber, int value)
{
    return true;
}

QString CoollerExplorer::errorString()
{
    return m_errorString;
}

bool CoollerExplorer::readXMLConfig(const QString& path)
{
    boost::property_tree::ptree tree;
    try
    {
        boost::property_tree::read_xml(path.toStdString(), tree, boost::property_tree::xml_parser::no_comments);
        std::string vendor = tree.get<std::string>("Config.Vendor");
        std::string product = tree.get<std::string>("Config.Product");
        std::string versionMin = tree.get<std::string>("Config.Version.min");
        std::string versionMax = tree.get<std::string>("Config.Version.max");
        ConfigMap a_map(vendor,product,versionMin,versionMax);

        boost::property_tree::ptree values = tree.get_child("Config.InputValues");
        for (const std::pair<std::string, boost::property_tree::ptree> &p : values)
        {
            std::string name = p.first;
            ConfigMap::Parameter a_parameter;
            a_parameter.m_description = p.second.get_value<std::string>();
            a_parameter.m_registerNumber = p.second.get<int>("<xmlattr>.R");
            int b = p.second.get<int>("<xmlattr>.B",-1);
            if (b != -1)
            {
                a_parameter.m_isBool = true;
                a_parameter.m_bitNumber = b;
            }
            a_map.addVariable(name, a_parameter);
        }
        
        values = tree.get_child("Config.OutValues");
        for (const std::pair<std::string, boost::property_tree::ptree> &p : values)
        {
            std::string name = p.first;
            ConfigMap::Parameter a_parameter;
            a_parameter.m_description = p.second.get_value<std::string>();
            a_parameter.m_registerNumber = p.second.get<int>("<xmlattr>.R");
            a_parameter.m_isWriteble = true;
            a_map.addVariable(name, a_parameter);
        }
        m_configs.push_back(a_map);
    }
    catch (boost::property_tree::xml_parser_error& err)
    {
        Logger::log(err.message(), Logger::Error);
        m_errorString = QString::fromStdString(err.message());
        return false;
    }
    catch (boost::property_tree::ptree_bad_data& err)
    {
        Logger::log(err.what(), Logger::Error);
        m_errorString = QString::fromStdString(err.what());
        return false;
    }

    return true;
}