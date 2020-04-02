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



#include "BTMParameterAppearance_627.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTMParameterAppearance_627::BTMParameterAppearance_627()
{
    m_AppearanceIsSet = false;
}

BTMParameterAppearance_627::~BTMParameterAppearance_627()
{
}

void BTMParameterAppearance_627::validate()
{
    // TODO: implement validation
}

web::json::value BTMParameterAppearance_627::toJson() const
{
    web::json::value val = this->BTMParameter_1::toJson();
    
    if(m_AppearanceIsSet)
    {
        val[utility::conversions::to_string_t("appearance")] = ModelBase::toJson(m_Appearance);
    }

    return val;
}

bool BTMParameterAppearance_627::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->BTMParameter_1::fromJson(val);
    
    if(val.has_field(utility::conversions::to_string_t("appearance")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("appearance"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTGraphicsAppearance_1152> refVal_appearance;
            ok &= ModelBase::fromJson(fieldValue, refVal_appearance);
            setAppearance(refVal_appearance);
        }
    }
    return ok;
}

void BTMParameterAppearance_627::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_ImportMicroversionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("importMicroversion"), m_ImportMicroversion));
    }
    if(m_NodeIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("nodeId"), m_NodeId));
    }
    if(m_ParameterIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("parameterId"), m_ParameterId));
    }
    if(m_AppearanceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("appearance"), m_Appearance));
    }
}

bool BTMParameterAppearance_627::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("importMicroversion")))
    {
        utility::string_t refVal_importMicroversion;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("importMicroversion")), refVal_importMicroversion );
        setImportMicroversion(refVal_importMicroversion);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("nodeId")))
    {
        utility::string_t refVal_nodeId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("nodeId")), refVal_nodeId );
        setNodeId(refVal_nodeId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("parameterId")))
    {
        utility::string_t refVal_parameterId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("parameterId")), refVal_parameterId );
        setParameterId(refVal_parameterId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("appearance")))
    {
        std::shared_ptr<BTGraphicsAppearance_1152> refVal_appearance;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("appearance")), refVal_appearance );
        setAppearance(refVal_appearance);
    }
    return ok;
}

std::shared_ptr<BTGraphicsAppearance_1152> BTMParameterAppearance_627::getAppearance() const
{
    return m_Appearance;
}

void BTMParameterAppearance_627::setAppearance(const std::shared_ptr<BTGraphicsAppearance_1152>& value)
{
    m_Appearance = value;
    m_AppearanceIsSet = true;
}

bool BTMParameterAppearance_627::appearanceIsSet() const
{
    return m_AppearanceIsSet;
}

void BTMParameterAppearance_627::unsetAppearance()
{
    m_AppearanceIsSet = false;
}
}
}
}
}

