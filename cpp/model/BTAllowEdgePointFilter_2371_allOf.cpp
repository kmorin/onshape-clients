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



#include "BTAllowEdgePointFilter_2371_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTAllowEdgePointFilter_2371_allOf::BTAllowEdgePointFilter_2371_allOf()
{
    m_AllowsEdgePoint = false;
    m_AllowsEdgePointIsSet = false;
    m_BtType = utility::conversions::to_string_t("");
    m_BtTypeIsSet = false;
}

BTAllowEdgePointFilter_2371_allOf::~BTAllowEdgePointFilter_2371_allOf()
{
}

void BTAllowEdgePointFilter_2371_allOf::validate()
{
    // TODO: implement validation
}

web::json::value BTAllowEdgePointFilter_2371_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_AllowsEdgePointIsSet)
    {
        val[utility::conversions::to_string_t("allowsEdgePoint")] = ModelBase::toJson(m_AllowsEdgePoint);
    }
    if(m_BtTypeIsSet)
    {
        val[utility::conversions::to_string_t("btType")] = ModelBase::toJson(m_BtType);
    }

    return val;
}

bool BTAllowEdgePointFilter_2371_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("allowsEdgePoint")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allowsEdgePoint"));
        if(!fieldValue.is_null())
        {
            bool refVal_allowsEdgePoint;
            ok &= ModelBase::fromJson(fieldValue, refVal_allowsEdgePoint);
            setAllowsEdgePoint(refVal_allowsEdgePoint);
        }
    }
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
    return ok;
}

void BTAllowEdgePointFilter_2371_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_AllowsEdgePointIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("allowsEdgePoint"), m_AllowsEdgePoint));
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
}

bool BTAllowEdgePointFilter_2371_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("allowsEdgePoint")))
    {
        bool refVal_allowsEdgePoint;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("allowsEdgePoint")), refVal_allowsEdgePoint );
        setAllowsEdgePoint(refVal_allowsEdgePoint);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    return ok;
}

bool BTAllowEdgePointFilter_2371_allOf::isAllowsEdgePoint() const
{
    return m_AllowsEdgePoint;
}

void BTAllowEdgePointFilter_2371_allOf::setAllowsEdgePoint(bool value)
{
    m_AllowsEdgePoint = value;
    m_AllowsEdgePointIsSet = true;
}

bool BTAllowEdgePointFilter_2371_allOf::allowsEdgePointIsSet() const
{
    return m_AllowsEdgePointIsSet;
}

void BTAllowEdgePointFilter_2371_allOf::unsetAllowsEdgePoint()
{
    m_AllowsEdgePointIsSet = false;
}
utility::string_t BTAllowEdgePointFilter_2371_allOf::getBtType() const
{
    return m_BtType;
}

void BTAllowEdgePointFilter_2371_allOf::setBtType(const utility::string_t& value)
{
    m_BtType = value;
    m_BtTypeIsSet = true;
}

bool BTAllowEdgePointFilter_2371_allOf::btTypeIsSet() const
{
    return m_BtTypeIsSet;
}

void BTAllowEdgePointFilter_2371_allOf::unsetBtType()
{
    m_BtTypeIsSet = false;
}
}
}
}
}

