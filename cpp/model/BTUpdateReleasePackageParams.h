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
 * BTUpdateReleasePackageParams.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTUpdateReleasePackageParams_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTUpdateReleasePackageParams_H_


#include "../ModelBase.h"

#include "BTReleasePackageItemParams.h"
#include "BTPropertyValueParam.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTUpdateReleasePackageParams
    : public ModelBase
{
public:
    BTUpdateReleasePackageParams();
    virtual ~BTUpdateReleasePackageParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTUpdateReleasePackageParams members

    /// <summary>
    /// 
    /// </summary>
    bool isEmpty() const;
    bool emptyIsSet() const;
    void unsetEmpty();

    void setEmpty(bool value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getItemIds();
    bool itemIdsIsSet() const;
    void unsetItemIds();

    void setItemIds(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<BTReleasePackageItemParams>>& getItems();
    bool itemsIsSet() const;
    void unsetItems();

    void setItems(const std::vector<std::shared_ptr<BTReleasePackageItemParams>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<BTPropertyValueParam>>& getProperties();
    bool propertiesIsSet() const;
    void unsetProperties();

    void setProperties(const std::vector<std::shared_ptr<BTPropertyValueParam>>& value);


protected:
    bool m_Empty;
    bool m_EmptyIsSet;
    std::vector<utility::string_t> m_ItemIds;
    bool m_ItemIdsIsSet;
    std::vector<std::shared_ptr<BTReleasePackageItemParams>> m_Items;
    bool m_ItemsIsSet;
    std::vector<std::shared_ptr<BTPropertyValueParam>> m_Properties;
    bool m_PropertiesIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTUpdateReleasePackageParams_H_ */