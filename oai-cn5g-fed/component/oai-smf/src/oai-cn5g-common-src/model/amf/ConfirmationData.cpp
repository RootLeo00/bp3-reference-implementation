/**
 * AUSF API
 * AUSF UE Authentication Service. © 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "ConfirmationData.h"

namespace oai::model::amf {

ConfirmationData::ConfirmationData() {
  m_ResStar = "";
}

ConfirmationData::~ConfirmationData() {}

void ConfirmationData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const ConfirmationData& o) {
  j            = nlohmann::json();
  j["resStar"] = o.m_ResStar;
}

void from_json(const nlohmann::json& j, ConfirmationData& o) {
  j.at("resStar").get_to(o.m_ResStar);
}

std::string ConfirmationData::getResStar() const {
  return m_ResStar;
}
void ConfirmationData::setResStar(std::string const& value) {
  m_ResStar = value;
}

}  // namespace oai::model::amf
