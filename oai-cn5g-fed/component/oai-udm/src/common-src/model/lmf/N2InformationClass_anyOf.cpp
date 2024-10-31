/**
 * Namf_Communication
 * AMF Communication Service © 2022, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.8
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "N2InformationClass_anyOf.h"
#include "Helpers.h"
#include <stdexcept>
#include <sstream>

namespace oai::model::lmf {

N2InformationClass_anyOf::N2InformationClass_anyOf() {}

void N2InformationClass_anyOf::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool N2InformationClass_anyOf::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool N2InformationClass_anyOf::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "N2InformationClass_anyOf" : pathPrefix;

  if (m_value == N2InformationClass_anyOf::eN2InformationClass_anyOf::
                     INVALID_VALUE_OPENAPI_GENERATED) {
    success = false;
    msg << _pathPrefix << ": has no value;";
  }

  return success;
}

bool N2InformationClass_anyOf::operator==(
    const N2InformationClass_anyOf& rhs) const {
  return getValue() == rhs.getValue()

      ;
}

bool N2InformationClass_anyOf::operator!=(
    const N2InformationClass_anyOf& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const N2InformationClass_anyOf& o) {
  j = nlohmann::json();

  switch (o.getValue()) {
    case N2InformationClass_anyOf::eN2InformationClass_anyOf::
        INVALID_VALUE_OPENAPI_GENERATED:
      j = "INVALID_VALUE_OPENAPI_GENERATED";
      break;
    case N2InformationClass_anyOf::eN2InformationClass_anyOf::SM:
      j = "SM";
      break;
    case N2InformationClass_anyOf::eN2InformationClass_anyOf::NRPPA:
      j = "NRPPa";
      break;
    case N2InformationClass_anyOf::eN2InformationClass_anyOf::PWS:
      j = "PWS";
      break;
    case N2InformationClass_anyOf::eN2InformationClass_anyOf::PWS_BCAL:
      j = "PWS-BCAL";
      break;
    case N2InformationClass_anyOf::eN2InformationClass_anyOf::PWS_RF:
      j = "PWS-RF";
      break;
    case N2InformationClass_anyOf::eN2InformationClass_anyOf::RAN:
      j = "RAN";
      break;
    case N2InformationClass_anyOf::eN2InformationClass_anyOf::V2X:
      j = "V2X";
      break;
  }
}

void from_json(const nlohmann::json& j, N2InformationClass_anyOf& o) {
  auto s = j.get<std::string>();
  if (s == "SM") {
    o.setValue(N2InformationClass_anyOf::eN2InformationClass_anyOf::SM);
  } else if (s == "NRPPa") {
    o.setValue(N2InformationClass_anyOf::eN2InformationClass_anyOf::NRPPA);
  } else if (s == "PWS") {
    o.setValue(N2InformationClass_anyOf::eN2InformationClass_anyOf::PWS);
  } else if (s == "PWS-BCAL") {
    o.setValue(N2InformationClass_anyOf::eN2InformationClass_anyOf::PWS_BCAL);
  } else if (s == "PWS-RF") {
    o.setValue(N2InformationClass_anyOf::eN2InformationClass_anyOf::PWS_RF);
  } else if (s == "RAN") {
    o.setValue(N2InformationClass_anyOf::eN2InformationClass_anyOf::RAN);
  } else if (s == "V2X") {
    o.setValue(N2InformationClass_anyOf::eN2InformationClass_anyOf::V2X);
  } else {
    std::stringstream ss;
    ss << "Unexpected value " << s << " in json"
       << " cannot be converted to enum of type"
       << " N2InformationClass_anyOf::eN2InformationClass_anyOf";
    throw std::invalid_argument(ss.str());
  }
}

N2InformationClass_anyOf::eN2InformationClass_anyOf
N2InformationClass_anyOf::getValue() const {
  return m_value;
}
void N2InformationClass_anyOf::setValue(
    N2InformationClass_anyOf::eN2InformationClass_anyOf value) {
  m_value = value;
}

}  // namespace oai::model::lmf
