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
 * BTPName_261.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTPName_261_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTPName_261_H_


#include "BTPNode_7.h"
#include "BTPName_261_allOf.h"
#include <cpprest/details/basic_types.h>
#include "BTPIdentifier_8.h"
#include "BTPSpace_10.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTPName_261
    : public BTPNode_7
{
public:
    BTPName_261();
    virtual ~BTPName_261();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTPName_261 members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getImportMicroversion() const;
    bool importMicroversionIsSet() const;
    void unsetImportMicroversion();

    void setImportMicroversion(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    bool isForExport() const;
    bool forExportIsSet() const;
    void unsetForExport();

    void setForExport(bool value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<BTPIdentifier_8> getIdentifier() const;
    bool identifierIsSet() const;
    void unsetIdentifier();

    void setIdentifier(const std::shared_ptr<BTPIdentifier_8>& value);

    /// <summary>
    /// 
    /// </summary>
    bool isGlobalNamespace() const;
    bool globalNamespaceIsSet() const;
    void unsetGlobalNamespace();

    void setGlobalNamespace(bool value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<BTPIdentifier_8>>& getRNamespace();
    bool rNamespaceIsSet() const;
    void unsetr_namespace();

    void setRNamespace(const std::vector<std::shared_ptr<BTPIdentifier_8>>& value);


protected:
    utility::string_t m_ImportMicroversion;
    bool m_ImportMicroversionIsSet;
    bool m_ForExport;
    bool m_ForExportIsSet;
    std::shared_ptr<BTPIdentifier_8> m_Identifier;
    bool m_IdentifierIsSet;
    bool m_GlobalNamespace;
    bool m_GlobalNamespaceIsSet;
    std::vector<std::shared_ptr<BTPIdentifier_8>> m_r_namespace;
    bool m_r_namespaceIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTPName_261_H_ */