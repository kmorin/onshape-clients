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



#include "BTCircleDescription_1145.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTCircleDescription_1145::BTCircleDescription_1145()
{
    m_NormalIsSet = false;
    m_Radius = 0.0;
    m_RadiusIsSet = false;
    m_OriginIsSet = false;
}

BTCircleDescription_1145::~BTCircleDescription_1145()
{
}

void BTCircleDescription_1145::validate()
{
    // TODO: implement validation
}

web::json::value BTCircleDescription_1145::toJson() const
{
    web::json::value val = this->BTCurveDescription_1583::toJson();
    
    if(m_NormalIsSet)
    {
        val[utility::conversions::to_string_t("normal")] = ModelBase::toJson(m_Normal);
    }
    if(m_RadiusIsSet)
    {
        val[utility::conversions::to_string_t("radius")] = ModelBase::toJson(m_Radius);
    }
    if(m_OriginIsSet)
    {
        val[utility::conversions::to_string_t("origin")] = ModelBase::toJson(m_Origin);
    }

    return val;
}

bool BTCircleDescription_1145::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->BTCurveDescription_1583::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t("normal")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("normal"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTVector3d_389> refVal_normal;
            ok &= ModelBase::fromJson(fieldValue, refVal_normal);
            setNormal(refVal_normal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("radius")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("radius"));
        if(!fieldValue.is_null())
        {
            double refVal_radius;
            ok &= ModelBase::fromJson(fieldValue, refVal_radius);
            setRadius(refVal_radius);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("origin")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTVector3d_389> refVal_origin;
            ok &= ModelBase::fromJson(fieldValue, refVal_origin);
            setOrigin(refVal_origin);
        }
    }
    return ok;
}

void BTCircleDescription_1145::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("type"), m_Type));
    }
    if(m_NormalIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("normal"), m_Normal));
    }
    if(m_RadiusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("radius"), m_Radius));
    }
    if(m_OriginIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("origin"), m_Origin));
    }
}

bool BTCircleDescription_1145::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("type")))
    {
        utility::string_t refVal_type;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("type")), refVal_type );
        setType(refVal_type);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("normal")))
    {
        std::shared_ptr<BTVector3d_389> refVal_normal;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("normal")), refVal_normal );
        setNormal(refVal_normal);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("radius")))
    {
        double refVal_radius;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("radius")), refVal_radius );
        setRadius(refVal_radius);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("origin")))
    {
        std::shared_ptr<BTVector3d_389> refVal_origin;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("origin")), refVal_origin );
        setOrigin(refVal_origin);
    }
    return ok;
}

std::shared_ptr<BTVector3d_389> BTCircleDescription_1145::getNormal() const
{
    return m_Normal;
}

void BTCircleDescription_1145::setNormal(const std::shared_ptr<BTVector3d_389>& value)
{
    m_Normal = value;
    m_NormalIsSet = true;
}

bool BTCircleDescription_1145::normalIsSet() const
{
    return m_NormalIsSet;
}

void BTCircleDescription_1145::unsetNormal()
{
    m_NormalIsSet = false;
}
double BTCircleDescription_1145::getRadius() const
{
    return m_Radius;
}

void BTCircleDescription_1145::setRadius(double value)
{
    m_Radius = value;
    m_RadiusIsSet = true;
}

bool BTCircleDescription_1145::radiusIsSet() const
{
    return m_RadiusIsSet;
}

void BTCircleDescription_1145::unsetRadius()
{
    m_RadiusIsSet = false;
}
std::shared_ptr<BTVector3d_389> BTCircleDescription_1145::getOrigin() const
{
    return m_Origin;
}

void BTCircleDescription_1145::setOrigin(const std::shared_ptr<BTVector3d_389>& value)
{
    m_Origin = value;
    m_OriginIsSet = true;
}

bool BTCircleDescription_1145::originIsSet() const
{
    return m_OriginIsSet;
}

void BTCircleDescription_1145::unsetOrigin()
{
    m_OriginIsSet = false;
}
}
}
}
}

