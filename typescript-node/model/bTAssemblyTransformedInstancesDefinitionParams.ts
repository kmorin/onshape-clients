/**
 * Onshape REST API
 * The Onshape REST API consumed by all clients.
 *
 * OpenAPI spec version: 1.93
 * Contact: api-support@onshape.zendesk.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { TransformGroup } from './transformGroup';

export class BTAssemblyTransformedInstancesDefinitionParams {
    'transformGroups'?: Array<TransformGroup>;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "transformGroups",
            "baseName": "transformGroups",
            "type": "Array<TransformGroup>"
        }    ];

    static getAttributeTypeMap() {
        return BTAssemblyTransformedInstancesDefinitionParams.attributeTypeMap;
    }
}

