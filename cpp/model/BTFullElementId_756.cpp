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



#include "BTFullElementId_756.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTFullElementId_756::BTFullElementId_756()
{
    m_BtType = utility::conversions::to_string_t("");
    m_BtTypeIsSet = false;
    m_Configured = false;
    m_ConfiguredIsSet = false;
    m_ElementId = utility::conversions::to_string_t("");
    m_ElementIdIsSet = false;
    m_MicroversionIdIsSet = false;
    m_MicroversionIdAndConfigurationIsSet = false;
    m_TargetIsSet = false;
}

BTFullElementId_756::~BTFullElementId_756()
{
}

void BTFullElementId_756::validate()
{
    // TODO: implement validation
}

web::json::value BTFullElementId_756::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_BtTypeIsSet)
    {
        val[utility::conversions::to_string_t("btType")] = ModelBase::toJson(m_BtType);
    }
    if(m_ConfiguredIsSet)
    {
        val[utility::conversions::to_string_t("configured")] = ModelBase::toJson(m_Configured);
    }
    if(m_ElementIdIsSet)
    {
        val[utility::conversions::to_string_t("elementId")] = ModelBase::toJson(m_ElementId);
    }
    if(m_MicroversionIdIsSet)
    {
        val[utility::conversions::to_string_t("microversionId")] = ModelBase::toJson(m_MicroversionId);
    }
    if(m_MicroversionIdAndConfigurationIsSet)
    {
        val[utility::conversions::to_string_t("microversionIdAndConfiguration")] = ModelBase::toJson(m_MicroversionIdAndConfiguration);
    }
    if(m_TargetIsSet)
    {
        val[utility::conversions::to_string_t("target")] = ModelBase::toJson(m_Target);
    }

    return val;
}

bool BTFullElementId_756::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("btType")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("btType"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_btType;
            ok &= ModelBase::fromJson(fieldValue, refVal_btType);
            setBtType(refVal_btType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("configured")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configured"));
        if(!fieldValue.is_null())
        {
            bool refVal_configured;
            ok &= ModelBase::fromJson(fieldValue, refVal_configured);
            setConfigured(refVal_configured);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("elementId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("elementId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_elementId;
            ok &= ModelBase::fromJson(fieldValue, refVal_elementId);
            setElementId(refVal_elementId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("microversionId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("microversionId"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTMicroversionId_366> refVal_microversionId;
            ok &= ModelBase::fromJson(fieldValue, refVal_microversionId);
            setMicroversionId(refVal_microversionId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("microversionIdAndConfiguration")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("microversionIdAndConfiguration"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTMicroversionIdAndConfiguration_2338> refVal_microversionIdAndConfiguration;
            ok &= ModelBase::fromJson(fieldValue, refVal_microversionIdAndConfiguration);
            setMicroversionIdAndConfiguration(refVal_microversionIdAndConfiguration);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTMicroversionIdAndConfiguration_2338> refVal_target;
            ok &= ModelBase::fromJson(fieldValue, refVal_target);
            setTarget(refVal_target);
        }
    }
    return ok;
}

void BTFullElementId_756::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_ConfiguredIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("configured"), m_Configured));
    }
    if(m_ElementIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("elementId"), m_ElementId));
    }
    if(m_MicroversionIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("microversionId"), m_MicroversionId));
    }
    if(m_MicroversionIdAndConfigurationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("microversionIdAndConfiguration"), m_MicroversionIdAndConfiguration));
    }
    if(m_TargetIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("target"), m_Target));
    }
}

bool BTFullElementId_756::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("configured")))
    {
        bool refVal_configured;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("configured")), refVal_configured );
        setConfigured(refVal_configured);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("elementId")))
    {
        utility::string_t refVal_elementId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("elementId")), refVal_elementId );
        setElementId(refVal_elementId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("microversionId")))
    {
        std::shared_ptr<BTMicroversionId_366> refVal_microversionId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("microversionId")), refVal_microversionId );
        setMicroversionId(refVal_microversionId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("microversionIdAndConfiguration")))
    {
        std::shared_ptr<BTMicroversionIdAndConfiguration_2338> refVal_microversionIdAndConfiguration;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("microversionIdAndConfiguration")), refVal_microversionIdAndConfiguration );
        setMicroversionIdAndConfiguration(refVal_microversionIdAndConfiguration);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("target")))
    {
        std::shared_ptr<BTMicroversionIdAndConfiguration_2338> refVal_target;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("target")), refVal_target );
        setTarget(refVal_target);
    }
    return ok;
}

utility::string_t BTFullElementId_756::getBtType() const
{
    return m_BtType;
}

void BTFullElementId_756::setBtType(const utility::string_t& value)
{
    m_BtType = value;
    m_BtTypeIsSet = true;
}

bool BTFullElementId_756::btTypeIsSet() const
{
    return m_BtTypeIsSet;
}

void BTFullElementId_756::unsetBtType()
{
    m_BtTypeIsSet = false;
}
bool BTFullElementId_756::isConfigured() const
{
    return m_Configured;
}

void BTFullElementId_756::setConfigured(bool value)
{
    m_Configured = value;
    m_ConfiguredIsSet = true;
}

bool BTFullElementId_756::configuredIsSet() const
{
    return m_ConfiguredIsSet;
}

void BTFullElementId_756::unsetConfigured()
{
    m_ConfiguredIsSet = false;
}
utility::string_t BTFullElementId_756::getElementId() const
{
    return m_ElementId;
}

void BTFullElementId_756::setElementId(const utility::string_t& value)
{
    m_ElementId = value;
    m_ElementIdIsSet = true;
}

bool BTFullElementId_756::elementIdIsSet() const
{
    return m_ElementIdIsSet;
}

void BTFullElementId_756::unsetElementId()
{
    m_ElementIdIsSet = false;
}
std::shared_ptr<BTMicroversionId_366> BTFullElementId_756::getMicroversionId() const
{
    return m_MicroversionId;
}

void BTFullElementId_756::setMicroversionId(const std::shared_ptr<BTMicroversionId_366>& value)
{
    m_MicroversionId = value;
    m_MicroversionIdIsSet = true;
}

bool BTFullElementId_756::microversionIdIsSet() const
{
    return m_MicroversionIdIsSet;
}

void BTFullElementId_756::unsetMicroversionId()
{
    m_MicroversionIdIsSet = false;
}
std::shared_ptr<BTMicroversionIdAndConfiguration_2338> BTFullElementId_756::getMicroversionIdAndConfiguration() const
{
    return m_MicroversionIdAndConfiguration;
}

void BTFullElementId_756::setMicroversionIdAndConfiguration(const std::shared_ptr<BTMicroversionIdAndConfiguration_2338>& value)
{
    m_MicroversionIdAndConfiguration = value;
    m_MicroversionIdAndConfigurationIsSet = true;
}

bool BTFullElementId_756::microversionIdAndConfigurationIsSet() const
{
    return m_MicroversionIdAndConfigurationIsSet;
}

void BTFullElementId_756::unsetMicroversionIdAndConfiguration()
{
    m_MicroversionIdAndConfigurationIsSet = false;
}
std::shared_ptr<BTMicroversionIdAndConfiguration_2338> BTFullElementId_756::getTarget() const
{
    return m_Target;
}

void BTFullElementId_756::setTarget(const std::shared_ptr<BTMicroversionIdAndConfiguration_2338>& value)
{
    m_Target = value;
    m_TargetIsSet = true;
}

bool BTFullElementId_756::targetIsSet() const
{
    return m_TargetIsSet;
}

void BTFullElementId_756::unsetTarget()
{
    m_TargetIsSet = false;
}
}
}
}
}

