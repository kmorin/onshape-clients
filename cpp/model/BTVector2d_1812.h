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
 * BTVector2d_1812.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTVector2d_1812_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTVector2d_1812_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTVector2d_1812
    : public ModelBase
{
public:
    BTVector2d_1812();
    virtual ~BTVector2d_1812();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTVector2d_1812 members

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
    double getX() const;
    bool XIsSet() const;
    void unsetx();

    void setX(double value);

    /// <summary>
    /// 
    /// </summary>
    double getY() const;
    bool YIsSet() const;
    void unsety();

    void setY(double value);


protected:
    utility::string_t m_BtType;
    bool m_BtTypeIsSet;
    double m_x;
    bool m_xIsSet;
    double m_y;
    bool m_yIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTVector2d_1812_H_ */