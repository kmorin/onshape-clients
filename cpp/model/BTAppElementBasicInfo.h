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

/*
 * BTAppElementBasicInfo.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTAppElementBasicInfo_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTAppElementBasicInfo_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTAppElementBasicInfo
    : public ModelBase
{
public:
    BTAppElementBasicInfo();
    virtual ~BTAppElementBasicInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTAppElementBasicInfo members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getChangeId() const;
    bool changeIdIsSet() const;
    void unsetChangeId();

    void setChangeId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getErrorCode() const;
    bool errorCodeIsSet() const;
    void unsetErrorCode();

    void setErrorCode(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getErrorDescription() const;
    bool errorDescriptionIsSet() const;
    void unsetErrorDescription();

    void setErrorDescription(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getErrorValue() const;
    bool errorValueIsSet() const;
    void unsetErrorValue();

    void setErrorValue(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getParentChangeId() const;
    bool parentChangeIdIsSet() const;
    void unsetParentChangeId();

    void setParentChangeId(const utility::string_t& value);


protected:
    utility::string_t m_ChangeId;
    bool m_ChangeIdIsSet;
    int32_t m_ErrorCode;
    bool m_ErrorCodeIsSet;
    utility::string_t m_ErrorDescription;
    bool m_ErrorDescriptionIsSet;
    utility::string_t m_ErrorValue;
    bool m_ErrorValueIsSet;
    utility::string_t m_ParentChangeId;
    bool m_ParentChangeIdIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTAppElementBasicInfo_H_ */