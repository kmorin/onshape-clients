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



#include "Subscription.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




Subscription::Subscription()
{
    m_ApplicationFeePercent = 0.0;
    m_ApplicationFeePercentIsSet = false;
    m_Billing = utility::conversions::to_string_t("");
    m_BillingIsSet = false;
    m_CancelAtPeriodEnd = false;
    m_CancelAtPeriodEndIsSet = false;
    m_CanceledAt = 0L;
    m_CanceledAtIsSet = false;
    m_Created = 0L;
    m_CreatedIsSet = false;
    m_CurrentPeriodEnd = 0L;
    m_CurrentPeriodEndIsSet = false;
    m_CurrentPeriodStart = 0L;
    m_CurrentPeriodStartIsSet = false;
    m_Customer = utility::conversions::to_string_t("");
    m_CustomerIsSet = false;
    m_CustomerObjectIsSet = false;
    m_DaysUntilDue = 0;
    m_DaysUntilDueIsSet = false;
    m_DiscountIsSet = false;
    m_EndedAt = 0L;
    m_EndedAtIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_MetadataIsSet = false;
    m_object = utility::conversions::to_string_t("");
    m_objectIsSet = false;
    m_PlanIsSet = false;
    m_Quantity = 0;
    m_QuantityIsSet = false;
    m_Start = 0L;
    m_StartIsSet = false;
    m_Status = utility::conversions::to_string_t("");
    m_StatusIsSet = false;
    m_SubscriptionItemsIsSet = false;
    m_TaxPercent = 0.0;
    m_TaxPercentIsSet = false;
    m_TrialEnd = 0L;
    m_TrialEndIsSet = false;
    m_TrialStart = 0L;
    m_TrialStartIsSet = false;
}

Subscription::~Subscription()
{
}

void Subscription::validate()
{
    // TODO: implement validation
}

web::json::value Subscription::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ApplicationFeePercentIsSet)
    {
        val[utility::conversions::to_string_t("applicationFeePercent")] = ModelBase::toJson(m_ApplicationFeePercent);
    }
    if(m_BillingIsSet)
    {
        val[utility::conversions::to_string_t("billing")] = ModelBase::toJson(m_Billing);
    }
    if(m_CancelAtPeriodEndIsSet)
    {
        val[utility::conversions::to_string_t("cancelAtPeriodEnd")] = ModelBase::toJson(m_CancelAtPeriodEnd);
    }
    if(m_CanceledAtIsSet)
    {
        val[utility::conversions::to_string_t("canceledAt")] = ModelBase::toJson(m_CanceledAt);
    }
    if(m_CreatedIsSet)
    {
        val[utility::conversions::to_string_t("created")] = ModelBase::toJson(m_Created);
    }
    if(m_CurrentPeriodEndIsSet)
    {
        val[utility::conversions::to_string_t("currentPeriodEnd")] = ModelBase::toJson(m_CurrentPeriodEnd);
    }
    if(m_CurrentPeriodStartIsSet)
    {
        val[utility::conversions::to_string_t("currentPeriodStart")] = ModelBase::toJson(m_CurrentPeriodStart);
    }
    if(m_CustomerIsSet)
    {
        val[utility::conversions::to_string_t("customer")] = ModelBase::toJson(m_Customer);
    }
    if(m_CustomerObjectIsSet)
    {
        val[utility::conversions::to_string_t("customerObject")] = ModelBase::toJson(m_CustomerObject);
    }
    if(m_DaysUntilDueIsSet)
    {
        val[utility::conversions::to_string_t("daysUntilDue")] = ModelBase::toJson(m_DaysUntilDue);
    }
    if(m_DiscountIsSet)
    {
        val[utility::conversions::to_string_t("discount")] = ModelBase::toJson(m_Discount);
    }
    if(m_EndedAtIsSet)
    {
        val[utility::conversions::to_string_t("endedAt")] = ModelBase::toJson(m_EndedAt);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_MetadataIsSet)
    {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(m_Metadata);
    }
    if(m_objectIsSet)
    {
        val[utility::conversions::to_string_t("object")] = ModelBase::toJson(m_object);
    }
    if(m_PlanIsSet)
    {
        val[utility::conversions::to_string_t("plan")] = ModelBase::toJson(m_Plan);
    }
    if(m_QuantityIsSet)
    {
        val[utility::conversions::to_string_t("quantity")] = ModelBase::toJson(m_Quantity);
    }
    if(m_StartIsSet)
    {
        val[utility::conversions::to_string_t("start")] = ModelBase::toJson(m_Start);
    }
    if(m_StatusIsSet)
    {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(m_Status);
    }
    if(m_SubscriptionItemsIsSet)
    {
        val[utility::conversions::to_string_t("subscriptionItems")] = ModelBase::toJson(m_SubscriptionItems);
    }
    if(m_TaxPercentIsSet)
    {
        val[utility::conversions::to_string_t("taxPercent")] = ModelBase::toJson(m_TaxPercent);
    }
    if(m_TrialEndIsSet)
    {
        val[utility::conversions::to_string_t("trialEnd")] = ModelBase::toJson(m_TrialEnd);
    }
    if(m_TrialStartIsSet)
    {
        val[utility::conversions::to_string_t("trialStart")] = ModelBase::toJson(m_TrialStart);
    }

    return val;
}

