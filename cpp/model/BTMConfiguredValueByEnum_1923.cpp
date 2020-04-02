/**
 * Onshape REST API
 * The Onshape REST API consumed by all clients.
 *
 * The version of the OpenAPI document: 1.113
 * Contact: api-support@onshape.zendesk.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "BTMConfiguredValueByEnum_1923.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTMConfiguredValueByEnum_1923::BTMConfiguredValueByEnum_1923()
{
    m_r_namespace = utility::conversions::to_string_t("");
    m_r_namespaceIsSet = false;
    m_EnumName = utility::conversions::to_string_t("");
    m_EnumNameIsSet = false;
    m_EnumValue = utility::conversions::to_string_t("");
    m_EnumValueIsSet = false;
}

BTMConfiguredValueByEnum_1923::~BTMConfiguredValueByEnum_1923()
{
}

void BTMConfiguredValueByEnum_1923::validate()
{
    // TODO: implement validation
}

web::json::value BTMConfiguredValueByEnum_1923::toJson() const
{
    web::json::value val = this->BTMConfiguredValue_1341::toJson();
    
    if(m_r_namespaceIsSet)
    {
        val[utility::conversions::to_string_t("namespace")] = ModelBase::toJson(m_r_namespace);
    }
    if(m_EnumNameIsSet)
    {
        val[utility::conversions::to_string_t("enumName")] = ModelBase::toJson(m_EnumName);
    }
    if(m_EnumValueIsSet)
    {
        val[utility::conversions::to_string_t("enumValue")] = ModelBase::toJson(m_EnumValue);
    }

    return val;
}

bool BTMConfiguredValueByEnum_1923::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->BTMConfiguredValue_1341::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t("namespace")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("namespace"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_namespace;
            ok &= ModelBase::fromJson(fieldValue, refVal_namespace);
            setRNamespace(refVal_namespace);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enumName")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enumName"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_enumName;
            ok &= ModelBase::fromJson(fieldValue, refVal_enumName);
            setEnumName(refVal_enumName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enumValue")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enumValue"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_enumValue;
            ok &= ModelBase::fromJson(fieldValue, refVal_enumValue);
            setEnumValue(refVal_enumValue);
        }
    }
    return ok;
}

void BTMConfiguredValueByEnum_1923::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
    if(m_ConfigurationValueStringIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("configurationValueString"), m_ConfigurationValueString));
    }
    if(m_ImportMicroversionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("importMicroversion"), m_ImportMicroversion));
    }
    if(m_NodeIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("nodeId"), m_NodeId));
    }
    if(m_ValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("value"), m_Value));
    }
    if(m_r_namespaceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("namespace"), m_r_namespace));
    }
    if(m_EnumNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("enumName"), m_EnumName));
    }
    if(m_EnumValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("enumValue"), m_EnumValue));
    }
}

bool BTMConfiguredValueByEnum_1923::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("configurationValueString")))
    {
        utility::string_t refVal_configurationValueString;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("configurationValueString")), refVal_configurationValueString );
        setConfigurationValueString(refVal_configurationValueString);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("importMicroversion")))
    {
        utility::string_t refVal_importMicroversion;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("importMicroversion")), refVal_importMicroversion );
        setImportMicroversion(refVal_importMicroversion);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("nodeId")))
    {
        utility::string_t refVal_nodeId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("nodeId")), refVal_nodeId );
        setNodeId(refVal_nodeId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("value")))
    {
        std::shared_ptr<BTMParameter_1> refVal_value;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("value")), refVal_value );
        setValue(refVal_value);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("namespace")))
    {
        utility::string_t refVal_namespace;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("namespace")), refVal_namespace );
        setRNamespace(refVal_namespace);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("enumName")))
    {
        utility::string_t refVal_enumName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("enumName")), refVal_enumName );
        setEnumName(refVal_enumName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("enumValue")))
    {
        utility::string_t refVal_enumValue;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("enumValue")), refVal_enumValue );
        setEnumValue(refVal_enumValue);
    }
    return ok;
}

utility::string_t BTMConfiguredValueByEnum_1923::getRNamespace() const
{
    return m_r_namespace;
}

void BTMConfiguredValueByEnum_1923::setRNamespace(const utility::string_t& value)
{
    m_r_namespace = value;
    m_r_namespaceIsSet = true;
}

bool BTMConfiguredValueByEnum_1923::rNamespaceIsSet() const
{
    return m_r_namespaceIsSet;
}

void BTMConfiguredValueByEnum_1923::unsetr_namespace()
{
    m_r_namespaceIsSet = false;
}
utility::string_t BTMConfiguredValueByEnum_1923::getEnumName() const
{
    return m_EnumName;
}

void BTMConfiguredValueByEnum_1923::setEnumName(const utility::string_t& value)
{
    m_EnumName = value;
    m_EnumNameIsSet = true;
}

bool BTMConfiguredValueByEnum_1923::enumNameIsSet() const
{
    return m_EnumNameIsSet;
}

void BTMConfiguredValueByEnum_1923::unsetEnumName()
{
    m_EnumNameIsSet = false;
}
utility::string_t BTMConfiguredValueByEnum_1923::getEnumValue() const
{
    return m_EnumValue;
}

void BTMConfiguredValueByEnum_1923::setEnumValue(const utility::string_t& value)
{
    m_EnumValue = value;
    m_EnumValueIsSet = true;
}

bool BTMConfiguredValueByEnum_1923::enumValueIsSet() const
{
    return m_EnumValueIsSet;
}

void BTMConfiguredValueByEnum_1923::unsetEnumValue()
{
    m_EnumValueIsSet = false;
}
}
}
}
}

