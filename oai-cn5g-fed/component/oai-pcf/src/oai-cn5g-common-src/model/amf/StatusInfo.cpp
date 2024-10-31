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

#include "StatusInfo.h"

namespace oai::model::amf {

StatusInfo::StatusInfo() {
  m_CauseIsSet = false;
}

StatusInfo::~StatusInfo() {}

void StatusInfo::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const StatusInfo& o) {
  j                   = nlohmann::json();
  j["resourceStatus"] = o.m_ResourceStatus;
  if (o.causeIsSet()) j["cause"] = o.m_Cause;
}

void from_json(const nlohmann::json& j, StatusInfo& o) {
  j.at("resourceStatus").get_to(o.m_ResourceStatus);
  if (j.find("cause") != j.end()) {
    j.at("cause").get_to(o.m_Cause);
    o.m_CauseIsSet = true;
  }
}

ResourceStatus StatusInfo::getResourceStatus() const {
  return m_ResourceStatus;
}
void StatusInfo::setResourceStatus(ResourceStatus const& value) {
  m_ResourceStatus = value;
}
Cause StatusInfo::getCause() const {
  return m_Cause;
}
void StatusInfo::setCause(Cause const& value) {
  m_Cause      = value;
  m_CauseIsSet = true;
}
bool StatusInfo::causeIsSet() const {
  return m_CauseIsSet;
}
void StatusInfo::unsetCause() {
  m_CauseIsSet = false;
}

}  // namespace oai::model::amf