bool Subscription::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("applicationFeePercent")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("applicationFeePercent"));
        if(!fieldValue.is_null())
        {
            double refVal_applicationFeePercent;
            ok &= ModelBase::fromJson(fieldValue, refVal_applicationFeePercent);
            setApplicationFeePercent(refVal_applicationFeePercent);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("billing")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("billing"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_billing;
            ok &= ModelBase::fromJson(fieldValue, refVal_billing);
            setBilling(refVal_billing);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cancelAtPeriodEnd")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cancelAtPeriodEnd"));
        if(!fieldValue.is_null())
        {
            bool refVal_cancelAtPeriodEnd;
            ok &= ModelBase::fromJson(fieldValue, refVal_cancelAtPeriodEnd);
            setCancelAtPeriodEnd(refVal_cancelAtPeriodEnd);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("canceledAt")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("canceledAt"));
        if(!fieldValue.is_null())
        {
            int64_t refVal_canceledAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_canceledAt);
            setCanceledAt(refVal_canceledAt);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created"));
        if(!fieldValue.is_null())
        {
            int64_t refVal_created;
            ok &= ModelBase::fromJson(fieldValue, refVal_created);
            setCreated(refVal_created);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("currentPeriodEnd")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("currentPeriodEnd"));
        if(!fieldValue.is_null())
        {
            int64_t refVal_currentPeriodEnd;
            ok &= ModelBase::fromJson(fieldValue, refVal_currentPeriodEnd);
            setCurrentPeriodEnd(refVal_currentPeriodEnd);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("currentPeriodStart")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("currentPeriodStart"));
        if(!fieldValue.is_null())
        {
            int64_t refVal_currentPeriodStart;
            ok &= ModelBase::fromJson(fieldValue, refVal_currentPeriodStart);
            setCurrentPeriodStart(refVal_currentPeriodStart);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("customer")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("customer"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_customer;
            ok &= ModelBase::fromJson(fieldValue, refVal_customer);
            setCustomer(refVal_customer);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("customerObject")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("customerObject"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Customer> refVal_customerObject;
            ok &= ModelBase::fromJson(fieldValue, refVal_customerObject);
            setCustomerObject(refVal_customerObject);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("daysUntilDue")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("daysUntilDue"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_daysUntilDue;
            ok &= ModelBase::fromJson(fieldValue, refVal_daysUntilDue);
            setDaysUntilDue(refVal_daysUntilDue);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("discount")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("discount"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Discount> refVal_discount;
            ok &= ModelBase::fromJson(fieldValue, refVal_discount);
            setDiscount(refVal_discount);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endedAt")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endedAt"));
        if(!fieldValue.is_null())
        {
            int64_t refVal_endedAt;
            ok &= ModelBase::fromJson(fieldValue, refVal_endedAt);
            setEndedAt(refVal_endedAt);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_id);
            setId(refVal_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metadata")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            std::map<utility::string_t, utility::string_t> refVal_metadata;
            ok &= ModelBase::fromJson(fieldValue, refVal_metadata);
            setMetadata(refVal_metadata);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_object;
            ok &= ModelBase::fromJson(fieldValue, refVal_object);
            setObject(refVal_object);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plan")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Plan> refVal_plan;
            ok &= ModelBase::fromJson(fieldValue, refVal_plan);
            setPlan(refVal_plan);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quantity")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quantity"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_quantity;
            ok &= ModelBase::fromJson(fieldValue, refVal_quantity);
            setQuantity(refVal_quantity);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start"));
        if(!fieldValue.is_null())
        {
            int64_t refVal_start;
            ok &= ModelBase::fromJson(fieldValue, refVal_start);
            setStart(refVal_start);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_status;
            ok &= ModelBase::fromJson(fieldValue, refVal_status);
            setStatus(refVal_status);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subscriptionItems")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscriptionItems"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<SubscriptionItemCollection> refVal_subscriptionItems;
            ok &= ModelBase::fromJson(fieldValue, refVal_subscriptionItems);
            setSubscriptionItems(refVal_subscriptionItems);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("taxPercent")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("taxPercent"));
        if(!fieldValue.is_null())
        {
            double refVal_taxPercent;
            ok &= ModelBase::fromJson(fieldValue, refVal_taxPercent);
            setTaxPercent(refVal_taxPercent);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trialEnd")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trialEnd"));
        if(!fieldValue.is_null())
        {
            int64_t refVal_trialEnd;
            ok &= ModelBase::fromJson(fieldValue, refVal_trialEnd);
            setTrialEnd(refVal_trialEnd);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trialStart")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trialStart"));
        if(!fieldValue.is_null())
        {
            int64_t refVal_trialStart;
            ok &= ModelBase::fromJson(fieldValue, refVal_trialStart);
            setTrialStart(refVal_trialStart);
        }
    }
    return ok;
}

