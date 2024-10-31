/**
 * Common Data Types
 * Common Data Types for Service Based Interfaces. © 2022, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.7
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "SnssaiExtension.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::common {

SnssaiExtension::SnssaiExtension() {
  m_SdRangesIsSet   = false;
  m_WildcardSd      = false;
  m_WildcardSdIsSet = false;
}

void SnssaiExtension::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool SnssaiExtension::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool SnssaiExtension::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "SnssaiExtension" : pathPrefix;

  if (sdRangesIsSet()) {
    const std::vector<oai::model::common::SdRange>& value = m_SdRanges;
    const std::string currentValuePath = _pathPrefix + ".sdRanges";

    if (value.size() < 1) {
      success = false;
      msg << currentValuePath << ": must have at least 1 elements;";
    }
    {  // Recursive validation of array elements
      const std::string oldValuePath = currentValuePath;
      int i                          = 0;
      for (const oai::model::common::SdRange& value : value) {
        const std::string currentValuePath =
            oldValuePath + "[" + std::to_string(i) + "]";

        success =
            value.validate(msg, currentValuePath + ".sdRanges") && success;

        i++;
      }
    }
  }

  return success;
}

bool SnssaiExtension::operator==(const SnssaiExtension& rhs) const {
  return

      ((!sdRangesIsSet() && !rhs.sdRangesIsSet()) ||
       (sdRangesIsSet() && rhs.sdRangesIsSet() &&
        getSdRanges() == rhs.getSdRanges())) &&

      ((!wildcardSdIsSet() && !rhs.wildcardSdIsSet()) ||
       (wildcardSdIsSet() && rhs.wildcardSdIsSet() &&
        isWildcardSd() == rhs.isWildcardSd()))

          ;
}

bool SnssaiExtension::operator!=(const SnssaiExtension& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const SnssaiExtension& o) {
  j = nlohmann::json();
  if (o.sdRangesIsSet() || !o.m_SdRanges.empty()) j["sdRanges"] = o.m_SdRanges;
  if (o.wildcardSdIsSet()) j["wildcardSd"] = o.m_WildcardSd;
}

void from_json(const nlohmann::json& j, SnssaiExtension& o) {
  if (j.find("sdRanges") != j.end()) {
    j.at("sdRanges").get_to(o.m_SdRanges);
    o.m_SdRangesIsSet = true;
  }
  if (j.find("wildcardSd") != j.end()) {
    j.at("wildcardSd").get_to(o.m_WildcardSd);
    o.m_WildcardSdIsSet = true;
  }
}

std::vector<oai::model::common::SdRange> SnssaiExtension::getSdRanges() const {
  return m_SdRanges;
}
void SnssaiExtension::setSdRanges(
    std::vector<oai::model::common::SdRange> const& value) {
  m_SdRanges      = value;
  m_SdRangesIsSet = true;
}
bool SnssaiExtension::sdRangesIsSet() const {
  return m_SdRangesIsSet;
}
void SnssaiExtension::unsetSdRanges() {
  m_SdRangesIsSet = false;
}
bool SnssaiExtension::isWildcardSd() const {
  return m_WildcardSd;
}
void SnssaiExtension::setWildcardSd(bool const value) {
  m_WildcardSd      = value;
  m_WildcardSdIsSet = true;
}
bool SnssaiExtension::wildcardSdIsSet() const {
  return m_WildcardSdIsSet;
}
void SnssaiExtension::unsetWildcardSd() {
  m_WildcardSdIsSet = false;
}

}  // namespace oai::model::common
