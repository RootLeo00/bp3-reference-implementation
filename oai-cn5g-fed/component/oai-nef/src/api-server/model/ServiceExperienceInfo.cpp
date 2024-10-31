/**
 * Nnef_EventExposure
 * NEF Event Exposure Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.5
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "ServiceExperienceInfo.h"

#include <sstream>

#include "Helpers.h"

namespace oai::nef::model {

ServiceExperienceInfo::ServiceExperienceInfo() {
  m_AppId      = "";
  m_AppIdIsSet = false;
  m_SupisIsSet = false;
}

void ServiceExperienceInfo::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::nef::helpers::ValidationException(msg.str());
  }
}

bool ServiceExperienceInfo::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool ServiceExperienceInfo::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "ServiceExperienceInfo" : pathPrefix;

  if (supisIsSet()) {
    const std::vector<std::string>& value = m_Supis;
    const std::string currentValuePath    = _pathPrefix + ".supis";

    if (value.size() < 1) {
      success = false;
      msg << currentValuePath << ": must have at least 1 elements;";
    }
    {  // Recursive validation of array elements
      const std::string oldValuePath = currentValuePath;
      int i                          = 0;
      for (const std::string& value : value) {
        const std::string currentValuePath =
            oldValuePath + "[" + std::to_string(i) + "]";

        i++;
      }
    }
  }

  /* SvcExpPerFlows */ {
    const std::vector<ServiceExperienceInfoPerFlow>& value = m_SvcExpPerFlows;
    const std::string currentValuePath = _pathPrefix + ".svcExpPerFlows";

    if (value.size() < 1) {
      success = false;
      msg << currentValuePath << ": must have at least 1 elements;";
    }
    {  // Recursive validation of array elements
      const std::string oldValuePath = currentValuePath;
      int i                          = 0;
      for (const ServiceExperienceInfoPerFlow& value : value) {
        const std::string currentValuePath =
            oldValuePath + "[" + std::to_string(i) + "]";

        success = value.validate(msg, currentValuePath + ".svcExpPerFlows") &&
                  success;

        i++;
      }
    }
  }

  return success;
}

bool ServiceExperienceInfo::operator==(const ServiceExperienceInfo& rhs) const {
  return

      ((!appIdIsSet() && !rhs.appIdIsSet()) ||
       (appIdIsSet() && rhs.appIdIsSet() && getAppId() == rhs.getAppId())) &&

      ((!supisIsSet() && !rhs.supisIsSet()) ||
       (supisIsSet() && rhs.supisIsSet() && getSupis() == rhs.getSupis())) &&

      (getSvcExpPerFlows() == rhs.getSvcExpPerFlows())

          ;
}

bool ServiceExperienceInfo::operator!=(const ServiceExperienceInfo& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const ServiceExperienceInfo& o) {
  j = nlohmann::json();
  if (o.appIdIsSet()) j["appId"] = o.m_AppId;
  if (o.supisIsSet() || !o.m_Supis.empty()) j["supis"] = o.m_Supis;
  j["svcExpPerFlows"] = o.m_SvcExpPerFlows;
}

void from_json(const nlohmann::json& j, ServiceExperienceInfo& o) {
  if (j.find("appId") != j.end()) {
    j.at("appId").get_to(o.m_AppId);
    o.m_AppIdIsSet = true;
  }
  if (j.find("supis") != j.end()) {
    j.at("supis").get_to(o.m_Supis);
    o.m_SupisIsSet = true;
  }
  j.at("svcExpPerFlows").get_to(o.m_SvcExpPerFlows);
}

std::string ServiceExperienceInfo::getAppId() const {
  return m_AppId;
}
void ServiceExperienceInfo::setAppId(std::string const& value) {
  m_AppId      = value;
  m_AppIdIsSet = true;
}
bool ServiceExperienceInfo::appIdIsSet() const {
  return m_AppIdIsSet;
}
void ServiceExperienceInfo::unsetAppId() {
  m_AppIdIsSet = false;
}
std::vector<std::string> ServiceExperienceInfo::getSupis() const {
  return m_Supis;
}
void ServiceExperienceInfo::setSupis(std::vector<std::string> const& value) {
  m_Supis      = value;
  m_SupisIsSet = true;
}
bool ServiceExperienceInfo::supisIsSet() const {
  return m_SupisIsSet;
}
void ServiceExperienceInfo::unsetSupis() {
  m_SupisIsSet = false;
}
std::vector<ServiceExperienceInfoPerFlow>
ServiceExperienceInfo::getSvcExpPerFlows() const {
  return m_SvcExpPerFlows;
}
void ServiceExperienceInfo::setSvcExpPerFlows(
    std::vector<ServiceExperienceInfoPerFlow> const& value) {
  m_SvcExpPerFlows = value;
}

}  // namespace oai::nef::model
