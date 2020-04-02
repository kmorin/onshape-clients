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
 * BTParameterSpecQuantity_173_allOf.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTParameterSpecQuantity_173_allOf_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTParameterSpecQuantity_173_allOf_H_


#include "../ModelBase.h"

#include "BTQuantityRange_181.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTParameterSpecQuantity_173_allOf
    : public ModelBase
{
public:
    BTParameterSpecQuantity_173_allOf();
    virtual ~BTParameterSpecQuantity_173_allOf();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTParameterSpecQuantity_173_allOf members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getQuantityType() const;
    bool quantityTypeIsSet() const;
    void unsetQuantityType();

    void setQuantityType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<BTQuantityRange_181>>& getRanges();
    bool rangesIsSet() const;
    void unsetRanges();

    void setRanges(const std::vector<std::shared_ptr<BTQuantityRange_181>>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getBtType() const;
    bool btTypeIsSet() const;
    void unsetBtType();

    void setBtType(const utility::string_t& value);


protected:
    utility::string_t m_QuantityType;
    bool m_QuantityTypeIsSet;
    std::vector<std::shared_ptr<BTQuantityRange_181>> m_Ranges;
    bool m_RangesIsSet;
    utility::string_t m_BtType;
    bool m_BtTypeIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTParameterSpecQuantity_173_allOf_H_ */