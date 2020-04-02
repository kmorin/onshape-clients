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
 * BTSettingInfo.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTSettingInfo_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTSettingInfo_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "Object.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTSettingInfo
    : public ModelBase
{
public:
    BTSettingInfo();
    virtual ~BTSettingInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTSettingInfo members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getKey() const;
    bool keyIsSet() const;
    void unsetKey();

    void setKey(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Object> getValue() const;
    bool valueIsSet() const;
    void unsetValue();

    void setValue(const std::shared_ptr<Object>& value);


protected:
    utility::string_t m_Key;
    bool m_KeyIsSet;
    std::shared_ptr<Object> m_Value;
    bool m_ValueIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTSettingInfo_H_ */