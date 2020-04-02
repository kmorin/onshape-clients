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



#include "BTExportModelArcEdgeGeometry_1257_allOf.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BTExportModelArcEdgeGeometry_1257_allOf::BTExportModelArcEdgeGeometry_1257_allOf()
{
    m_ArcIsClockwise = false;
    m_ArcIsClockwiseIsSet = false;
    m_ArcSweep = 0.0;
    m_ArcSweepIsSet = false;
    m_BtType = utility::conversions::to_string_t("");
    m_BtTypeIsSet = false;
}

BTExportModelArcEdgeGeometry_1257_allOf::~BTExportModelArcEdgeGeometry_1257_allOf()
{
}

void BTExportModelArcEdgeGeometry_1257_allOf::validate()
{
    // TODO: implement validation
}

web::json::value BTExportModelArcEdgeGeometry_1257_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ArcIsClockwiseIsSet)
    {
        val[utility::conversions::to_string_t("arcIsClockwise")] = ModelBase::toJson(m_ArcIsClockwise);
    }
    if(m_ArcSweepIsSet)
    {
        val[utility::conversions::to_string_t("arcSweep")] = ModelBase::toJson(m_ArcSweep);
    }
    if(m_BtTypeIsSet)
    {
        val[utility::conversions::to_string_t("btType")] = ModelBase::toJson(m_BtType);
    }

    return val;
}

bool BTExportModelArcEdgeGeometry_1257_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("arcIsClockwise")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("arcIsClockwise"));
        if(!fieldValue.is_null())
        {
            bool refVal_arcIsClockwise;
            ok &= ModelBase::fromJson(fieldValue, refVal_arcIsClockwise);
            setArcIsClockwise(refVal_arcIsClockwise);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("arcSweep")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("arcSweep"));
        if(!fieldValue.is_null())
        {
            double refVal_arcSweep;
            ok &= ModelBase::fromJson(fieldValue, refVal_arcSweep);
            setArcSweep(refVal_arcSweep);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("btType")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("btType"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_btType;
            ok &= ModelBase::fromJson(fieldValue, refVal_btType);
            setBtType(refVal_btType);
        }
    }
    return ok;
}

void BTExportModelArcEdgeGeometry_1257_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ArcIsClockwiseIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("arcIsClockwise"), m_ArcIsClockwise));
    }
    if(m_ArcSweepIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("arcSweep"), m_ArcSweep));
    }
    if(m_BtTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("btType"), m_BtType));
    }
}

bool BTExportModelArcEdgeGeometry_1257_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("arcIsClockwise")))
    {
        bool refVal_arcIsClockwise;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("arcIsClockwise")), refVal_arcIsClockwise );
        setArcIsClockwise(refVal_arcIsClockwise);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("arcSweep")))
    {
        double refVal_arcSweep;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("arcSweep")), refVal_arcSweep );
        setArcSweep(refVal_arcSweep);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("btType")))
    {
        utility::string_t refVal_btType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("btType")), refVal_btType );
        setBtType(refVal_btType);
    }
    return ok;
}

bool BTExportModelArcEdgeGeometry_1257_allOf::isArcIsClockwise() const
{
    return m_ArcIsClockwise;
}

void BTExportModelArcEdgeGeometry_1257_allOf::setArcIsClockwise(bool value)
{
    m_ArcIsClockwise = value;
    m_ArcIsClockwiseIsSet = true;
}

bool BTExportModelArcEdgeGeometry_1257_allOf::arcIsClockwiseIsSet() const
{
    return m_ArcIsClockwiseIsSet;
}

void BTExportModelArcEdgeGeometry_1257_allOf::unsetArcIsClockwise()
{
    m_ArcIsClockwiseIsSet = false;
}
double BTExportModelArcEdgeGeometry_1257_allOf::getArcSweep() const
{
    return m_ArcSweep;
}

void BTExportModelArcEdgeGeometry_1257_allOf::setArcSweep(double value)
{
    m_ArcSweep = value;
    m_ArcSweepIsSet = true;
}

bool BTExportModelArcEdgeGeometry_1257_allOf::arcSweepIsSet() const
{
    return m_ArcSweepIsSet;
}

void BTExportModelArcEdgeGeometry_1257_allOf::unsetArcSweep()
{
    m_ArcSweepIsSet = false;
}
utility::string_t BTExportModelArcEdgeGeometry_1257_allOf::getBtType() const
{
    return m_BtType;
}

void BTExportModelArcEdgeGeometry_1257_allOf::setBtType(const utility::string_t& value)
{
    m_BtType = value;
    m_BtTypeIsSet = true;
}

bool BTExportModelArcEdgeGeometry_1257_allOf::btTypeIsSet() const
{
    return m_BtTypeIsSet;
}

void BTExportModelArcEdgeGeometry_1257_allOf::unsetBtType()
{
    m_BtTypeIsSet = false;
}
}
}
}
}

