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
 * BTPConversionFunction_1362.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTPConversionFunction_1362_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTPConversionFunction_1362_H_


#include "BTPStatementBlock_271.h"
#include "BTPConversionFunction_1362_allOf.h"
#include "BTPTypeName_290.h"
#include <cpprest/details/basic_types.h>
#include "BTPIdentifier_8.h"
#include "BTPLiteralNumber_258.h"
#include "BTPSpace_10.h"
#include <vector>
#include "BTPAnnotation_231.h"
#include "BTPArgumentDeclaration_232.h"
#include "BTPProcedureDeclarationBase_266.h"
#include "BTPStatement_269.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTPConversionFunction_1362
    : public BTPProcedureDeclarationBase_266
{
public:
    BTPConversionFunction_1362();
    virtual ~BTPConversionFunction_1362();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTPConversionFunction_1362 members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTPLiteralNumber_258> getTo() const;
    bool toIsSet() const;
    void unsetTo();

    void setTo(const std::shared_ptr<BTPLiteralNumber_258>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTPIdentifier_8> getRTypeName() const;
    bool rTypeNameIsSet() const;
    void unsetr_typeName();

    void setRTypeName(const std::shared_ptr<BTPIdentifier_8>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTPLiteralNumber_258> getFrom() const;
    bool fromIsSet() const;
    void unsetFrom();

    void setFrom(const std::shared_ptr<BTPLiteralNumber_258>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTPSpace_10> getSpaceAfterType() const;
    bool spaceAfterTypeIsSet() const;
    void unsetSpaceAfterType();

    void setSpaceAfterType(const std::shared_ptr<BTPSpace_10>& value);


protected:
    std::shared_ptr<BTPLiteralNumber_258> m_To;
    bool m_ToIsSet;
    std::shared_ptr<BTPIdentifier_8> m_r_typeName;
    bool m_r_typeNameIsSet;
    std::shared_ptr<BTPLiteralNumber_258> m_From;
    bool m_FromIsSet;
    std::shared_ptr<BTPSpace_10> m_SpaceAfterType;
    bool m_SpaceAfterTypeIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTPConversionFunction_1362_H_ */