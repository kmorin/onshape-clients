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



#include "BTPTopLevelConstantDeclaration_283_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTPTopLevelConstantDeclaration_283_allOf::BTPTopLevelConstantDeclaration_283_allOf()
{
    m_DeclarationIsSet = false;
    m_BtType = utility::conversions::to_string_t("");
    m_BtTypeIsSet = false;
}

BTPTopLevelConstantDeclaration_283_allOf::~BTPTopLevelConstantDeclaration_283_allOf()
{
}

void BTPTopLevelConstantDeclaration_283_allOf::validate()
{
    // TODO: implement validation
}

web::json::value BTPTopLevelConstantDeclaration_283_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_DeclarationIsSet)
    {
        val[utility::conversions::to_string_t("declaration")] = ModelBase::toJson(m_Declaration);
    }
    if(m_BtTypeIsSet)
    {
        val[utility::conversions::to_string_t("btType")] = ModelBase::toJson(m_BtType);
    }

    return val;
}

bool BTPTopLevelConstantDeclaration_283_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("declaration")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("declaration"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTPStatementConstantDeclaration_273> refVal_declaration;
            ok &= ModelBase::fromJson(fieldValue, refVal_declaration);
            setDeclaration(refVal_declaration);
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

void BTPTopLevelConstantDeclaration_283_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_DeclarationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("declaration"), m_Declaration));
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
}

bool BTPTopLevelConstantDeclaration_283_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("declaration")))
    {
        std::shared_ptr<BTPStatementConstantDeclaration_273> refVal_declaration;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("declaration")), refVal_declaration );
        setDeclaration(refVal_declaration);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    return ok;
}

std::shared_ptr<BTPStatementConstantDeclaration_273> BTPTopLevelConstantDeclaration_283_allOf::getDeclaration() const
{
    return m_Declaration;
}

void BTPTopLevelConstantDeclaration_283_allOf::setDeclaration(const std::shared_ptr<BTPStatementConstantDeclaration_273>& value)
{
    m_Declaration = value;
    m_DeclarationIsSet = true;
}

bool BTPTopLevelConstantDeclaration_283_allOf::declarationIsSet() const
{
    return m_DeclarationIsSet;
}

void BTPTopLevelConstantDeclaration_283_allOf::unsetDeclaration()
{
    m_DeclarationIsSet = false;
}
utility::string_t BTPTopLevelConstantDeclaration_283_allOf::getBtType() const
{
    return m_BtType;
}

void BTPTopLevelConstantDeclaration_283_allOf::setBtType(const utility::string_t& value)
{
    m_BtType = value;
    m_BtTypeIsSet = true;
}

bool BTPTopLevelConstantDeclaration_283_allOf::btTypeIsSet() const
{
    return m_BtTypeIsSet;
}

void BTPTopLevelConstantDeclaration_283_allOf::unsetBtType()
{
    m_BtTypeIsSet = false;
}
}
}
}
}