void Subscription::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ApplicationFeePercentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("applicationFeePercent"), m_ApplicationFeePercent));
    }
    if(m_BillingIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("billing"), m_Billing));
    }
    if(m_CancelAtPeriodEndIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("cancelAtPeriodEnd"), m_CancelAtPeriodEnd));
    }
    if(m_CanceledAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("canceledAt"), m_CanceledAt));
    }
    if(m_CreatedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("created"), m_Created));
    }
    if(m_CurrentPeriodEndIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("currentPeriodEnd"), m_CurrentPeriodEnd));
    }
    if(m_CurrentPeriodStartIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("currentPeriodStart"), m_CurrentPeriodStart));
    }
    if(m_CustomerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("customer"), m_Customer));
    }
    if(m_CustomerObjectIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("customerObject"), m_CustomerObject));
    }
    if(m_DaysUntilDueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("daysUntilDue"), m_DaysUntilDue));
    }
    if(m_DiscountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("discount"), m_Discount));
    }
    if(m_EndedAtIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("endedAt"), m_EndedAt));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_MetadataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("metadata"), m_Metadata));
    }
    if(m_objectIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("object"), m_object));
    }
    if(m_PlanIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("plan"), m_Plan));
    }
    if(m_QuantityIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("quantity"), m_Quantity));
    }
    if(m_StartIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("start"), m_Start));
    }
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("status"), m_Status));
    }
    if(m_SubscriptionItemsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("subscriptionItems"), m_SubscriptionItems));
    }
    if(m_TaxPercentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("taxPercent"), m_TaxPercent));
    }
    if(m_TrialEndIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("trialEnd"), m_TrialEnd));
    }
    if(m_TrialStartIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("trialStart"), m_TrialStart));
    }
}

