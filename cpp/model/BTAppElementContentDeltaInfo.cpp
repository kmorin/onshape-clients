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



#include "BTAppElementContentDeltaInfo.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTAppElementContentDeltaInfo::BTAppElementContentDeltaInfo()
{
    m_Delta = utility::conversions::to_string_t("");
    m_DeltaIsSet = false;
}

BTAppElementContentDeltaInfo::~BTAppElementContentDeltaInfo()
{
}

void BTAppElementContentDeltaInfo::validate()
{
    // TODO: implement validation
}

web::json::value BTAppElementContentDeltaInfo::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_DeltaIsSet)
    {
        val[utility::conversions::to_string_t("delta")] = ModelBase::toJson(m_Delta);
    }

    return val;
}

bool BTAppElementContentDeltaInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("delta")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delta"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_delta;
            ok &= ModelBase::fromJson(fieldValue, refVal_delta);
            setDelta(refVal_delta);
        }
    }
    return ok;
}

void BTAppElementContentDeltaInfo::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_DeltaIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("delta"), m_Delta));
    }
}

bool BTAppElementContentDeltaInfo::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("delta")))
    {
        utility::string_t refVal_delta;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("delta")), refVal_delta );
        setDelta(refVal_delta);
    }
    return ok;
}

utility::string_t BTAppElementContentDeltaInfo::getDelta() const
{
    return m_Delta;
}

void BTAppElementContentDeltaInfo::setDelta(const utility::string_t& value)
{
    m_Delta = value;
    m_DeltaIsSet = true;
}

bool BTAppElementContentDeltaInfo::deltaIsSet() const
{
    return m_DeltaIsSet;
}

void BTAppElementContentDeltaInfo::unsetDelta()
{
    m_DeltaIsSet = false;
}
}
}
}
}

