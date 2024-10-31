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

#include "EbiArpMapping_2.h"

namespace oai::model::amf {

EbiArpMapping_2::EbiArpMapping_2() {
  m_EpsBearerId = 0;
}

EbiArpMapping_2::~EbiArpMapping_2() {}

void EbiArpMapping_2::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const EbiArpMapping_2& o) {
  j                = nlohmann::json();
  j["epsBearerId"] = o.m_EpsBearerId;
  j["arp"]         = o.m_Arp;
}

void from_json(const nlohmann::json& j, EbiArpMapping_2& o) {
  j.at("epsBearerId").get_to(o.m_EpsBearerId);
  j.at("arp").get_to(o.m_Arp);
}

int32_t EbiArpMapping_2::getEpsBearerId() const {
  return m_EpsBearerId;
}
void EbiArpMapping_2::setEpsBearerId(int32_t const value) {
  m_EpsBearerId = value;
}
oai::model::common::Arp EbiArpMapping_2::getArp() const {
  return m_Arp;
}
void EbiArpMapping_2::setArp(oai::model::common::Arp const& value) {
  m_Arp = value;
}

}  // namespace oai::model::amf
