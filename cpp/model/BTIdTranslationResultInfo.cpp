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



#include "BTIdTranslationResultInfo.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTIdTranslationResultInfo::BTIdTranslationResultInfo()
{
    m_Source = utility::conversions::to_string_t("");
    m_SourceIsSet = false;
    m_Status = utility::conversions::to_string_t("");
    m_StatusIsSet = false;
    m_TargetIsSet = false;
}

BTIdTranslationResultInfo::~BTIdTranslationResultInfo()
{
}

void BTIdTranslationResultInfo::validate()
{
    // TODO: implement validation
}

web::json::value BTIdTranslationResultInfo::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_SourceIsSet)
    {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(m_Source);
    }
    if(m_StatusIsSet)
    {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(m_Status);
    }
    if(m_TargetIsSet)
    {
        val[utility::conversions::to_string_t("target")] = ModelBase::toJson(m_Target);
    }

    return val;
}

bool BTIdTranslationResultInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_source;
            ok &= ModelBase::fromJson(fieldValue, refVal_source);
            setSource(refVal_source);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_status;
            ok &= ModelBase::fromJson(fieldValue, refVal_status);
            setStatus(refVal_status);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_target;
            ok &= ModelBase::fromJson(fieldValue, refVal_target);
            setTarget(refVal_target);
        }
    }
    return ok;
}

void BTIdTranslationResultInfo::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_SourceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("source"), m_Source));
    }
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("status"), m_Status));
    }
    if(m_TargetIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("target"), m_Target));
    }
}

bool BTIdTranslationResultInfo::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("source")))
    {
        utility::string_t refVal_source;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("source")), refVal_source );
        setSource(refVal_source);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("status")))
    {
        utility::string_t refVal_status;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("status")), refVal_status );
        setStatus(refVal_status);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("target")))
    {
        std::vector<utility::string_t> refVal_target;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("target")), refVal_target );
        setTarget(refVal_target);
    }
    return ok;
}

utility::string_t BTIdTranslationResultInfo::getSource() const
{
    return m_Source;
}

void BTIdTranslationResultInfo::setSource(const utility::string_t& value)
{
    m_Source = value;
    m_SourceIsSet = true;
}

bool BTIdTranslationResultInfo::sourceIsSet() const
{
    return m_SourceIsSet;
}

void BTIdTranslationResultInfo::unsetSource()
{
    m_SourceIsSet = false;
}
utility::string_t BTIdTranslationResultInfo::getStatus() const
{
    return m_Status;
}

void BTIdTranslationResultInfo::setStatus(const utility::string_t& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}

bool BTIdTranslationResultInfo::statusIsSet() const
{
    return m_StatusIsSet;
}

void BTIdTranslationResultInfo::unsetStatus()
{
    m_StatusIsSet = false;
}
std::vector<utility::string_t>& BTIdTranslationResultInfo::getTarget()
{
    return m_Target;
}

void BTIdTranslationResultInfo::setTarget(const std::vector<utility::string_t>& value)
{
    m_Target = value;
    m_TargetIsSet = true;
}

bool BTIdTranslationResultInfo::targetIsSet() const
{
    return m_TargetIsSet;
}

void BTIdTranslationResultInfo::unsetTarget()
{
    m_TargetIsSet = false;
}
}
}
}
}

