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
 * BTSectionPlaneInfo.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTSectionPlaneInfo_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTSectionPlaneInfo_H_


#include "../ModelBase.h"

#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTSectionPlaneInfo
    : public ModelBase
{
public:
    BTSectionPlaneInfo();
    virtual ~BTSectionPlaneInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTSectionPlaneInfo members

    /// <summary>
    /// 
    /// </summary>
    std::vector<double>& getCenter();
    bool centerIsSet() const;
    void unsetCenter();

    void setCenter(std::vector<double> value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<double>& getNormal();
    bool normalIsSet() const;
    void unsetNormal();

    void setNormal(std::vector<double> value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<double>& getTangent();
    bool tangentIsSet() const;
    void unsetTangent();

    void setTangent(std::vector<double> value);


protected:
    std::vector<double> m_Center;
    bool m_CenterIsSet;
    std::vector<double> m_Normal;
    bool m_NormalIsSet;
    std::vector<double> m_Tangent;
    bool m_TangentIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTSectionPlaneInfo_H_ */