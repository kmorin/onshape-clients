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



#include "BTMParameterReferencePartStudio_3302_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTMParameterReferencePartStudio_3302_allOf::BTMParameterReferencePartStudio_3302_allOf()
{
    m_PartQueryIsSet = false;
    m_BlockBuildFunctionAccess = false;
    m_BlockBuildFunctionAccessIsSet = false;
    m_StandardContentParametersId = utility::conversions::to_string_t("");
    m_StandardContentParametersIdIsSet = false;
    m_BtType = utility::conversions::to_string_t("");
    m_BtTypeIsSet = false;
}

BTMParameterReferencePartStudio_3302_allOf::~BTMParameterReferencePartStudio_3302_allOf()
{
}

void BTMParameterReferencePartStudio_3302_allOf::validate()
{
    // TODO: implement validation
}

web::json::value BTMParameterReferencePartStudio_3302_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_PartQueryIsSet)
    {
        val[utility::conversions::to_string_t("partQuery")] = ModelBase::toJson(m_PartQuery);
    }
    if(m_BlockBuildFunctionAccessIsSet)
    {
        val[utility::conversions::to_string_t("blockBuildFunctionAccess")] = ModelBase::toJson(m_BlockBuildFunctionAccess);
    }
    if(m_StandardContentParametersIdIsSet)
    {
        val[utility::conversions::to_string_t("standardContentParametersId")] = ModelBase::toJson(m_StandardContentParametersId);
    }
    if(m_BtTypeIsSet)
    {
        val[utility::conversions::to_string_t("btType")] = ModelBase::toJson(m_BtType);
    }

    return val;
}

bool BTMParameterReferencePartStudio_3302_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("partQuery")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("partQuery"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTMParameterQueryList_148> refVal_partQuery;
            ok &= ModelBase::fromJson(fieldValue, refVal_partQuery);
            setPartQuery(refVal_partQuery);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("blockBuildFunctionAccess")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blockBuildFunctionAccess"));
        if(!fieldValue.is_null())
        {
            bool refVal_blockBuildFunctionAccess;
            ok &= ModelBase::fromJson(fieldValue, refVal_blockBuildFunctionAccess);
            setBlockBuildFunctionAccess(refVal_blockBuildFunctionAccess);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("standardContentParametersId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("standardContentParametersId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_standardContentParametersId;
            ok &= ModelBase::fromJson(fieldValue, refVal_standardContentParametersId);
            setStandardContentParametersId(refVal_standardContentParametersId);
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

void BTMParameterReferencePartStudio_3302_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_PartQueryIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("partQuery"), m_PartQuery));
    }
    if(m_BlockBuildFunctionAccessIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("blockBuildFunctionAccess"), m_BlockBuildFunctionAccess));
    }
    if(m_StandardContentParametersIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("standardContentParametersId"), m_StandardContentParametersId));
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
}

bool BTMParameterReferencePartStudio_3302_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("partQuery")))
    {
        std::shared_ptr<BTMParameterQueryList_148> refVal_partQuery;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("partQuery")), refVal_partQuery );
        setPartQuery(refVal_partQuery);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("blockBuildFunctionAccess")))
    {
        bool refVal_blockBuildFunctionAccess;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("blockBuildFunctionAccess")), refVal_blockBuildFunctionAccess );
        setBlockBuildFunctionAccess(refVal_blockBuildFunctionAccess);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("standardContentParametersId")))
    {
        utility::string_t refVal_standardContentParametersId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("standardContentParametersId")), refVal_standardContentParametersId );
        setStandardContentParametersId(refVal_standardContentParametersId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    return ok;
}

std::shared_ptr<BTMParameterQueryList_148> BTMParameterReferencePartStudio_3302_allOf::getPartQuery() const
{
    return m_PartQuery;
}

void BTMParameterReferencePartStudio_3302_allOf::setPartQuery(const std::shared_ptr<BTMParameterQueryList_148>& value)
{
    m_PartQuery = value;
    m_PartQueryIsSet = true;
}

bool BTMParameterReferencePartStudio_3302_allOf::partQueryIsSet() const
{
    return m_PartQueryIsSet;
}

void BTMParameterReferencePartStudio_3302_allOf::unsetPartQuery()
{
    m_PartQueryIsSet = false;
}
bool BTMParameterReferencePartStudio_3302_allOf::isBlockBuildFunctionAccess() const
{
    return m_BlockBuildFunctionAccess;
}

void BTMParameterReferencePartStudio_3302_allOf::setBlockBuildFunctionAccess(bool value)
{
    m_BlockBuildFunctionAccess = value;
    m_BlockBuildFunctionAccessIsSet = true;
}

bool BTMParameterReferencePartStudio_3302_allOf::blockBuildFunctionAccessIsSet() const
{
    return m_BlockBuildFunctionAccessIsSet;
}

void BTMParameterReferencePartStudio_3302_allOf::unsetBlockBuildFunctionAccess()
{
    m_BlockBuildFunctionAccessIsSet = false;
}
utility::string_t BTMParameterReferencePartStudio_3302_allOf::getStandardContentParametersId() const
{
    return m_StandardContentParametersId;
}

void BTMParameterReferencePartStudio_3302_allOf::setStandardContentParametersId(const utility::string_t& value)
{
    m_StandardContentParametersId = value;
    m_StandardContentParametersIdIsSet = true;
}

bool BTMParameterReferencePartStudio_3302_allOf::standardContentParametersIdIsSet() const
{
    return m_StandardContentParametersIdIsSet;
}

void BTMParameterReferencePartStudio_3302_allOf::unsetStandardContentParametersId()
{
    m_StandardContentParametersIdIsSet = false;
}
utility::string_t BTMParameterReferencePartStudio_3302_allOf::getBtType() const
{
    return m_BtType;
}

void BTMParameterReferencePartStudio_3302_allOf::setBtType(const utility::string_t& value)
{
    m_BtType = value;
    m_BtTypeIsSet = true;
}

bool BTMParameterReferencePartStudio_3302_allOf::btTypeIsSet() const
{
    return m_BtTypeIsSet;
}

void BTMParameterReferencePartStudio_3302_allOf::unsetBtType()
{
    m_BtTypeIsSet = false;
}
}
}
}
}

