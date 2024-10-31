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

#include "PointUncertaintyCircle.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::lmf {

PointUncertaintyCircle::PointUncertaintyCircle() {
  m_Uncertainty = 0.0f;
}

void PointUncertaintyCircle::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool PointUncertaintyCircle::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool PointUncertaintyCircle::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "PointUncertaintyCircle" : pathPrefix;

  /* Uncertainty */ {
    const float& value                 = m_Uncertainty;
    const std::string currentValuePath = _pathPrefix + ".uncertainty";

    if (value < static_cast<float>(0)) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 0;";
    }
  }

  return success;
}

bool PointUncertaintyCircle::operator==(
    const PointUncertaintyCircle& rhs) const {
  return

      (getShape() == rhs.getShape()) &&

      (getPoint() == rhs.getPoint()) &&

      (getUncertainty() == rhs.getUncertainty())

          ;
}

bool PointUncertaintyCircle::operator!=(
    const PointUncertaintyCircle& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const PointUncertaintyCircle& o) {
  j                = nlohmann::json();
  j["shape"]       = o.m_Shape;
  j["point"]       = o.m_Point;
  j["uncertainty"] = o.m_Uncertainty;
}

void from_json(const nlohmann::json& j, PointUncertaintyCircle& o) {
  j.at("shape").get_to(o.m_Shape);
  j.at("point").get_to(o.m_Point);
  j.at("uncertainty").get_to(o.m_Uncertainty);
}

oai::model::lmf::SupportedGADShapes PointUncertaintyCircle::getShape() const {
  return m_Shape;
}
void PointUncertaintyCircle::setShape(
    oai::model::lmf::SupportedGADShapes const& value) {
  m_Shape = value;
}
oai::model::lmf::GeographicalCoordinates PointUncertaintyCircle::getPoint()
    const {
  return m_Point;
}
void PointUncertaintyCircle::setPoint(
    oai::model::lmf::GeographicalCoordinates const& value) {
  m_Point = value;
}
float PointUncertaintyCircle::getUncertainty() const {
  return m_Uncertainty;
}
void PointUncertaintyCircle::setUncertainty(float const value) {
  m_Uncertainty = value;
}

}  // namespace oai::model::lmf
