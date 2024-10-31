/**
 * Nsmf_PDUSession
 * SMF PDU Session Service. © 2019, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "ResourceStatus.h"

namespace oai::model::amf {

ResourceStatus::ResourceStatus() {}

ResourceStatus::~ResourceStatus() {}

void ResourceStatus::validate() {
  // TODO: implement validation
}

std::string ResourceStatus::getValue() const {
  return status;
}
void ResourceStatus::getValue(std::string& v) const {
  v = status;
}

void ResourceStatus::setValue(const std::string& v) {
  status = v;
}

void to_json(nlohmann::json& j, const ResourceStatus& o) {
  j = nlohmann::json();
}

void from_json(const nlohmann::json& j, ResourceStatus& o) {
  j.get_to(o.status);
}

}  // namespace oai::model::amf
