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
 * BTPExpressionCall_240_allOf.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTPExpressionCall_240_allOf_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTPExpressionCall_240_allOf_H_


#include "../ModelBase.h"

#include "BTPExpression_9.h"
#include "BTPName_261.h"
#include <cpprest/details/basic_types.h>
#include "BTPSpace_10.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTPExpressionCall_240_allOf
    : public ModelBase
{
public:
    BTPExpressionCall_240_allOf();
    virtual ~BTPExpressionCall_240_allOf();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTPExpressionCall_240_allOf members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getFunctionNameString() const;
    bool functionNameStringIsSet() const;
    void unsetFunctionNameString();

    void setFunctionNameString(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTPName_261> getFunctionName() const;
    bool functionNameIsSet() const;
    void unsetFunctionName();

    void setFunctionName(const std::shared_ptr<BTPName_261>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTPExpression_9> getFunctionExpression() const;
    bool functionExpressionIsSet() const;
    void unsetFunctionExpression();

    void setFunctionExpression(const std::shared_ptr<BTPExpression_9>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTPSpace_10> getSpaceInEmptyList() const;
    bool spaceInEmptyListIsSet() const;
    void unsetSpaceInEmptyList();

    void setSpaceInEmptyList(const std::shared_ptr<BTPSpace_10>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getBtType() const;
    bool btTypeIsSet() const;
    void unsetBtType();

    void setBtType(const utility::string_t& value);


protected:
    utility::string_t m_FunctionNameString;
    bool m_FunctionNameStringIsSet;
    std::shared_ptr<BTPName_261> m_FunctionName;
    bool m_FunctionNameIsSet;
    std::shared_ptr<BTPExpression_9> m_FunctionExpression;
    bool m_FunctionExpressionIsSet;
    std::shared_ptr<BTPSpace_10> m_SpaceInEmptyList;
    bool m_SpaceInEmptyListIsSet;
    utility::string_t m_BtType;
    bool m_BtTypeIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTPExpressionCall_240_allOf_H_ */