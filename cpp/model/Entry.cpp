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



#include "Entry.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Entry::Entry()
{
    m_PermissionSetIsSet = false;
    m_RoleIsSet = false;
}

Entry::~Entry()
{
}

void Entry::validate()
{
    // TODO: implement validation
}

web::json::value Entry::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_PermissionSetIsSet)
    {
        val[utility::conversions::to_string_t("permissionSet")] = ModelBase::toJson(m_PermissionSet);
    }
    if(m_RoleIsSet)
    {
        val[utility::conversions::to_string_t("role")] = ModelBase::toJson(m_Role);
    }

    return val;
}

bool Entry::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("permissionSet")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permissionSet"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> refVal_permissionSet;
            ok &= ModelBase::fromJson(fieldValue, refVal_permissionSet);
            setPermissionSet(refVal_permissionSet);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<BTRbacRoleInfo> refVal_role;
            ok &= ModelBase::fromJson(fieldValue, refVal_role);
            setRole(refVal_role);
        }
    }
    return ok;
}

void Entry::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_PermissionSetIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("permissionSet"), m_PermissionSet));
    }
    if(m_RoleIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("role"), m_Role));
    }
}

bool Entry::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("permissionSet")))
    {
        std::shared_ptr<Object> refVal_permissionSet;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("permissionSet")), refVal_permissionSet );
        setPermissionSet(refVal_permissionSet);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("role")))
    {
        std::shared_ptr<BTRbacRoleInfo> refVal_role;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("role")), refVal_role );
        setRole(refVal_role);
    }
    return ok;
}

std::shared_ptr<Object> Entry::getPermissionSet() const
{
    return m_PermissionSet;
}

void Entry::setPermissionSet(const std::shared_ptr<Object>& value)
{
    m_PermissionSet = value;
    m_PermissionSetIsSet = true;
}

bool Entry::permissionSetIsSet() const
{
    return m_PermissionSetIsSet;
}

void Entry::unsetPermissionSet()
{
    m_PermissionSetIsSet = false;
}
std::shared_ptr<BTRbacRoleInfo> Entry::getRole() const
{
    return m_Role;
}

void Entry::setRole(const std::shared_ptr<BTRbacRoleInfo>& value)
{
    m_Role = value;
    m_RoleIsSet = true;
}

bool Entry::roleIsSet() const
{
    return m_RoleIsSet;
}

void Entry::unsetRole()
{
    m_RoleIsSet = false;
}
}
}
}
}

