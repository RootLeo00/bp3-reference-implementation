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

#include "ReportedEventType_anyOf.h"
#include "Helpers.h"
#include <stdexcept>
#include <sstream>

namespace oai::model::lmf {

ReportedEventType_anyOf::ReportedEventType_anyOf() {}

void ReportedEventType_anyOf::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool ReportedEventType_anyOf::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool ReportedEventType_anyOf::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "ReportedEventType_anyOf" : pathPrefix;

  if (m_value == ReportedEventType_anyOf::eReportedEventType_anyOf::
                     INVALID_VALUE_OPENAPI_GENERATED) {
    success = false;
    msg << _pathPrefix << ": has no value;";
  }

  return success;
}

bool ReportedEventType_anyOf::operator==(
    const ReportedEventType_anyOf& rhs) const {
  return getValue() == rhs.getValue()

      ;
}

bool ReportedEventType_anyOf::operator!=(
    const ReportedEventType_anyOf& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const ReportedEventType_anyOf& o) {
  j = nlohmann::json();

  switch (o.getValue()) {
    case ReportedEventType_anyOf::eReportedEventType_anyOf::
        INVALID_VALUE_OPENAPI_GENERATED:
      j = "INVALID_VALUE_OPENAPI_GENERATED";
      break;
    case ReportedEventType_anyOf::eReportedEventType_anyOf::PERIODIC_EVENT:
      j = "PERIODIC_EVENT";
      break;
    case ReportedEventType_anyOf::eReportedEventType_anyOf::ENTERING_AREA_EVENT:
      j = "ENTERING_AREA_EVENT";
      break;
    case ReportedEventType_anyOf::eReportedEventType_anyOf::LEAVING_AREA_EVENT:
      j = "LEAVING_AREA_EVENT";
      break;
    case ReportedEventType_anyOf::eReportedEventType_anyOf::
        BEING_INSIDE_AREA_EVENT:
      j = "BEING_INSIDE_AREA_EVENT";
      break;
    case ReportedEventType_anyOf::eReportedEventType_anyOf::MOTION_EVENT:
      j = "MOTION_EVENT";
      break;
    case ReportedEventType_anyOf::eReportedEventType_anyOf::
        MAXIMUM_INTERVAL_EXPIRATION_EVENT:
      j = "MAXIMUM_INTERVAL_EXPIRATION_EVENT";
      break;
    case ReportedEventType_anyOf::eReportedEventType_anyOf::
        LOCATION_CANCELLATION_EVENT:
      j = "LOCATION_CANCELLATION_EVENT";
      break;
  }
}

void from_json(const nlohmann::json& j, ReportedEventType_anyOf& o) {
  auto s = j.get<std::string>();
  if (s == "PERIODIC_EVENT") {
    o.setValue(
        ReportedEventType_anyOf::eReportedEventType_anyOf::PERIODIC_EVENT);
  } else if (s == "ENTERING_AREA_EVENT") {
    o.setValue(
        ReportedEventType_anyOf::eReportedEventType_anyOf::ENTERING_AREA_EVENT);
  } else if (s == "LEAVING_AREA_EVENT") {
    o.setValue(
        ReportedEventType_anyOf::eReportedEventType_anyOf::LEAVING_AREA_EVENT);
  } else if (s == "BEING_INSIDE_AREA_EVENT") {
    o.setValue(ReportedEventType_anyOf::eReportedEventType_anyOf::
                   BEING_INSIDE_AREA_EVENT);
  } else if (s == "MOTION_EVENT") {
    o.setValue(ReportedEventType_anyOf::eReportedEventType_anyOf::MOTION_EVENT);
  } else if (s == "MAXIMUM_INTERVAL_EXPIRATION_EVENT") {
    o.setValue(ReportedEventType_anyOf::eReportedEventType_anyOf::
                   MAXIMUM_INTERVAL_EXPIRATION_EVENT);
  } else if (s == "LOCATION_CANCELLATION_EVENT") {
    o.setValue(ReportedEventType_anyOf::eReportedEventType_anyOf::
                   LOCATION_CANCELLATION_EVENT);
  } else {
    std::stringstream ss;
    ss << "Unexpected value " << s << " in json"
       << " cannot be converted to enum of type"
       << " ReportedEventType_anyOf::eReportedEventType_anyOf";
    throw std::invalid_argument(ss.str());
  }
}

ReportedEventType_anyOf::eReportedEventType_anyOf
ReportedEventType_anyOf::getValue() const {
  return m_value;
}
void ReportedEventType_anyOf::setValue(
    ReportedEventType_anyOf::eReportedEventType_anyOf value) {
  m_value = value;
}

}  // namespace oai::model::lmf
