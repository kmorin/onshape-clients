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
 * BTPLValueVarReference_252.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTPLValueVarReference_252_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTPLValueVarReference_252_H_


#include "BTPFunctionOrPredicateDeclaration_247_allOf.h"
#include "BTPLValue_249.h"
#include <cpprest/details/basic_types.h>
#include "BTPIdentifier_8.h"
#include "BTPSpace_10.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTPLValueVarReference_252
    : public BTPLValue_249
{
public:
    BTPLValueVarReference_252();
    virtual ~BTPLValueVarReference_252();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTPLValueVarReference_252 members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTPIdentifier_8> getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const std::shared_ptr<BTPIdentifier_8>& value);


protected:
    std::shared_ptr<BTPIdentifier_8> m_Name;
    bool m_NameIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTPLValueVarReference_252_H_ */