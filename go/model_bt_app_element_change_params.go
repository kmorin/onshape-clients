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
// BtAppElementChangeParams struct for BtAppElementChangeParams
type BtAppElementChangeParams struct {
	BaseContent string `json:"baseContent,omitempty"`
	Delta string `json:"delta,omitempty"`
	SubelementId string `json:"subelementId,omitempty"`
}