bool Subscription::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("applicationFeePercent")))
    {
        double refVal_applicationFeePercent;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("applicationFeePercent")), refVal_applicationFeePercent );
        setApplicationFeePercent(refVal_applicationFeePercent);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("billing")))
    {
        utility::string_t refVal_billing;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("billing")), refVal_billing );
        setBilling(refVal_billing);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("cancelAtPeriodEnd")))
    {
        bool refVal_cancelAtPeriodEnd;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("cancelAtPeriodEnd")), refVal_cancelAtPeriodEnd );
        setCancelAtPeriodEnd(refVal_cancelAtPeriodEnd);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("canceledAt")))
    {
        int64_t refVal_canceledAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("canceledAt")), refVal_canceledAt );
        setCanceledAt(refVal_canceledAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("created")))
    {
        int64_t refVal_created;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("created")), refVal_created );
        setCreated(refVal_created);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("currentPeriodEnd")))
    {
        int64_t refVal_currentPeriodEnd;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("currentPeriodEnd")), refVal_currentPeriodEnd );
        setCurrentPeriodEnd(refVal_currentPeriodEnd);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("currentPeriodStart")))
    {
        int64_t refVal_currentPeriodStart;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("currentPeriodStart")), refVal_currentPeriodStart );
        setCurrentPeriodStart(refVal_currentPeriodStart);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("customer")))
    {
        utility::string_t refVal_customer;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("customer")), refVal_customer );
        setCustomer(refVal_customer);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("customerObject")))
    {
        std::shared_ptr<Customer> refVal_customerObject;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("customerObject")), refVal_customerObject );
        setCustomerObject(refVal_customerObject);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("daysUntilDue")))
    {
        int32_t refVal_daysUntilDue;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("daysUntilDue")), refVal_daysUntilDue );
        setDaysUntilDue(refVal_daysUntilDue);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("discount")))
    {
        std::shared_ptr<Discount> refVal_discount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("discount")), refVal_discount );
        setDiscount(refVal_discount);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("endedAt")))
    {
        int64_t refVal_endedAt;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("endedAt")), refVal_endedAt );
        setEndedAt(refVal_endedAt);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        utility::string_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("id")), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("metadata")))
    {
        std::map<utility::string_t, utility::string_t> refVal_metadata;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("metadata")), refVal_metadata );
        setMetadata(refVal_metadata);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("object")))
    {
        utility::string_t refVal_object;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("object")), refVal_object );
        setObject(refVal_object);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("plan")))
    {
        std::shared_ptr<Plan> refVal_plan;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("plan")), refVal_plan );
        setPlan(refVal_plan);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("quantity")))
    {
        int32_t refVal_quantity;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("quantity")), refVal_quantity );
        setQuantity(refVal_quantity);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("start")))
    {
        int64_t refVal_start;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("start")), refVal_start );
        setStart(refVal_start);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("status")))
    {
        utility::string_t refVal_status;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("status")), refVal_status );
        setStatus(refVal_status);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("subscriptionItems")))
    {
        std::shared_ptr<SubscriptionItemCollection> refVal_subscriptionItems;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("subscriptionItems")), refVal_subscriptionItems );
        setSubscriptionItems(refVal_subscriptionItems);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("taxPercent")))
    {
        double refVal_taxPercent;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("taxPercent")), refVal_taxPercent );
        setTaxPercent(refVal_taxPercent);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("trialEnd")))
    {
        int64_t refVal_trialEnd;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("trialEnd")), refVal_trialEnd );
        setTrialEnd(refVal_trialEnd);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("trialStart")))
    {
        int64_t refVal_trialStart;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("trialStart")), refVal_trialStart );
        setTrialStart(refVal_trialStart);
    }
    return ok;
}

double Subscription::getApplicationFeePercent() const
{
    return m_ApplicationFeePercent;
}

void Subscription::setApplicationFeePercent(double value)
{
    m_ApplicationFeePercent = value;
    m_ApplicationFeePercentIsSet = true;
}

bool Subscription::applicationFeePercentIsSet() const
{
    return m_ApplicationFeePercentIsSet;
}

void Subscription::unsetApplicationFeePercent()
{
    m_ApplicationFeePercentIsSet = false;
}
utility::string_t Subscription::getBilling() const
{
    return m_Billing;
}

void Subscription::setBilling(const utility::string_t& value)
{
    m_Billing = value;
    m_BillingIsSet = true;
}

bool Subscription::billingIsSet() const
{
    return m_BillingIsSet;
}

void Subscription::unsetBilling()
{
    m_BillingIsSet = false;
}
bool Subscription::isCancelAtPeriodEnd() const
{
    return m_CancelAtPeriodEnd;
}

void Subscription::setCancelAtPeriodEnd(bool value)
{
    m_CancelAtPeriodEnd = value;
    m_CancelAtPeriodEndIsSet = true;
}

