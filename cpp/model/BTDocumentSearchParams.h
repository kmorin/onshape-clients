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
 * BTDocumentSearchParams.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_BTDocumentSearchParams_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_BTDocumentSearchParams_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  BTDocumentSearchParams
    : public ModelBase
{
public:
    BTDocumentSearchParams();
    virtual ~BTDocumentSearchParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// BTDocumentSearchParams members

    /// <summary>
    /// 
    /// </summary>
    int32_t getDocumentFilter() const;
    bool documentFilterIsSet() const;
    void unsetDocumentFilter();

    void setDocumentFilter(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getFoundIn() const;
    bool foundInIsSet() const;
    void unsetFoundIn();

    void setFoundIn(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetLimit();

    void setLimit(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetOffset();

    void setOffset(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getOwnerId() const;
    bool ownerIdIsSet() const;
    void unsetOwnerId();

    void setOwnerId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getParentId() const;
    bool parentIdIsSet() const;
    void unsetParentId();

    void setParentId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getRawQuery() const;
    bool rawQueryIsSet() const;
    void unsetRawQuery();

    void setRawQuery(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSortColumn() const;
    bool sortColumnIsSet() const;
    void unsetSortColumn();

    void setSortColumn(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSortOrder() const;
    bool sortOrderIsSet() const;
    void unsetSortOrder();

    void setSortOrder(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getType() const;
    bool typeIsSet() const;
    void unsetType();

    void setType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getWhen() const;
    bool whenIsSet() const;
    void unsetWhen();

    void setWhen(const utility::string_t& value);


protected:
    int32_t m_DocumentFilter;
    bool m_DocumentFilterIsSet;
    utility::string_t m_FoundIn;
    bool m_FoundInIsSet;
    int32_t m_Limit;
    bool m_LimitIsSet;
    int32_t m_Offset;
    bool m_OffsetIsSet;
    utility::string_t m_OwnerId;
    bool m_OwnerIdIsSet;
    utility::string_t m_ParentId;
    bool m_ParentIdIsSet;
    utility::string_t m_RawQuery;
    bool m_RawQueryIsSet;
    utility::string_t m_SortColumn;
    bool m_SortColumnIsSet;
    utility::string_t m_SortOrder;
    bool m_SortOrderIsSet;
    utility::string_t m_Type;
    bool m_TypeIsSet;
    utility::string_t m_When;
    bool m_WhenIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_BTDocumentSearchParams_H_ */