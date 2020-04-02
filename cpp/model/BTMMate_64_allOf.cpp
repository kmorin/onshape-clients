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



#include "BTMMate_64_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTMMate_64_allOf::BTMMate_64_allOf()
{
    m_MateConnectorQueryListIsSet = false;
    m_PrimaryAxisAlignment = false;
    m_PrimaryAxisAlignmentIsSet = false;
    m_SecondaryAxisAlignment = utility::conversions::to_string_t("");
    m_SecondaryAxisAlignmentIsSet = false;
    m_MateOffsetIsSet = false;
    m_MateConnectorsIsSet = false;
    m_BtType = utility::conversions::to_string_t("");
    m_BtTypeIsSet = false;
}

BTMMate_64_allOf::~BTMMate_64_allOf()
{
}

void BTMMate_64_allOf::validate()
{
    // TODO: implement validation
}

web::json::value BTMMate_64_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_MateConnectorQueryListIsSet)
    {
        val[utility::conversions::to_string_t("mateConnectorQueryList")] = ModelBase::toJson(m_MateConnectorQueryList);
    }
    if(m_PrimaryAxisAlignmentIsSet)
    {
        val[utility::conversions::to_string_t("primaryAxisAlignment")] = ModelBase::toJson(m_PrimaryAxisAlignment);
    }
    if(m_SecondaryAxisAlignmentIsSet)
    {
        val[utility::conversions::to_string_t("secondaryAxisAlignment")] = ModelBase::toJson(m_SecondaryAxisAlignment);
    }
    if(m_MateOffsetIsSet)
    {
        val[utility::conversions::to_string_t("mateOffset")] = ModelBase::toJson(m_MateOffset);
    }
    if(m_MateConnectorsIsSet)
    {
        val[utility::conversions::to_string_t("mateConnectors")] = ModelBase::toJson(m_MateConnectors);
    }
    if(m_BtTypeIsSet)
    {
        val[utility::conversions::to_string_t("btType")] = ModelBase::toJson(m_BtType);
    }

    return val;
}

bool BTMMate_64_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("mateConnectorQueryList")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mateConnectorQueryList"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTMParameterQueryWithOccurrenceList_67> refVal_mateConnectorQueryList;
            ok &= ModelBase::fromJson(fieldValue, refVal_mateConnectorQueryList);
            setMateConnectorQueryList(refVal_mateConnectorQueryList);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("primaryAxisAlignment")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("primaryAxisAlignment"));
        if(!fieldValue.is_null())
        {
            bool refVal_primaryAxisAlignment;
            ok &= ModelBase::fromJson(fieldValue, refVal_primaryAxisAlignment);
            setPrimaryAxisAlignment(refVal_primaryAxisAlignment);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("secondaryAxisAlignment")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secondaryAxisAlignment"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_secondaryAxisAlignment;
            ok &= ModelBase::fromJson(fieldValue, refVal_secondaryAxisAlignment);
            setSecondaryAxisAlignment(refVal_secondaryAxisAlignment);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mateOffset")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mateOffset"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTVector3d_389> refVal_mateOffset;
            ok &= ModelBase::fromJson(fieldValue, refVal_mateOffset);
            setMateOffset(refVal_mateOffset);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mateConnectors")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mateConnectors"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<BTMMateConnector_66>> refVal_mateConnectors;
            ok &= ModelBase::fromJson(fieldValue, refVal_mateConnectors);
            setMateConnectors(refVal_mateConnectors);
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

void BTMMate_64_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_MateConnectorQueryListIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("mateConnectorQueryList"), m_MateConnectorQueryList));
    }
    if(m_PrimaryAxisAlignmentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("primaryAxisAlignment"), m_PrimaryAxisAlignment));
    }
    if(m_SecondaryAxisAlignmentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("secondaryAxisAlignment"), m_SecondaryAxisAlignment));
    }
    if(m_MateOffsetIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("mateOffset"), m_MateOffset));
    }
    if(m_MateConnectorsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("mateConnectors"), m_MateConnectors));
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
}

bool BTMMate_64_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("mateConnectorQueryList")))
    {
        std::shared_ptr<BTMParameterQueryWithOccurrenceList_67> refVal_mateConnectorQueryList;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("mateConnectorQueryList")), refVal_mateConnectorQueryList );
        setMateConnectorQueryList(refVal_mateConnectorQueryList);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("primaryAxisAlignment")))
    {
        bool refVal_primaryAxisAlignment;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("primaryAxisAlignment")), refVal_primaryAxisAlignment );
        setPrimaryAxisAlignment(refVal_primaryAxisAlignment);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("secondaryAxisAlignment")))
    {
        utility::string_t refVal_secondaryAxisAlignment;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("secondaryAxisAlignment")), refVal_secondaryAxisAlignment );
        setSecondaryAxisAlignment(refVal_secondaryAxisAlignment);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("mateOffset")))
    {
        std::shared_ptr<BTVector3d_389> refVal_mateOffset;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("mateOffset")), refVal_mateOffset );
        setMateOffset(refVal_mateOffset);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("mateConnectors")))
    {
        std::vector<std::shared_ptr<BTMMateConnector_66>> refVal_mateConnectors;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("mateConnectors")), refVal_mateConnectors );
        setMateConnectors(refVal_mateConnectors);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    return ok;
}

std::shared_ptr<BTMParameterQueryWithOccurrenceList_67> BTMMate_64_allOf::getMateConnectorQueryList() const
{
    return m_MateConnectorQueryList;
}

void BTMMate_64_allOf::setMateConnectorQueryList(const std::shared_ptr<BTMParameterQueryWithOccurrenceList_67>& value)
{
    m_MateConnectorQueryList = value;
    m_MateConnectorQueryListIsSet = true;
}

bool BTMMate_64_allOf::mateConnectorQueryListIsSet() const
{
    return m_MateConnectorQueryListIsSet;
}

void BTMMate_64_allOf::unsetMateConnectorQueryList()
{
    m_MateConnectorQueryListIsSet = false;
}
bool BTMMate_64_allOf::isPrimaryAxisAlignment() const
{
    return m_PrimaryAxisAlignment;
}

void BTMMate_64_allOf::setPrimaryAxisAlignment(bool value)
{
    m_PrimaryAxisAlignment = value;
    m_PrimaryAxisAlignmentIsSet = true;
}

bool BTMMate_64_allOf::primaryAxisAlignmentIsSet() const
{
    return m_PrimaryAxisAlignmentIsSet;
}

void BTMMate_64_allOf::unsetPrimaryAxisAlignment()
{
    m_PrimaryAxisAlignmentIsSet = false;
}
utility::string_t BTMMate_64_allOf::getSecondaryAxisAlignment() const
{
    return m_SecondaryAxisAlignment;
}

void BTMMate_64_allOf::setSecondaryAxisAlignment(const utility::string_t& value)
{
    m_SecondaryAxisAlignment = value;
    m_SecondaryAxisAlignmentIsSet = true;
}

bool BTMMate_64_allOf::secondaryAxisAlignmentIsSet() const
{
    return m_SecondaryAxisAlignmentIsSet;
}

void BTMMate_64_allOf::unsetSecondaryAxisAlignment()
{
    m_SecondaryAxisAlignmentIsSet = false;
}
std::shared_ptr<BTVector3d_389> BTMMate_64_allOf::getMateOffset() const
{
    return m_MateOffset;
}

void BTMMate_64_allOf::setMateOffset(const std::shared_ptr<BTVector3d_389>& value)
{
    m_MateOffset = value;
    m_MateOffsetIsSet = true;
}

bool BTMMate_64_allOf::mateOffsetIsSet() const
{
    return m_MateOffsetIsSet;
}

void BTMMate_64_allOf::unsetMateOffset()
{
    m_MateOffsetIsSet = false;
}
std::vector<std::shared_ptr<BTMMateConnector_66>>& BTMMate_64_allOf::getMateConnectors()
{
    return m_MateConnectors;
}

void BTMMate_64_allOf::setMateConnectors(const std::vector<std::shared_ptr<BTMMateConnector_66>>& value)
{
    m_MateConnectors = value;
    m_MateConnectorsIsSet = true;
}

bool BTMMate_64_allOf::mateConnectorsIsSet() const
{
    return m_MateConnectorsIsSet;
}

void BTMMate_64_allOf::unsetMateConnectors()
{
    m_MateConnectorsIsSet = false;
}
utility::string_t BTMMate_64_allOf::getBtType() const
{
    return m_BtType;
}

void BTMMate_64_allOf::setBtType(const utility::string_t& value)
{
    m_BtType = value;
    m_BtTypeIsSet = true;
}

bool BTMMate_64_allOf::btTypeIsSet() const
{
    return m_BtTypeIsSet;
}

void BTMMate_64_allOf::unsetBtType()
{
    m_BtTypeIsSet = false;
}
}
}
}
}

