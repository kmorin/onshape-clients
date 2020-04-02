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



#include "BTConfigurationParams.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTConfigurationParams::BTConfigurationParams()
{
    m_ParametersIsSet = false;
    m_StandardContentParametersId = utility::conversions::to_string_t("");
    m_StandardContentParametersIdIsSet = false;
}

BTConfigurationParams::~BTConfigurationParams()
{
}

void BTConfigurationParams::validate()
{
    // TODO: implement validation
}

web::json::value BTConfigurationParams::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ParametersIsSet)
    {
        val[utility::conversions::to_string_t("parameters")] = ModelBase::toJson(m_Parameters);
    }
    if(m_StandardContentParametersIdIsSet)
    {
        val[utility::conversions::to_string_t("standardContentParametersId")] = ModelBase::toJson(m_StandardContentParametersId);
    }

    return val;
}

bool BTConfigurationParams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("parameters")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameters"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<ConfigurationEntry>> refVal_parameters;
            ok &= ModelBase::fromJson(fieldValue, refVal_parameters);
            setParameters(refVal_parameters);
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
    return ok;
}

void BTConfigurationParams::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ParametersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("parameters"), m_Parameters));
    }
    if(m_StandardContentParametersIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("standardContentParametersId"), m_StandardContentParametersId));
    }
}

bool BTConfigurationParams::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("parameters")))
    {
        std::vector<std::shared_ptr<ConfigurationEntry>> refVal_parameters;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("parameters")), refVal_parameters );
        setParameters(refVal_parameters);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("standardContentParametersId")))
    {
        utility::string_t refVal_standardContentParametersId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("standardContentParametersId")), refVal_standardContentParametersId );
        setStandardContentParametersId(refVal_standardContentParametersId);
    }
    return ok;
}

std::vector<std::shared_ptr<ConfigurationEntry>>& BTConfigurationParams::getParameters()
{
    return m_Parameters;
}

void BTConfigurationParams::setParameters(const std::vector<std::shared_ptr<ConfigurationEntry>>& value)
{
    m_Parameters = value;
    m_ParametersIsSet = true;
}

bool BTConfigurationParams::parametersIsSet() const
{
    return m_ParametersIsSet;
}

void BTConfigurationParams::unsetParameters()
{
    m_ParametersIsSet = false;
}
utility::string_t BTConfigurationParams::getStandardContentParametersId() const
{
    return m_StandardContentParametersId;
}

void BTConfigurationParams::setStandardContentParametersId(const utility::string_t& value)
{
    m_StandardContentParametersId = value;
    m_StandardContentParametersIdIsSet = true;
}

bool BTConfigurationParams::standardContentParametersIdIsSet() const
{
    return m_StandardContentParametersIdIsSet;
}

void BTConfigurationParams::unsetStandardContentParametersId()
{
    m_StandardContentParametersIdIsSet = false;
}
}
}
}
}

