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



#include "BTWebhookParams.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTWebhookParams::BTWebhookParams()
{
    m_ClientId = utility::conversions::to_string_t("");
    m_ClientIdIsSet = false;
    m_CompanyId = utility::conversions::to_string_t("");
    m_CompanyIdIsSet = false;
    m_Data = utility::conversions::to_string_t("");
    m_DataIsSet = false;
    m_DocumentId = utility::conversions::to_string_t("");
    m_DocumentIdIsSet = false;
    m_ElementId = utility::conversions::to_string_t("");
    m_ElementIdIsSet = false;
    m_EventsIsSet = false;
    m_Filter = utility::conversions::to_string_t("");
    m_FilterIsSet = false;
    m_FolderId = utility::conversions::to_string_t("");
    m_FolderIdIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_OptionsIsSet = false;
    m_PartId = utility::conversions::to_string_t("");
    m_PartIdIsSet = false;
    m_ProjectId = utility::conversions::to_string_t("");
    m_ProjectIdIsSet = false;
    m_Url = utility::conversions::to_string_t("");
    m_UrlIsSet = false;
    m_UserId = utility::conversions::to_string_t("");
    m_UserIdIsSet = false;
    m_VersionId = utility::conversions::to_string_t("");
    m_VersionIdIsSet = false;
    m_WorkspaceId = utility::conversions::to_string_t("");
    m_WorkspaceIdIsSet = false;
}

BTWebhookParams::~BTWebhookParams()
{
}

void BTWebhookParams::validate()
{
    // TODO: implement validation
}

web::json::value BTWebhookParams::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ClientIdIsSet)
    {
        val[utility::conversions::to_string_t("clientId")] = ModelBase::toJson(m_ClientId);
    }
    if(m_CompanyIdIsSet)
    {
        val[utility::conversions::to_string_t("companyId")] = ModelBase::toJson(m_CompanyId);
    }
    if(m_DataIsSet)
    {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(m_Data);
    }
    if(m_DocumentIdIsSet)
    {
        val[utility::conversions::to_string_t("documentId")] = ModelBase::toJson(m_DocumentId);
    }
    if(m_ElementIdIsSet)
    {
        val[utility::conversions::to_string_t("elementId")] = ModelBase::toJson(m_ElementId);
    }
    if(m_EventsIsSet)
    {
        val[utility::conversions::to_string_t("events")] = ModelBase::toJson(m_Events);
    }
    if(m_FilterIsSet)
    {
        val[utility::conversions::to_string_t("filter")] = ModelBase::toJson(m_Filter);
    }
    if(m_FolderIdIsSet)
    {
        val[utility::conversions::to_string_t("folderId")] = ModelBase::toJson(m_FolderId);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_OptionsIsSet)
    {
        val[utility::conversions::to_string_t("options")] = ModelBase::toJson(m_Options);
    }
    if(m_PartIdIsSet)
    {
        val[utility::conversions::to_string_t("partId")] = ModelBase::toJson(m_PartId);
    }
    if(m_ProjectIdIsSet)
    {
        val[utility::conversions::to_string_t("projectId")] = ModelBase::toJson(m_ProjectId);
    }
    if(m_UrlIsSet)
    {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(m_Url);
    }
    if(m_UserIdIsSet)
    {
        val[utility::conversions::to_string_t("userId")] = ModelBase::toJson(m_UserId);
    }
    if(m_VersionIdIsSet)
    {
        val[utility::conversions::to_string_t("versionId")] = ModelBase::toJson(m_VersionId);
    }
    if(m_WorkspaceIdIsSet)
    {
        val[utility::conversions::to_string_t("workspaceId")] = ModelBase::toJson(m_WorkspaceId);
    }

    return val;
}

