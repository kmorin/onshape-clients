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
 * BTPSpace_10.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTPSpace_10_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTPSpace_10_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTPSpace_10
    : public ModelBase
{
public:
    BTPSpace_10();
    virtual ~BTPSpace_10();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTPSpace_10 members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getBtType() const;
    bool btTypeIsSet() const;
    void unsetBtType();

    void setBtType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getLines();
    bool linesIsSet() const;
    void unsetLines();

    void setLines(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetNodeId();

    void setNodeId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getText() const;
    bool textIsSet() const;
    void unsetText();

    void setText(const utility::string_t& value);


protected:
    utility::string_t m_BtType;
    bool m_BtTypeIsSet;
    std::vector<utility::string_t> m_Lines;
    bool m_LinesIsSet;
    utility::string_t m_NodeId;
    bool m_NodeIdIsSet;
    utility::string_t m_Text;
    bool m_TextIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTPSpace_10_H_ */