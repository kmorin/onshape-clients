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
 * BTNotFilter_165_allOf.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTNotFilter_165_allOf_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTNotFilter_165_allOf_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "BTQueryFilter_183.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTNotFilter_165_allOf
    : public ModelBase
{
public:
    BTNotFilter_165_allOf();
    virtual ~BTNotFilter_165_allOf();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTNotFilter_165_allOf members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTQueryFilter_183> getOperand() const;
    bool operandIsSet() const;
    void unsetOperand();

    void setOperand(const std::shared_ptr<BTQueryFilter_183>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getBtType() const;
    bool btTypeIsSet() const;
    void unsetBtType();

    void setBtType(const utility::string_t& value);


protected:
    std::shared_ptr<BTQueryFilter_183> m_Operand;
    bool m_OperandIsSet;
    utility::string_t m_BtType;
    bool m_BtTypeIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTNotFilter_165_allOf_H_ */