bool BTWebhookParams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("clientId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clientId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_clientId;
            ok &= ModelBase::fromJson(fieldValue, refVal_clientId);
            setClientId(refVal_clientId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("companyId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("companyId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_companyId;
            ok &= ModelBase::fromJson(fieldValue, refVal_companyId);
            setCompanyId(refVal_companyId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_data;
            ok &= ModelBase::fromJson(fieldValue, refVal_data);
            setData(refVal_data);
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
    if(val.has_field(utility::conversions::to_string_t("events")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("events"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_events;
            ok &= ModelBase::fromJson(fieldValue, refVal_events);
            setEvents(refVal_events);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("filter")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filter"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_filter;
            ok &= ModelBase::fromJson(fieldValue, refVal_filter);
            setFilter(refVal_filter);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("folderId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("folderId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_folderId;
            ok &= ModelBase::fromJson(fieldValue, refVal_folderId);
            setFolderId(refVal_folderId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_id);
            setId(refVal_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("options")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("options"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTWebhookOptions> refVal_options;
            ok &= ModelBase::fromJson(fieldValue, refVal_options);
            setOptions(refVal_options);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("partId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("partId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_partId;
            ok &= ModelBase::fromJson(fieldValue, refVal_partId);
            setPartId(refVal_partId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("projectId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("projectId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_projectId;
            ok &= ModelBase::fromJson(fieldValue, refVal_projectId);
            setProjectId(refVal_projectId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_url;
            ok &= ModelBase::fromJson(fieldValue, refVal_url);
            setUrl(refVal_url);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("userId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_userId;
            ok &= ModelBase::fromJson(fieldValue, refVal_userId);
            setUserId(refVal_userId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("versionId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("versionId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_versionId;
            ok &= ModelBase::fromJson(fieldValue, refVal_versionId);
            setVersionId(refVal_versionId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workspaceId")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspaceId"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_workspaceId;
            ok &= ModelBase::fromJson(fieldValue, refVal_workspaceId);
            setWorkspaceId(refVal_workspaceId);
        }
    }
    return ok;
}

void BTWebhookParams::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ClientIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("clientId"), m_ClientId));
    }
    if(m_CompanyIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("companyId"), m_CompanyId));
    }
    if(m_DataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("data"), m_Data));
    }
    if(m_DocumentIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("documentId"), m_DocumentId));
    }
    if(m_ElementIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("elementId"), m_ElementId));
    }
    if(m_EventsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("events"), m_Events));
    }
    if(m_FilterIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("filter"), m_Filter));
    }
    if(m_FolderIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("folderId"), m_FolderId));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_OptionsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("options"), m_Options));
    }
    if(m_PartIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("partId"), m_PartId));
    }
    if(m_ProjectIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("projectId"), m_ProjectId));
    }
    if(m_UrlIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("url"), m_Url));
    }
    if(m_UserIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("userId"), m_UserId));
    }
    if(m_VersionIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("versionId"), m_VersionId));
    }
    if(m_WorkspaceIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("workspaceId"), m_WorkspaceId));
    }
}

bool BTWebhookParams::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("clientId")))
    {
        utility::string_t refVal_clientId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("clientId")), refVal_clientId );
        setClientId(refVal_clientId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("companyId")))
    {
        utility::string_t refVal_companyId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("companyId")), refVal_companyId );
        setCompanyId(refVal_companyId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("data")))
    {
        utility::string_t refVal_data;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("data")), refVal_data );
        setData(refVal_data);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("documentId")))
    {
        utility::string_t refVal_documentId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("documentId")), refVal_documentId );
        setDocumentId(refVal_documentId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("elementId")))
    {
        utility::string_t refVal_elementId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("elementId")), refVal_elementId );
        setElementId(refVal_elementId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("events")))
    {
        std::vector<utility::string_t> refVal_events;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("events")), refVal_events );
        setEvents(refVal_events);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("filter")))
    {
        utility::string_t refVal_filter;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("filter")), refVal_filter );
        setFilter(refVal_filter);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("folderId")))
    {
        utility::string_t refVal_folderId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("folderId")), refVal_folderId );
        setFolderId(refVal_folderId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        utility::string_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("id")), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("options")))
    {
        std::shared_ptr<BTWebhookOptions> refVal_options;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("options")), refVal_options );
        setOptions(refVal_options);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("partId")))
    {
        utility::string_t refVal_partId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("partId")), refVal_partId );
        setPartId(refVal_partId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("projectId")))
    {
        utility::string_t refVal_projectId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("projectId")), refVal_projectId );
        setProjectId(refVal_projectId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("url")))
    {
        utility::string_t refVal_url;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("url")), refVal_url );
        setUrl(refVal_url);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("userId")))
    {
        utility::string_t refVal_userId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("userId")), refVal_userId );
        setUserId(refVal_userId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("versionId")))
    {
        utility::string_t refVal_versionId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("versionId")), refVal_versionId );
        setVersionId(refVal_versionId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("workspaceId")))
    {
        utility::string_t refVal_workspaceId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("workspaceId")), refVal_workspaceId );
        setWorkspaceId(refVal_workspaceId);
    }
    return ok;
}

utility::string_t BTWebhookParams::getClientId() const
{
    return m_ClientId;
}

void BTWebhookParams::setClientId(const utility::string_t& value)
{
    m_ClientId = value;
    m_ClientIdIsSet = true;
}

bool BTWebhookParams::clientIdIsSet() const
{
    return m_ClientIdIsSet;
}

void BTWebhookParams::unsetClientId()
{
    m_ClientIdIsSet = false;
}
utility::string_t BTWebhookParams::getCompanyId() const
{
    return m_CompanyId;
}

void BTWebhookParams::setCompanyId(const utility::string_t& value)
{
    m_CompanyId = value;
    m_CompanyIdIsSet = true;
}

bool BTWebhookParams::companyIdIsSet() const
{
    return m_CompanyIdIsSet;
}

void BTWebhookParams::unsetCompanyId()
{
    m_CompanyIdIsSet = false;
}
utility::string_t BTWebhookParams::getData() const
{
    return m_Data;
}

void BTWebhookParams::setData(const utility::string_t& value)
{
    m_Data = value;
    m_DataIsSet = true;
}

bool BTWebhookParams::dataIsSet() const
{
    return m_DataIsSet;
}

void BTWebhookParams::unsetData()
{
    m_DataIsSet = false;
}
utility::string_t BTWebhookParams::getDocumentId() const
{
    return m_DocumentId;
}

void BTWebhookParams::setDocumentId(const utility::string_t& value)
{
    m_DocumentId = value;
    m_DocumentIdIsSet = true;
}

bool BTWebhookParams::documentIdIsSet() const
{
    return m_DocumentIdIsSet;
}

void BTWebhookParams::unsetDocumentId()
{
    m_DocumentIdIsSet = false;
}
utility::string_t BTWebhookParams::getElementId() const
{
    return m_ElementId;
}

void BTWebhookParams::setElementId(const utility::string_t& value)
{
    m_ElementId = value;
    m_ElementIdIsSet = true;
}

bool BTWebhookParams::elementIdIsSet() const
{
    return m_ElementIdIsSet;
}

void BTWebhookParams::unsetElementId()
{
    m_ElementIdIsSet = false;
}
std::vector<utility::string_t>& BTWebhookParams::getEvents()
{
    return m_Events;
}

void BTWebhookParams::setEvents(const std::vector<utility::string_t>& value)
{
    m_Events = value;
    m_EventsIsSet = true;
}

bool BTWebhookParams::eventsIsSet() const
{
    return m_EventsIsSet;
}

void BTWebhookParams::unsetEvents()
{
    m_EventsIsSet = false;
}
utility::string_t BTWebhookParams::getFilter() const
{
    return m_Filter;
}

void BTWebhookParams::setFilter(const utility::string_t& value)
{
    m_Filter = value;
    m_FilterIsSet = true;
}

bool BTWebhookParams::filterIsSet() const
{
    return m_FilterIsSet;
}