bool Subscription::cancelAtPeriodEndIsSet() const
{
    return m_CancelAtPeriodEndIsSet;
}

void Subscription::unsetCancelAtPeriodEnd()
{
    m_CancelAtPeriodEndIsSet = false;
}
int64_t Subscription::getCanceledAt() const
{
    return m_CanceledAt;
}

void Subscription::setCanceledAt(int64_t value)
{
    m_CanceledAt = value;
    m_CanceledAtIsSet = true;
}

bool Subscription::canceledAtIsSet() const
{
    return m_CanceledAtIsSet;
}

void Subscription::unsetCanceledAt()
{
    m_CanceledAtIsSet = false;
}
int64_t Subscription::getCreated() const
{
    return m_Created;
}

void Subscription::setCreated(int64_t value)
{
    m_Created = value;
    m_CreatedIsSet = true;
}

bool Subscription::createdIsSet() const
{
    return m_CreatedIsSet;
}

void Subscription::unsetCreated()
{
    m_CreatedIsSet = false;
}
int64_t Subscription::getCurrentPeriodEnd() const
{
    return m_CurrentPeriodEnd;
}

void Subscription::setCurrentPeriodEnd(int64_t value)
{
    m_CurrentPeriodEnd = value;
    m_CurrentPeriodEndIsSet = true;
}

bool Subscription::currentPeriodEndIsSet() const
{
    return m_CurrentPeriodEndIsSet;
}

void Subscription::unsetCurrentPeriodEnd()
{
    m_CurrentPeriodEndIsSet = false;
}
int64_t Subscription::getCurrentPeriodStart() const
{
    return m_CurrentPeriodStart;
}

void Subscription::setCurrentPeriodStart(int64_t value)
{
    m_CurrentPeriodStart = value;
    m_CurrentPeriodStartIsSet = true;
}

bool Subscription::currentPeriodStartIsSet() const
{
    return m_CurrentPeriodStartIsSet;
}

void Subscription::unsetCurrentPeriodStart()
{
    m_CurrentPeriodStartIsSet = false;
}
utility::string_t Subscription::getCustomer() const
{
    return m_Customer;
}

void Subscription::setCustomer(const utility::string_t& value)
{
    m_Customer = value;
    m_CustomerIsSet = true;
}

bool Subscription::customerIsSet() const
{
    return m_CustomerIsSet;
}

void Subscription::unsetCustomer()
{
    m_CustomerIsSet = false;
}
std::shared_ptr<Customer> Subscription::getCustomerObject() const
{
    return m_CustomerObject;
}

void Subscription::setCustomerObject(const std::shared_ptr<Customer>& value)
{
    m_CustomerObject = value;
    m_CustomerObjectIsSet = true;
}

bool Subscription::customerObjectIsSet() const
{
    return m_CustomerObjectIsSet;
}

void Subscription::unsetCustomerObject()
{
    m_CustomerObjectIsSet = false;
}
int32_t Subscription::getDaysUntilDue() const
{
    return m_DaysUntilDue;
}

void Subscription::setDaysUntilDue(int32_t value)
{
    m_DaysUntilDue = value;
    m_DaysUntilDueIsSet = true;
}

bool Subscription::daysUntilDueIsSet() const
{
    return m_DaysUntilDueIsSet;
}

void Subscription::unsetDaysUntilDue()
{
    m_DaysUntilDueIsSet = false;
}
std::shared_ptr<Discount> Subscription::getDiscount() const
{
    return m_Discount;
}

void Subscription::setDiscount(const std::shared_ptr<Discount>& value)
{
    m_Discount = value;
    m_DiscountIsSet = true;
}

bool Subscription::discountIsSet() const
{
    return m_DiscountIsSet;
}

void Subscription::unsetDiscount()
{
    m_DiscountIsSet = false;
}
int64_t Subscription::getEndedAt() const
{
    return m_EndedAt;
}

void Subscription::setEndedAt(int64_t value)
{
    m_EndedAt = value;
    m_EndedAtIsSet = true;
}

bool Subscription::endedAtIsSet() const
{
    return m_EndedAtIsSet;
}

void Subscription::unsetEndedAt()
{
    m_EndedAtIsSet = false;
}
utility::string_t Subscription::getId() const
{
    return m_Id;
}

