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

#include "Polygon_allOf.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::lmf {

Polygon_allOf::Polygon_allOf() {}

void Polygon_allOf::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool Polygon_allOf::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool Polygon_allOf::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "Polygon_allOf" : pathPrefix;

  /* PointList */ {
    const std::vector<oai::model::lmf::GeographicalCoordinates>& value =
        m_PointList;
    const std::string currentValuePath = _pathPrefix + ".pointList";

    if (value.size() < 3) {
      success = false;
      msg << currentValuePath << ": must have at least 3 elements;";
    }
    if (value.size() > 15) {
      success = false;
      msg << currentValuePath << ": must have at most 15 elements;";
    }
    {  // Recursive validation of array elements
      const std::string oldValuePath = currentValuePath;
      int i                          = 0;
      for (const oai::model::lmf::GeographicalCoordinates& value : value) {
        const std::string currentValuePath =
            oldValuePath + "[" + std::to_string(i) + "]";

        success =
            value.validate(msg, currentValuePath + ".pointList") && success;

        i++;
      }
    }
  }

  return success;
}

bool Polygon_allOf::operator==(const Polygon_allOf& rhs) const {
  return

      (getPointList() == rhs.getPointList())

          ;
}

bool Polygon_allOf::operator!=(const Polygon_allOf& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const Polygon_allOf& o) {
  j              = nlohmann::json();
  j["pointList"] = o.m_PointList;
}

void from_json(const nlohmann::json& j, Polygon_allOf& o) {
  j.at("pointList").get_to(o.m_PointList);
}

std::vector<oai::model::lmf::GeographicalCoordinates>
Polygon_allOf::getPointList() const {
  return m_PointList;
}
void Polygon_allOf::setPointList(
    std::vector<oai::model::lmf::GeographicalCoordinates> const& value) {
  m_PointList = value;
}

}  // namespace oai::model::lmf
