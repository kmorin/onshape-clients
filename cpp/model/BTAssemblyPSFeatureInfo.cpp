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



#include "BTAssemblyPSFeatureInfo.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTAssemblyPSFeatureInfo::BTAssemblyPSFeatureInfo()
{
    m_Configuration = utility::conversions::to_string_t("");
    m_ConfigurationIsSet = false;
    m_DocumentId = utility::conversions::to_string_t("");
    m_DocumentIdIsSet = false;
    m_DocumentMicroversion = utility::conversions::to_string_t("");
    m_DocumentMicroversionIsSet = false;
    m_DocumentVersion = utility::conversions::to_string_t("");
    m_DocumentVersionIsSet = false;
    m_ElementId = utility::conversions::to_string_t("");
    m_ElementIdIsSet = false;
    m_FeatureId = utility::conversions::to_string_t("");
    m_FeatureIdIsSet = false;
    m_FeatureType = utility::conversions::to_string_t("");
    m_FeatureTypeIsSet = false;
    m_FullConfiguration = utility::conversions::to_string_t("");
    m_FullConfigurationIsSet = false;
    m_Revision = utility::conversions::to_string_t("");
    m_RevisionIsSet = false;
}

BTAssemblyPSFeatureInfo::~BTAssemblyPSFeatureInfo()
{
}

void BTAssemblyPSFeatureInfo::validate()
{
    // TODO: implement validation
}

web::json::value BTAssemblyPSFeatureInfo::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ConfigurationIsSet)
    {
        val[utility::conversions::to_string_t("configuration")] = ModelBase::toJson(m_Configuration);
    }
    if(m_DocumentIdIsSet)
    {
        val[utility::conversions::to_string_t("documentId")] = ModelBase::toJson(m_DocumentId);
    }
    if(m_DocumentMicroversionIsSet)
    {
        val[utility::conversions::to_string_t("documentMicroversion")] = ModelBase::toJson(m_DocumentMicroversion);
    }
    if(m_DocumentVersionIsSet)
    {
        val[utility::conversions::to_string_t("documentVersion")] = ModelBase::toJson(m_DocumentVersion);
    }
    if(m_ElementIdIsSet)
    {
        val[utility::conversions::to_string_t("elementId")] = ModelBase::toJson(m_ElementId);
    }
    if(m_FeatureIdIsSet)
    {
        val[utility::conversions::to_string_t("featureId")] = ModelBase::toJson(m_FeatureId);
    }
    if(m_FeatureTypeIsSet)
    {
        val[utility::conversions::to_string_t("featureType")] = ModelBase::toJson(m_FeatureType);
    }
    if(m_FullConfigurationIsSet)
    {
        val[utility::conversions::to_string_t("fullConfiguration")] = ModelBase::toJson(m_FullConfiguration);
    }
    if(m_RevisionIsSet)
    {
        val[utility::conversions::to_string_t("revision")] = ModelBase::toJson(m_Revision);
    }

    return val;
}

bool BTAssemblyPSFeatureInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("configuration")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configuration"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_configuration;
            ok &= ModelBase::fromJson(fieldValue, refVal_configuration);
            setConfiguration(refVal_configuration);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("documentId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("documentId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_documentId;
            ok &= ModelBase::fromJson(fieldValue, refVal_documentId);
            setDocumentId(refVal_documentId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("documentMicroversion")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("documentMicroversion"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_documentMicroversion;
            ok &= ModelBase::fromJson(fieldValue, refVal_documentMicroversion);
            setDocumentMicroversion(refVal_documentMicroversion);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("documentVersion")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("documentVersion"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_documentVersion;
            ok &= ModelBase::fromJson(fieldValue, refVal_documentVersion);
            setDocumentVersion(refVal_documentVersion);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("elementId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("elementId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_elementId;
            ok &= ModelBase::fromJson(fieldValue, refVal_elementId);
            setElementId(refVal_elementId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("featureId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("featureId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_featureId;
            ok &= ModelBase::fromJson(fieldValue, refVal_featureId);
            setFeatureId(refVal_featureId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("featureType")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("featureType"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_featureType;
            ok &= ModelBase::fromJson(fieldValue, refVal_featureType);
            setFeatureType(refVal_featureType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fullConfiguration")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fullConfiguration"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_fullConfiguration;
            ok &= ModelBase::fromJson(fieldValue, refVal_fullConfiguration);
            setFullConfiguration(refVal_fullConfiguration);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("revision")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("revision"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_revision;
            ok &= ModelBase::fromJson(fieldValue, refVal_revision);
            setRevision(refVal_revision);
        }
    }
    return ok;
}

void BTAssemblyPSFeatureInfo::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ConfigurationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("configuration"), m_Configuration));
    }
    if(m_DocumentIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("documentId"), m_DocumentId));
    }
    if(m_DocumentMicroversionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("documentMicroversion"), m_DocumentMicroversion));
    }
    if(m_DocumentVersionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("documentVersion"), m_DocumentVersion));
    }
    if(m_ElementIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("elementId"), m_ElementId));
    }
    if(m_FeatureIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("featureId"), m_FeatureId));
    }
    if(m_FeatureTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("featureType"), m_FeatureType));
    }
    if(m_FullConfigurationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fullConfiguration"), m_FullConfiguration));
    }
    if(m_RevisionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("revision"), m_Revision));
    }
}

bool BTAssemblyPSFeatureInfo::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("configuration")))
    {
        utility::string_t refVal_configuration;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("configuration")), refVal_configuration );
        setConfiguration(refVal_configuration);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("documentId")))
    {
        utility::string_t refVal_documentId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("documentId")), refVal_documentId );
        setDocumentId(refVal_documentId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("documentMicroversion")))
    {
        utility::string_t refVal_documentMicroversion;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("documentMicroversion")), refVal_documentMicroversion );
        setDocumentMicroversion(refVal_documentMicroversion);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("documentVersion")))
    {
        utility::string_t refVal_documentVersion;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("documentVersion")), refVal_documentVersion );
        setDocumentVersion(refVal_documentVersion);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("elementId")))
    {
        utility::string_t refVal_elementId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("elementId")), refVal_elementId );
        setElementId(refVal_elementId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("featureId")))
    {
        utility::string_t refVal_featureId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("featureId")), refVal_featureId );
        setFeatureId(refVal_featureId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("featureType")))
    {
        utility::string_t refVal_featureType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("featureType")), refVal_featureType );
        setFeatureType(refVal_featureType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("fullConfiguration")))
    {
        utility::string_t refVal_fullConfiguration;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("fullConfiguration")), refVal_fullConfiguration );
        setFullConfiguration(refVal_fullConfiguration);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("revision")))
    {
        utility::string_t refVal_revision;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("revision")), refVal_revision );
        setRevision(refVal_revision);
    }
    return ok;
}

utility::string_t BTAssemblyPSFeatureInfo::getConfiguration() const
{
    return m_Configuration;
}

void BTAssemblyPSFeatureInfo::setConfiguration(const utility::string_t& value)
{
    m_Configuration = value;
    m_ConfigurationIsSet = true;
}

bool BTAssemblyPSFeatureInfo::configurationIsSet() const
{
    return m_ConfigurationIsSet;
}

void BTAssemblyPSFeatureInfo::unsetConfiguration()
{
    m_ConfigurationIsSet = false;
}
utility::string_t BTAssemblyPSFeatureInfo::getDocumentId() const
{
    return m_DocumentId;
}

void BTAssemblyPSFeatureInfo::setDocumentId(const utility::string_t& value)
{
    m_DocumentId = value;
    m_DocumentIdIsSet = true;
}

bool BTAssemblyPSFeatureInfo::documentIdIsSet() const
{
    return m_DocumentIdIsSet;
}

