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



#include "BTFSValueBoolean_1195_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTFSValueBoolean_1195_allOf::BTFSValueBoolean_1195_allOf()
{
    m_ValueObject = false;
    m_ValueObjectIsSet = false;
    m_Value = false;
    m_ValueIsSet = false;
    m_BtType = utility::conversions::to_string_t("");
    m_BtTypeIsSet = false;
}

BTFSValueBoolean_1195_allOf::~BTFSValueBoolean_1195_allOf()
{
}

void BTFSValueBoolean_1195_allOf::validate()
{
    // TODO: implement validation
}

web::json::value BTFSValueBoolean_1195_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ValueObjectIsSet)
    {
        val[utility::conversions::to_string_t("valueObject")] = ModelBase::toJson(m_ValueObject);
    }
    if(m_ValueIsSet)
    {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(m_Value);
    }
    if(m_BtTypeIsSet)
    {
        val[utility::conversions::to_string_t("btType")] = ModelBase::toJson(m_BtType);
    }

    return val;
}

bool BTFSValueBoolean_1195_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("valueObject")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("valueObject"));
        if(!fieldValue.is_null())
        {
            bool refVal_valueObject;
            ok &= ModelBase::fromJson(fieldValue, refVal_valueObject);
            setValueObject(refVal_valueObject);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            bool refVal_value;
            ok &= ModelBase::fromJson(fieldValue, refVal_value);
            setValue(refVal_value);
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

void BTFSValueBoolean_1195_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ValueObjectIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("valueObject"), m_ValueObject));
    }
    if(m_ValueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("value"), m_Value));
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
}

bool BTFSValueBoolean_1195_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("valueObject")))
    {
        bool refVal_valueObject;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("valueObject")), refVal_valueObject );
        setValueObject(refVal_valueObject);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("value")))
    {
        bool refVal_value;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("value")), refVal_value );
        setValue(refVal_value);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    return ok;
}

bool BTFSValueBoolean_1195_allOf::isValueObject() const
{
    return m_ValueObject;
}

void BTFSValueBoolean_1195_allOf::setValueObject(bool value)
{
    m_ValueObject = value;
    m_ValueObjectIsSet = true;
}

bool BTFSValueBoolean_1195_allOf::valueObjectIsSet() const
{
    return m_ValueObjectIsSet;
}

void BTFSValueBoolean_1195_allOf::unsetValueObject()
{
    m_ValueObjectIsSet = false;
}
bool BTFSValueBoolean_1195_allOf::isValue() const
{
    return m_Value;
}

void BTFSValueBoolean_1195_allOf::setValue(bool value)
{
    m_Value = value;
    m_ValueIsSet = true;
}

bool BTFSValueBoolean_1195_allOf::valueIsSet() const
{
    return m_ValueIsSet;
}

void BTFSValueBoolean_1195_allOf::unsetValue()
{
    m_ValueIsSet = false;
}
utility::string_t BTFSValueBoolean_1195_allOf::getBtType() const
{
    return m_BtType;
}

void BTFSValueBoolean_1195_allOf::setBtType(const utility::string_t& value)
{
    m_BtType = value;
    m_BtTypeIsSet = true;
}

bool BTFSValueBoolean_1195_allOf::btTypeIsSet() const
{
    return m_BtTypeIsSet;
}

void BTFSValueBoolean_1195_allOf::unsetBtType()
{
    m_BtTypeIsSet = false;
}
}
}
}
}