void Subscription::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool Subscription::idIsSet() const
{
    return m_IdIsSet;
}

void Subscription::unsetId()
{
    m_IdIsSet = false;
}
std::map<utility::string_t, utility::string_t>& Subscription::getMetadata()
{
    return m_Metadata;
}

void Subscription::setMetadata(const std::map<utility::string_t, utility::string_t>& value)
{
    m_Metadata = value;
    m_MetadataIsSet = true;
}

bool Subscription::metadataIsSet() const
{
    return m_MetadataIsSet;
}

void Subscription::unsetMetadata()
{
    m_MetadataIsSet = false;
}
utility::string_t Subscription::getObject() const
{
    return m_object;
}

void Subscription::setObject(const utility::string_t& value)
{
    m_object = value;
    m_objectIsSet = true;
}

bool Subscription::objectIsSet() const
{
    return m_objectIsSet;
}

void Subscription::unsetobject()
{
    m_objectIsSet = false;
}
std::shared_ptr<Plan> Subscription::getPlan() const
{
    return m_Plan;
}

void Subscription::setPlan(const std::shared_ptr<Plan>& value)
{
    m_Plan = value;
    m_PlanIsSet = true;
}

bool Subscription::planIsSet() const
{
    return m_PlanIsSet;
}

void Subscription::unsetPlan()
{
    m_PlanIsSet = false;
}
int32_t Subscription::getQuantity() const
{
    return m_Quantity;
}

void Subscription::setQuantity(int32_t value)
{
    m_Quantity = value;
    m_QuantityIsSet = true;
}

bool Subscription::quantityIsSet() const
{
    return m_QuantityIsSet;
}

void Subscription::unsetQuantity()
{
    m_QuantityIsSet = false;
}
int64_t Subscription::getStart() const
{
    return m_Start;
}

void Subscription::setStart(int64_t value)
{
    m_Start = value;
    m_StartIsSet = true;
}

bool Subscription::startIsSet() const
{
    return m_StartIsSet;
}

void Subscription::unsetStart()
{
    m_StartIsSet = false;
}
utility::string_t Subscription::getStatus() const
{
    return m_Status;
}

void Subscription::setStatus(const utility::string_t& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}

bool Subscription::statusIsSet() const
{
    return m_StatusIsSet;
}

void Subscription::unsetStatus()
{
    m_StatusIsSet = false;
}
std::shared_ptr<SubscriptionItemCollection> Subscription::getSubscriptionItems() const
{
    return m_SubscriptionItems;
}

void Subscription::setSubscriptionItems(const std::shared_ptr<SubscriptionItemCollection>& value)
{
    m_SubscriptionItems = value;
    m_SubscriptionItemsIsSet = true;
}

bool Subscription::subscriptionItemsIsSet() const
{
    return m_SubscriptionItemsIsSet;
}

void Subscription::unsetSubscriptionItems()
{
    m_SubscriptionItemsIsSet = false;
}
double Subscription::getTaxPercent() const
{
    return m_TaxPercent;
}

void Subscription::setTaxPercent(double value)
{
    m_TaxPercent = value;
    m_TaxPercentIsSet = true;
}

bool Subscription::taxPercentIsSet() const
{
    return m_TaxPercentIsSet;
}

void Subscription::unsetTaxPercent()
{
    m_TaxPercentIsSet = false;
}
int64_t Subscription::getTrialEnd() const
{
    return m_TrialEnd;
}

void Subscription::setTrialEnd(int64_t value)
{
    m_TrialEnd = value;
    m_TrialEndIsSet = true;
}

bool Subscription::trialEndIsSet() const
{
    return m_TrialEndIsSet;
}

void Subscription::unsetTrialEnd()
{
    m_TrialEndIsSet = false;
}
int64_t Subscription::getTrialStart() const
{
    return m_TrialStart;
}

void Subscription::setTrialStart(int64_t value)
{
    m_TrialStart = value;
    m_TrialStartIsSet = true;
}

bool Subscription::trialStartIsSet() const
{
    return m_TrialStartIsSet;
}

void Subscription::unsetTrialStart()
{
    m_TrialStartIsSet = false;
}
}
}
}
}

