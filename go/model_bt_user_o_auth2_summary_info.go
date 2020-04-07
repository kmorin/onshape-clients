/*
 * Onshape REST API
 *
 * The Onshape REST API consumed by all clients.
 *
 * API version: 1.111
 * Contact: api-support@onshape.zendesk.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi
import (
	"time"
)
// BtUserOAuth2SummaryInfo struct for BtUserOAuth2SummaryInfo
type BtUserOAuth2SummaryInfo struct {
	ClientId string `json:"clientId,omitempty"`
	Company BtCompanySummaryInfo `json:"company,omitempty"`
	CompanyPlan bool `json:"companyPlan,omitempty"`
	Email string `json:"email,omitempty"`
	FirstName string `json:"firstName,omitempty"`
	GlobalPermissions GlobalPermissionInfo `json:"globalPermissions,omitempty"`
	Href string `json:"href,omitempty"`
	Id string `json:"id,omitempty"`
	Image string `json:"image,omitempty"`
	IsGuest bool `json:"isGuest,omitempty"`
	IsLight bool `json:"isLight,omitempty"`
	LastLoginTime time.Time `json:"lastLoginTime,omitempty"`
	LastName string `json:"lastName,omitempty"`
	Name string `json:"name,omitempty"`
	Oauth2Scopes int64 `json:"oauth2Scopes,omitempty"`
	PlanGroup string `json:"planGroup,omitempty"`
	Role int32 `json:"role,omitempty"`
	Roles []string `json:"roles,omitempty"`
	Source int32 `json:"source,omitempty"`
	State int32 `json:"state,omitempty"`
	ViewRef string `json:"viewRef,omitempty"`
}