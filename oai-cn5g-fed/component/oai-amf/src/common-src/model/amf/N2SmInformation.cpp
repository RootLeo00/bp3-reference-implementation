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

#include "N2SmInformation.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::amf {

N2SmInformation::N2SmInformation() {
  m_PduSessionId        = 0;
  m_N2InfoContentIsSet  = false;
  m_SNssaiIsSet         = false;
  m_HomePlmnSnssaiIsSet = false;
  m_IwkSnssaiIsSet      = false;
  m_SubjectToHo         = false;
  m_SubjectToHoIsSet    = false;
}

void N2SmInformation::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool N2SmInformation::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool N2SmInformation::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "N2SmInformation" : pathPrefix;

  /* PduSessionId */ {
    const int32_t& value               = m_PduSessionId;
    const std::string currentValuePath = _pathPrefix + ".pduSessionId";

    if (value < 0) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 0;";
    }
    if (value > 255) {
      success = false;
      msg << currentValuePath << ": must be less than or equal to 255;";
    }
  }

  return success;
}

bool N2SmInformation::operator==(const N2SmInformation& rhs) const {
  return

      (getPduSessionId() == rhs.getPduSessionId()) &&

      ((!n2InfoContentIsSet() && !rhs.n2InfoContentIsSet()) ||
       (n2InfoContentIsSet() && rhs.n2InfoContentIsSet() &&
        getN2InfoContent() == rhs.getN2InfoContent())) &&

      ((!sNssaiIsSet() && !rhs.sNssaiIsSet()) ||
       (sNssaiIsSet() && rhs.sNssaiIsSet() &&
        getSNssai() == rhs.getSNssai())) &&

      ((!homePlmnSnssaiIsSet() && !rhs.homePlmnSnssaiIsSet()) ||
       (homePlmnSnssaiIsSet() && rhs.homePlmnSnssaiIsSet() &&
        getHomePlmnSnssai() == rhs.getHomePlmnSnssai())) &&

      ((!iwkSnssaiIsSet() && !rhs.iwkSnssaiIsSet()) ||
       (iwkSnssaiIsSet() && rhs.iwkSnssaiIsSet() &&
        getIwkSnssai() == rhs.getIwkSnssai())) &&

      ((!subjectToHoIsSet() && !rhs.subjectToHoIsSet()) ||
       (subjectToHoIsSet() && rhs.subjectToHoIsSet() &&
        isSubjectToHo() == rhs.isSubjectToHo()))

          ;
}

bool N2SmInformation::operator!=(const N2SmInformation& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const N2SmInformation& o) {
  j                 = nlohmann::json();
  j["pduSessionId"] = o.m_PduSessionId;
  if (o.n2InfoContentIsSet()) j["n2InfoContent"] = o.m_N2InfoContent;
  if (o.sNssaiIsSet()) j["sNssai"] = o.m_SNssai;
  if (o.homePlmnSnssaiIsSet()) j["homePlmnSnssai"] = o.m_HomePlmnSnssai;
  if (o.iwkSnssaiIsSet()) j["iwkSnssai"] = o.m_IwkSnssai;
  if (o.subjectToHoIsSet()) j["subjectToHo"] = o.m_SubjectToHo;
}

void from_json(const nlohmann::json& j, N2SmInformation& o) {
  j.at("pduSessionId").get_to(o.m_PduSessionId);
  if (j.find("n2InfoContent") != j.end()) {
    j.at("n2InfoContent").get_to(o.m_N2InfoContent);
    o.m_N2InfoContentIsSet = true;
  }
  if (j.find("sNssai") != j.end()) {
    j.at("sNssai").get_to(o.m_SNssai);
    o.m_SNssaiIsSet = true;
  }
  if (j.find("homePlmnSnssai") != j.end()) {
    j.at("homePlmnSnssai").get_to(o.m_HomePlmnSnssai);
    o.m_HomePlmnSnssaiIsSet = true;
  }
  if (j.find("iwkSnssai") != j.end()) {
    j.at("iwkSnssai").get_to(o.m_IwkSnssai);
    o.m_IwkSnssaiIsSet = true;
  }
  if (j.find("subjectToHo") != j.end()) {
    j.at("subjectToHo").get_to(o.m_SubjectToHo);
    o.m_SubjectToHoIsSet = true;
  }
}

int32_t N2SmInformation::getPduSessionId() const {
  return m_PduSessionId;
}
void N2SmInformation::setPduSessionId(int32_t const value) {
  m_PduSessionId = value;
}
oai::model::amf::N2InfoContent N2SmInformation::getN2InfoContent() const {
  return m_N2InfoContent;
}
void N2SmInformation::setN2InfoContent(
    oai::model::amf::N2InfoContent const& value) {
  m_N2InfoContent      = value;
  m_N2InfoContentIsSet = true;
}
bool N2SmInformation::n2InfoContentIsSet() const {
  return m_N2InfoContentIsSet;
}
void N2SmInformation::unsetN2InfoContent() {
  m_N2InfoContentIsSet = false;
}
oai::model::common::Snssai N2SmInformation::getSNssai() const {
  return m_SNssai;
}
void N2SmInformation::setSNssai(oai::model::common::Snssai const& value) {
  m_SNssai      = value;
  m_SNssaiIsSet = true;
}
bool N2SmInformation::sNssaiIsSet() const {
  return m_SNssaiIsSet;
}
void N2SmInformation::unsetSNssai() {
  m_SNssaiIsSet = false;
}
oai::model::common::Snssai N2SmInformation::getHomePlmnSnssai() const {
  return m_HomePlmnSnssai;
}
void N2SmInformation::setHomePlmnSnssai(
    oai::model::common::Snssai const& value) {
  m_HomePlmnSnssai      = value;
  m_HomePlmnSnssaiIsSet = true;
}
bool N2SmInformation::homePlmnSnssaiIsSet() const {
  return m_HomePlmnSnssaiIsSet;
}
void N2SmInformation::unsetHomePlmnSnssai() {
  m_HomePlmnSnssaiIsSet = false;
}
oai::model::common::Snssai N2SmInformation::getIwkSnssai() const {
  return m_IwkSnssai;
}
void N2SmInformation::setIwkSnssai(oai::model::common::Snssai const& value) {
  m_IwkSnssai      = value;
  m_IwkSnssaiIsSet = true;
}
bool N2SmInformation::iwkSnssaiIsSet() const {
  return m_IwkSnssaiIsSet;
}
void N2SmInformation::unsetIwkSnssai() {
  m_IwkSnssaiIsSet = false;
}
bool N2SmInformation::isSubjectToHo() const {
  return m_SubjectToHo;
}
void N2SmInformation::setSubjectToHo(bool const value) {
  m_SubjectToHo      = value;
  m_SubjectToHoIsSet = true;
}
bool N2SmInformation::subjectToHoIsSet() const {
  return m_SubjectToHoIsSet;
}
void N2SmInformation::unsetSubjectToHo() {
  m_SubjectToHoIsSet = false;
}

}  // namespace oai::model::amf