void BTAssemblyPSFeatureInfo::unsetDocumentId()
{
    m_DocumentIdIsSet = false;
}
utility::string_t BTAssemblyPSFeatureInfo::getDocumentMicroversion() const
{
    return m_DocumentMicroversion;
}

void BTAssemblyPSFeatureInfo::setDocumentMicroversion(const utility::string_t& value)
{
    m_DocumentMicroversion = value;
    m_DocumentMicroversionIsSet = true;
}

bool BTAssemblyPSFeatureInfo::documentMicroversionIsSet() const
{
    return m_DocumentMicroversionIsSet;
}

void BTAssemblyPSFeatureInfo::unsetDocumentMicroversion()
{
    m_DocumentMicroversionIsSet = false;
}
utility::string_t BTAssemblyPSFeatureInfo::getDocumentVersion() const
{
    return m_DocumentVersion;
}

void BTAssemblyPSFeatureInfo::setDocumentVersion(const utility::string_t& value)
{
    m_DocumentVersion = value;
    m_DocumentVersionIsSet = true;
}

bool BTAssemblyPSFeatureInfo::documentVersionIsSet() const
{
    return m_DocumentVersionIsSet;
}

void BTAssemblyPSFeatureInfo::unsetDocumentVersion()
{
    m_DocumentVersionIsSet = false;
}
utility::string_t BTAssemblyPSFeatureInfo::getElementId() const
{
    return m_ElementId;
}

void BTAssemblyPSFeatureInfo::setElementId(const utility::string_t& value)
{
    m_ElementId = value;
    m_ElementIdIsSet = true;
}

bool BTAssemblyPSFeatureInfo::elementIdIsSet() const
{
    return m_ElementIdIsSet;
}

void BTAssemblyPSFeatureInfo::unsetElementId()
{
    m_ElementIdIsSet = false;
}
utility::string_t BTAssemblyPSFeatureInfo::getFeatureId() const
{
    return m_FeatureId;
}

void BTAssemblyPSFeatureInfo::setFeatureId(const utility::string_t& value)
{
    m_FeatureId = value;
    m_FeatureIdIsSet = true;
}

bool BTAssemblyPSFeatureInfo::featureIdIsSet() const
{
    return m_FeatureIdIsSet;
}

void BTAssemblyPSFeatureInfo::unsetFeatureId()
{
    m_FeatureIdIsSet = false;
}
utility::string_t BTAssemblyPSFeatureInfo::getFeatureType() const
{
    return m_FeatureType;
}

void BTAssemblyPSFeatureInfo::setFeatureType(const utility::string_t& value)
{
    m_FeatureType = value;
    m_FeatureTypeIsSet = true;
}

bool BTAssemblyPSFeatureInfo::featureTypeIsSet() const
{
    return m_FeatureTypeIsSet;
}

void BTAssemblyPSFeatureInfo::unsetFeatureType()
{
    m_FeatureTypeIsSet = false;
}
utility::string_t BTAssemblyPSFeatureInfo::getFullConfiguration() const
{
    return m_FullConfiguration;
}

void BTAssemblyPSFeatureInfo::setFullConfiguration(const utility::string_t& value)
{
    m_FullConfiguration = value;
    m_FullConfigurationIsSet = true;
}

bool BTAssemblyPSFeatureInfo::fullConfigurationIsSet() const
{
    return m_FullConfigurationIsSet;
}

void BTAssemblyPSFeatureInfo::unsetFullConfiguration()
{
    m_FullConfigurationIsSet = false;
}
utility::string_t BTAssemblyPSFeatureInfo::getRevision() const
{
    return m_Revision;
}

void BTAssemblyPSFeatureInfo::setRevision(const utility::string_t& value)
{
    m_Revision = value;
    m_RevisionIsSet = true;
}

bool BTAssemblyPSFeatureInfo::revisionIsSet() const
{
    return m_RevisionIsSet;
}

void BTAssemblyPSFeatureInfo::unsetRevision()
{
    m_RevisionIsSet = false;
}
}
}
}
}

