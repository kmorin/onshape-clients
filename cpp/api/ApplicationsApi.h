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
 * ApplicationsApi.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_API_ApplicationsApi_H_
#define ORG_OPENAPITOOLS_CLIENT_API_ApplicationsApi_H_


#include "../ApiClient.h"

#include "BTUserAppSettingsInfo.h"
#include "BTUserAppSettingsParams.h"
#include <cpprest/details/basic_types.h>


#include <boost/optional.hpp>

namespace org {
namespace openapitools {
namespace client {
namespace api {

using namespace org::openapitools::client::model;



class  ApplicationsApi 
{
public:

    explicit ApplicationsApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~ApplicationsApi();

    /// <summary>
    /// Delete Application Settings
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="uid"></param>
    /// <param name="cid"></param>
    /// <param name="key"> (optional, default to std::vector&lt;std::shared_ptr&lt;utility::string_t&gt;&gt;())</param>
    pplx::task<void> deleteAppSettings(
        utility::string_t uid,
        utility::string_t cid,
        boost::optional<std::vector<utility::string_t>> key
    ) const;
    /// <summary>
    /// Get User Application Settings
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="uid"></param>
    /// <param name="cid"></param>
    /// <param name="key"> (optional, default to std::vector&lt;std::shared_ptr&lt;utility::string_t&gt;&gt;())</param>
    pplx::task<std::shared_ptr<BTUserAppSettingsInfo>> getUserAppSettings(
        utility::string_t uid,
        utility::string_t cid,
        boost::optional<std::vector<utility::string_t>> key
    ) const;
    /// <summary>
    /// Update Application Settings
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="uid"></param>
    /// <param name="cid"></param>
    /// <param name="bTUserAppSettingsParams"></param>
    pplx::task<void> updateAppSettings(
        utility::string_t uid,
        utility::string_t cid,
        std::shared_ptr<BTUserAppSettingsParams> bTUserAppSettingsParams
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_API_ApplicationsApi_H_ */
