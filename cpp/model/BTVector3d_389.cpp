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



#include "BTVector3d_389.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTVector3d_389::BTVector3d_389()
{
    m_BtType = utility::conversions::to_string_t("");
    m_BtTypeIsSet = false;
    m_x = 0.0;
    m_xIsSet = false;
    m_y = 0.0;
    m_yIsSet = false;
    m_z = 0.0;
    m_zIsSet = false;
}

BTVector3d_389::~BTVector3d_389()
{
}

void BTVector3d_389::validate()
{
    // TODO: implement validation
}

web::json::value BTVector3d_389::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_BtTypeIsSet)
    {
        val[utility::conversions::to_string_t("btType")] = ModelBase::toJson(m_BtType);
    }
    if(m_xIsSet)
    {
        val[utility::conversions::to_string_t("x")] = ModelBase::toJson(m_x);
    }
    if(m_yIsSet)
    {
        val[utility::conversions::to_string_t("y")] = ModelBase::toJson(m_y);
    }
    if(m_zIsSet)
    {
        val[utility::conversions::to_string_t("z")] = ModelBase::toJson(m_z);
    }

    return val;
}

bool BTVector3d_389::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("x")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("x"));
        if(!fieldValue.is_null())
        {
            double refVal_x;
            ok &= ModelBase::fromJson(fieldValue, refVal_x);
            setX(refVal_x);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("y")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("y"));
        if(!fieldValue.is_null())
        {
            double refVal_y;
            ok &= ModelBase::fromJson(fieldValue, refVal_y);
            setY(refVal_y);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("z")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("z"));
        if(!fieldValue.is_null())
        {
            double refVal_z;
            ok &= ModelBase::fromJson(fieldValue, refVal_z);
            setZ(refVal_z);
        }
    }
    return ok;
}

void BTVector3d_389::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_xIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("x"), m_x));
    }
    if(m_yIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("y"), m_y));
    }
    if(m_zIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("z"), m_z));
    }
}

bool BTVector3d_389::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("x")))
    {
        double refVal_x;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("x")), refVal_x );
        setX(refVal_x);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("y")))
    {
        double refVal_y;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("y")), refVal_y );
        setY(refVal_y);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("z")))
    {
        double refVal_z;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("z")), refVal_z );
        setZ(refVal_z);
    }
    return ok;
}

utility::string_t BTVector3d_389::getBtType() const
{
    return m_BtType;
}

void BTVector3d_389::setBtType(const utility::string_t& value)
{
    m_BtType = value;
    m_BtTypeIsSet = true;
}

bool BTVector3d_389::btTypeIsSet() const
{
    return m_BtTypeIsSet;
}

void BTVector3d_389::unsetBtType()
{
    m_BtTypeIsSet = false;
}
double BTVector3d_389::getX() const
{
    return m_x;
}

void BTVector3d_389::setX(double value)
{
    m_x = value;
    m_xIsSet = true;
}

bool BTVector3d_389::XIsSet() const
{
    return m_xIsSet;
}

void BTVector3d_389::unsetx()
{
    m_xIsSet = false;
}
double BTVector3d_389::getY() const
{
    return m_y;
}

void BTVector3d_389::setY(double value)
{
    m_y = value;
    m_yIsSet = true;
}

bool BTVector3d_389::YIsSet() const
{
    return m_yIsSet;
}

void BTVector3d_389::unsety()
{
    m_yIsSet = false;
}
double BTVector3d_389::getZ() const
{
    return m_z;
}

void BTVector3d_389::setZ(double value)
{
    m_z = value;
    m_zIsSet = true;
}

bool BTVector3d_389::ZIsSet() const
{
    return m_zIsSet;
}

void BTVector3d_389::unsetz()
{
    m_zIsSet = false;
}
}
}
}
}