void BTWebhookParams::unsetFilter()
{
    m_FilterIsSet = false;
}
utility::string_t BTWebhookParams::getFolderId() const
{
    return m_FolderId;
}

void BTWebhookParams::setFolderId(const utility::string_t& value)
{
    m_FolderId = value;
    m_FolderIdIsSet = true;
}

bool BTWebhookParams::folderIdIsSet() const
{
    return m_FolderIdIsSet;
}

void BTWebhookParams::unsetFolderId()
{
    m_FolderIdIsSet = false;
}
utility::string_t BTWebhookParams::getId() const
{
    return m_Id;
}

void BTWebhookParams::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool BTWebhookParams::idIsSet() const
{
    return m_IdIsSet;
}

void BTWebhookParams::unsetId()
{
    m_IdIsSet = false;
}
std::shared_ptr<BTWebhookOptions> BTWebhookParams::getOptions() const
{
    return m_Options;
}

void BTWebhookParams::setOptions(const std::shared_ptr<BTWebhookOptions>& value)
{
    m_Options = value;
    m_OptionsIsSet = true;
}

bool BTWebhookParams::optionsIsSet() const
{
    return m_OptionsIsSet;
}

void BTWebhookParams::unsetOptions()
{
    m_OptionsIsSet = false;
}
utility::string_t BTWebhookParams::getPartId() const
{
    return m_PartId;
}

void BTWebhookParams::setPartId(const utility::string_t& value)
{
    m_PartId = value;
    m_PartIdIsSet = true;
}

bool BTWebhookParams::partIdIsSet() const
{
    return m_PartIdIsSet;
}

void BTWebhookParams::unsetPartId()
{
    m_PartIdIsSet = false;
}
utility::string_t BTWebhookParams::getProjectId() const
{
    return m_ProjectId;
}

void BTWebhookParams::setProjectId(const utility::string_t& value)
{
    m_ProjectId = value;
    m_ProjectIdIsSet = true;
}

bool BTWebhookParams::projectIdIsSet() const
{
    return m_ProjectIdIsSet;
}

void BTWebhookParams::unsetProjectId()
{
    m_ProjectIdIsSet = false;
}
utility::string_t BTWebhookParams::getUrl() const
{
    return m_Url;
}

void BTWebhookParams::setUrl(const utility::string_t& value)
{
    m_Url = value;
    m_UrlIsSet = true;
}

bool BTWebhookParams::urlIsSet() const
{
    return m_UrlIsSet;
}

void BTWebhookParams::unsetUrl()
{
    m_UrlIsSet = false;
}
utility::string_t BTWebhookParams::getUserId() const
{
    return m_UserId;
}

void BTWebhookParams::setUserId(const utility::string_t& value)
{
    m_UserId = value;
    m_UserIdIsSet = true;
}

bool BTWebhookParams::userIdIsSet() const
{
    return m_UserIdIsSet;
}

void BTWebhookParams::unsetUserId()
{
    m_UserIdIsSet = false;
}
utility::string_t BTWebhookParams::getVersionId() const
{
    return m_VersionId;
}

void BTWebhookParams::setVersionId(const utility::string_t& value)
{
    m_VersionId = value;
    m_VersionIdIsSet = true;
}

bool BTWebhookParams::versionIdIsSet() const
{
    return m_VersionIdIsSet;
}

void BTWebhookParams::unsetVersionId()
{
    m_VersionIdIsSet = false;
}
utility::string_t BTWebhookParams::getWorkspaceId() const
{
    return m_WorkspaceId;
}

void BTWebhookParams::setWorkspaceId(const utility::string_t& value)
{
    m_WorkspaceId = value;
    m_WorkspaceIdIsSet = true;
}

bool BTWebhookParams::workspaceIdIsSet() const
{
    return m_WorkspaceIdIsSet;
}

void BTWebhookParams::unsetWorkspaceId()
{
    m_WorkspaceIdIsSet = false;
}
}
}
}
}

