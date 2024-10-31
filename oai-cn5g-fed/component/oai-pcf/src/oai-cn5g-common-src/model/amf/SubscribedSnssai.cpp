/**
 * NSSF NS Selection
 * NSSF Network Slice Selection Service. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.1.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "SubscribedSnssai.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::amf {

SubscribedSnssai::SubscribedSnssai() {
  m_DefaultIndication      = false;
  m_DefaultIndicationIsSet = false;
}

void SubscribedSnssai::validate() const {
  std::stringstream msg;
  // if (!validate(msg))
  // {
  //     throw oai::nssf_server::helpers::ValidationException(msg.str());
  // }
}

bool SubscribedSnssai::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool SubscribedSnssai::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "SubscribedSnssai" : pathPrefix;

  return success;
}

bool SubscribedSnssai::operator==(const SubscribedSnssai& rhs) const {
  return

      (getSubscribedSnssai() == rhs.getSubscribedSnssai()) &&

      ((!defaultIndicationIsSet() && !rhs.defaultIndicationIsSet()) ||
       (defaultIndicationIsSet() && rhs.defaultIndicationIsSet() &&
        isDefaultIndication() == rhs.isDefaultIndication()))

          ;
}

bool SubscribedSnssai::operator!=(const SubscribedSnssai& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const SubscribedSnssai& o) {
  j                     = nlohmann::json();
  j["subscribedSnssai"] = o.m_SubscribedSnssai;
  if (o.defaultIndicationIsSet())
    j["defaultIndication"] = o.m_DefaultIndication;
}

void from_json(const nlohmann::json& j, SubscribedSnssai& o) {
  j.at("subscribedSnssai").get_to(o.m_SubscribedSnssai);
  if (j.find("defaultIndication") != j.end()) {
    j.at("defaultIndication").get_to(o.m_DefaultIndication);
    o.m_DefaultIndicationIsSet = true;
  }
}

oai::model::common::Snssai SubscribedSnssai::getSubscribedSnssai() const {
  return m_SubscribedSnssai;
}
void SubscribedSnssai::setSubscribedSnssai(
    oai::model::common::Snssai const& value) {
  m_SubscribedSnssai = value;
}
bool SubscribedSnssai::isDefaultIndication() const {
  return m_DefaultIndication;
}
void SubscribedSnssai::setDefaultIndication(bool const value) {
  m_DefaultIndication      = value;
  m_DefaultIndicationIsSet = true;
}
bool SubscribedSnssai::defaultIndicationIsSet() const {
  return m_DefaultIndicationIsSet;
}
void SubscribedSnssai::unsetDefaultIndication() {
  m_DefaultIndicationIsSet = false;
}

}  // namespace oai::model::amf
