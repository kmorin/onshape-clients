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



#include "ProratedCharges.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




ProratedCharges::ProratedCharges()
{
    m_Amount = 0L;
    m_AmountIsSet = false;
    m_date = utility::datetime();
    m_dateIsSet = false;
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
}

ProratedCharges::~ProratedCharges()
{
}

void ProratedCharges::validate()
{
    // TODO: implement validation
}

web::json::value ProratedCharges::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_AmountIsSet)
    {
        val[utility::conversions::to_string_t("amount")] = ModelBase::toJson(m_Amount);
    }
    if(m_dateIsSet)
    {
        val[utility::conversions::to_string_t("date")] = ModelBase::toJson(m_date);
    }
    if(m_DescriptionIsSet)
    {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(m_Description);
    }

    return val;
}

bool ProratedCharges::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("amount")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("amount"));
        if(!fieldValue.is_null())
        {
            int64_t refVal_amount;
            ok &= ModelBase::fromJson(fieldValue, refVal_amount);
            setAmount(refVal_amount);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("date")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("date"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal_date;
            ok &= ModelBase::fromJson(fieldValue, refVal_date);
            setDate(refVal_date);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_description;
            ok &= ModelBase::fromJson(fieldValue, refVal_description);
            setDescription(refVal_description);
        }
    }
    return ok;
}

void ProratedCharges::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_AmountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("amount"), m_Amount));
    }
    if(m_dateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("date"), m_date));
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("description"), m_Description));
    }
}

bool ProratedCharges::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("amount")))
    {
        int64_t refVal_amount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("amount")), refVal_amount );
        setAmount(refVal_amount);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("date")))
    {
        utility::datetime refVal_date;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("date")), refVal_date );
        setDate(refVal_date);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("description")))
    {
        utility::string_t refVal_description;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("description")), refVal_description );
        setDescription(refVal_description);
    }
    return ok;
}

int64_t ProratedCharges::getAmount() const
{
    return m_Amount;
}

void ProratedCharges::setAmount(int64_t value)
{
    m_Amount = value;
    m_AmountIsSet = true;
}

bool ProratedCharges::amountIsSet() const
{
    return m_AmountIsSet;
}

void ProratedCharges::unsetAmount()
{
    m_AmountIsSet = false;
}
utility::datetime ProratedCharges::getDate() const
{
    return m_date;
}

void ProratedCharges::setDate(const utility::datetime& value)
{
    m_date = value;
    m_dateIsSet = true;
}

bool ProratedCharges::dateIsSet() const
{
    return m_dateIsSet;
}

void ProratedCharges::unsetdate()
{
    m_dateIsSet = false;
}
utility::string_t ProratedCharges::getDescription() const
{
    return m_Description;
}

void ProratedCharges::setDescription(const utility::string_t& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}

bool ProratedCharges::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void ProratedCharges::unsetDescription()
{
    m_DescriptionIsSet = false;
}
}
}
}
}

