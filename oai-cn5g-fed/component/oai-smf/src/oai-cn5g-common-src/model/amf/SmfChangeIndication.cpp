/**
 * Namf_Communication
 * AMF Communication Service © 2019, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "SmfChangeIndication.h"

namespace oai::model::amf {

SmfChangeIndication::SmfChangeIndication() {}

SmfChangeIndication::~SmfChangeIndication() {}

void SmfChangeIndication::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const SmfChangeIndication& o) {
  j = nlohmann::json();
}

void from_json(const nlohmann::json& j, SmfChangeIndication& o) {}

}  // namespace oai::model::amf
