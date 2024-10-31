/**
 * 3gpp-iptvconfiguration
 * API for IPTV configuration. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "IptvConfigDataPatch.h"

#include <sstream>

#include "Helpers.h"

namespace oai::nef::model {

IptvConfigDataPatch::IptvConfigDataPatch() {
  m_MultiAccCtrlsIsSet = false;
}

void IptvConfigDataPatch::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::nef::helpers::ValidationException(msg.str());
  }
}

bool IptvConfigDataPatch::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool IptvConfigDataPatch::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "IptvConfigDataPatch" : pathPrefix;

  if (multiAccCtrlsIsSet()) {
    const std::map<std::string, MulticastAccessControl>& value =
        m_MultiAccCtrls;
    const std::string currentValuePath = _pathPrefix + ".multiAccCtrls";
  }

  return success;
}

bool IptvConfigDataPatch::operator==(const IptvConfigDataPatch& rhs) const {
  return

      ((!multiAccCtrlsIsSet() && !rhs.multiAccCtrlsIsSet()) ||
       (multiAccCtrlsIsSet() && rhs.multiAccCtrlsIsSet() &&
        getMultiAccCtrls() == rhs.getMultiAccCtrls()))

          ;
}

bool IptvConfigDataPatch::operator!=(const IptvConfigDataPatch& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const IptvConfigDataPatch& o) {
  j = nlohmann::json();
  if (o.multiAccCtrlsIsSet() || !o.m_MultiAccCtrls.empty())
    j["multiAccCtrls"] = o.m_MultiAccCtrls;
}

void from_json(const nlohmann::json& j, IptvConfigDataPatch& o) {
  if (j.find("multiAccCtrls") != j.end()) {
    j.at("multiAccCtrls").get_to(o.m_MultiAccCtrls);
    o.m_MultiAccCtrlsIsSet = true;
  }
}

std::map<std::string, MulticastAccessControl>
IptvConfigDataPatch::getMultiAccCtrls() const {
  return m_MultiAccCtrls;
}
void IptvConfigDataPatch::setMultiAccCtrls(
    std::map<std::string, MulticastAccessControl> const& value) {
  m_MultiAccCtrls      = value;
  m_MultiAccCtrlsIsSet = true;
}
bool IptvConfigDataPatch::multiAccCtrlsIsSet() const {
  return m_MultiAccCtrlsIsSet;
}
void IptvConfigDataPatch::unsetMultiAccCtrls() {
  m_MultiAccCtrlsIsSet = false;
}

}  // namespace oai::nef::model
