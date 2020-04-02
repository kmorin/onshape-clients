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
 * BTUpdateFeaturesResponse_1333.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTUpdateFeaturesResponse_1333_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTUpdateFeaturesResponse_1333_H_


#include "BTFeatureApiBase_1430.h"
#include "BTUpdateFeaturesResponse_1333_allOf.h"
#include <cpprest/details/basic_types.h>
#include "BTFeatureState_1688.h"
#include "BTMFeature_134.h"
#include <map>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTUpdateFeaturesResponse_1333
    : public BTFeatureApiBase_1430
{
public:
    BTUpdateFeaturesResponse_1333();
    virtual ~BTUpdateFeaturesResponse_1333();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTUpdateFeaturesResponse_1333 members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<BTMFeature_134>>& getFeatures();
    bool featuresIsSet() const;
    void unsetFeatures();

    void setFeatures(const std::vector<std::shared_ptr<BTMFeature_134>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::map<utility::string_t, std::shared_ptr<BTFeatureState_1688>>& getFeatureStates();
    bool featureStatesIsSet() const;
    void unsetFeatureStates();

    void setFeatureStates(const std::map<utility::string_t, std::shared_ptr<BTFeatureState_1688>>& value);


protected:
    std::vector<std::shared_ptr<BTMFeature_134>> m_Features;
    bool m_FeaturesIsSet;
    std::map<utility::string_t, std::shared_ptr<BTFeatureState_1688>> m_FeatureStates;
    bool m_FeatureStatesIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTUpdateFeaturesResponse_1333_H_ */