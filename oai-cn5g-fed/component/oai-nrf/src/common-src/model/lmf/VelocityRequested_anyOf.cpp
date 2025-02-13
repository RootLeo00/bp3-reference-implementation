/**
 * LMF Location
 * LMF Location Service. © 2022, 3GPP Organizational Partners (ARIB, ATIS, CCSA,
 * ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.5
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "VelocityRequested_anyOf.h"
#include "Helpers.h"
#include <stdexcept>
#include <sstream>

namespace oai::model::lmf {

VelocityRequested_anyOf::VelocityRequested_anyOf() {}

void VelocityRequested_anyOf::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool VelocityRequested_anyOf::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool VelocityRequested_anyOf::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "VelocityRequested_anyOf" : pathPrefix;

  if (m_value == VelocityRequested_anyOf::eVelocityRequested_anyOf::
                     INVALID_VALUE_OPENAPI_GENERATED) {
    success = false;
    msg << _pathPrefix << ": has no value;";
  }

  return success;
}

bool VelocityRequested_anyOf::operator==(
    const VelocityRequested_anyOf& rhs) const {
  return getValue() == rhs.getValue()

      ;
}

bool VelocityRequested_anyOf::operator!=(
    const VelocityRequested_anyOf& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const VelocityRequested_anyOf& o) {
  j = nlohmann::json();

  switch (o.getValue()) {
    case VelocityRequested_anyOf::eVelocityRequested_anyOf::
        INVALID_VALUE_OPENAPI_GENERATED:
      j = "INVALID_VALUE_OPENAPI_GENERATED";
      break;
    case VelocityRequested_anyOf::eVelocityRequested_anyOf::NOT_REQUESTED:
      j = "VELOCITY_IS_NOT_REQUESTED";
      break;
    case VelocityRequested_anyOf::eVelocityRequested_anyOf::REQUESTED:
      j = "VELOCITY_IS_REQUESTED";
      break;
  }
}

void from_json(const nlohmann::json& j, VelocityRequested_anyOf& o) {
  auto s = j.get<std::string>();
  if (s == "VELOCITY_IS_NOT_REQUESTED") {
    o.setValue(
        VelocityRequested_anyOf::eVelocityRequested_anyOf::NOT_REQUESTED);
  } else if (s == "VELOCITY_IS_REQUESTED") {
    o.setValue(VelocityRequested_anyOf::eVelocityRequested_anyOf::REQUESTED);
  } else {
    std::stringstream ss;
    ss << "Unexpected value " << s << " in json"
       << " cannot be converted to enum of type"
       << " VelocityRequested_anyOf::eVelocityRequested_anyOf";
    throw std::invalid_argument(ss.str());
  }
}

VelocityRequested_anyOf::eVelocityRequested_anyOf
VelocityRequested_anyOf::getValue() const {
  return m_value;
}
void VelocityRequested_anyOf::setValue(
    VelocityRequested_anyOf::eVelocityRequested_anyOf value) {
  m_value = value;
}

}  // namespace oai::model::lmf
