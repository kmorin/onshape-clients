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



#include "BTBodyTypeFilter_112.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTBodyTypeFilter_112::BTBodyTypeFilter_112()
{
    m_BodyType = utility::conversions::to_string_t("");
    m_BodyTypeIsSet = false;
}

BTBodyTypeFilter_112::~BTBodyTypeFilter_112()
{
}

void BTBodyTypeFilter_112::validate()
{
    // TODO: implement validation
}

web::json::value BTBodyTypeFilter_112::toJson() const
{
    web::json::value val = this->BTQueryFilter_183::toJson();
    
    if(m_BodyTypeIsSet)
    {
        val[utility::conversions::to_string_t("bodyType")] = ModelBase::toJson(m_BodyType);
    }

    return val;
}

bool BTBodyTypeFilter_112::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->BTQueryFilter_183::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t("bodyType")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bodyType"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_bodyType;
            ok &= ModelBase::fromJson(fieldValue, refVal_bodyType);
            setBodyType(refVal_bodyType);
        }
    }
    return ok;
}

void BTBodyTypeFilter_112::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_BodyTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("bodyType"), m_BodyType));
    }
}

bool BTBodyTypeFilter_112::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("bodyType")))
    {
        utility::string_t refVal_bodyType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("bodyType")), refVal_bodyType );
        setBodyType(refVal_bodyType);
    }
    return ok;
}

utility::string_t BTBodyTypeFilter_112::getBodyType() const
{
    return m_BodyType;
}

void BTBodyTypeFilter_112::setBodyType(const utility::string_t& value)
{
    m_BodyType = value;
    m_BodyTypeIsSet = true;
}

bool BTBodyTypeFilter_112::bodyTypeIsSet() const
{
    return m_BodyTypeIsSet;
}

void BTBodyTypeFilter_112::unsetBodyType()
{
    m_BodyTypeIsSet = false;
}
}
}
}
}

