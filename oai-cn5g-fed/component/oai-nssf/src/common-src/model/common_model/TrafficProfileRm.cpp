/**
 * Common Data Types
 * Common Data Types for Service Based Interfaces. © 2022, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.7
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "TrafficProfileRm.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::common {

TrafficProfileRm::TrafficProfileRm() {}

void TrafficProfileRm::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool TrafficProfileRm::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool TrafficProfileRm::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "TrafficProfileRm" : pathPrefix;

  return success;
}

bool TrafficProfileRm::operator==(const TrafficProfileRm& rhs) const {
  return (*this == rhs);
}

bool TrafficProfileRm::operator!=(const TrafficProfileRm& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const TrafficProfileRm& o) {
  j = nlohmann::json();
}

void from_json(const nlohmann::json& j, TrafficProfileRm& o) {}

}  // namespace oai::model::common
