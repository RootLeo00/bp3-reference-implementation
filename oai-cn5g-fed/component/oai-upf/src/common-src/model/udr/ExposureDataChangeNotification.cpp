/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this
 * file except in compliance with the License. You may obtain a copy of the
 * License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */
/**
 * Nudr_DataRepository API OpenAPI file
 * Unified Data Repository Service. © 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.1.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "ExposureDataChangeNotification.h"

namespace oai::udr::model {

ExposureDataChangeNotification::ExposureDataChangeNotification() {
  m_UeId                          = "";
  m_UeIdIsSet                     = false;
  m_AccessAndMobilityDataIsSet    = false;
  m_PduSessionManagementDataIsSet = false;
  m_DelResourcesIsSet             = false;
}

ExposureDataChangeNotification::~ExposureDataChangeNotification() {}

void ExposureDataChangeNotification::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const ExposureDataChangeNotification& o) {
  j = nlohmann::json();
  if (o.ueIdIsSet()) j["ueId"] = o.m_UeId;
  if (o.accessAndMobilityDataIsSet())
    j["accessAndMobilityData"] = o.m_AccessAndMobilityData;
  if (o.pduSessionManagementDataIsSet() ||
      !o.m_PduSessionManagementData.empty())
    j["pduSessionManagementData"] = o.m_PduSessionManagementData;
  if (o.delResourcesIsSet() || !o.m_DelResources.empty())
    j["delResources"] = o.m_DelResources;
}

void from_json(const nlohmann::json& j, ExposureDataChangeNotification& o) {
  if (j.find("ueId") != j.end()) {
    j.at("ueId").get_to(o.m_UeId);
    o.m_UeIdIsSet = true;
  }
  if (j.find("accessAndMobilityData") != j.end()) {
    j.at("accessAndMobilityData").get_to(o.m_AccessAndMobilityData);
    o.m_AccessAndMobilityDataIsSet = true;
  }
  if (j.find("pduSessionManagementData") != j.end()) {
    j.at("pduSessionManagementData").get_to(o.m_PduSessionManagementData);
    o.m_PduSessionManagementDataIsSet = true;
  }
  if (j.find("delResources") != j.end()) {
    j.at("delResources").get_to(o.m_DelResources);
    o.m_DelResourcesIsSet = true;
  }
}

std::string ExposureDataChangeNotification::getUeId() const {
  return m_UeId;
}
void ExposureDataChangeNotification::setUeId(std::string const& value) {
  m_UeId      = value;
  m_UeIdIsSet = true;
}
bool ExposureDataChangeNotification::ueIdIsSet() const {
  return m_UeIdIsSet;
}
void ExposureDataChangeNotification::unsetUeId() {
  m_UeIdIsSet = false;
}
AccessAndMobilityData ExposureDataChangeNotification::getAccessAndMobilityData()
    const {
  return m_AccessAndMobilityData;
}
void ExposureDataChangeNotification::setAccessAndMobilityData(
    AccessAndMobilityData const& value) {
  m_AccessAndMobilityData      = value;
  m_AccessAndMobilityDataIsSet = true;
}
bool ExposureDataChangeNotification::accessAndMobilityDataIsSet() const {
  return m_AccessAndMobilityDataIsSet;
}
void ExposureDataChangeNotification::unsetAccessAndMobilityData() {
  m_AccessAndMobilityDataIsSet = false;
}
std::vector<PduSessionManagementData>&
ExposureDataChangeNotification::getPduSessionManagementData() {
  return m_PduSessionManagementData;
}
void ExposureDataChangeNotification::setPduSessionManagementData(
    std::vector<PduSessionManagementData> const& value) {
  m_PduSessionManagementData      = value;
  m_PduSessionManagementDataIsSet = true;
}
bool ExposureDataChangeNotification::pduSessionManagementDataIsSet() const {
  return m_PduSessionManagementDataIsSet;
}
void ExposureDataChangeNotification::unsetPduSessionManagementData() {
  m_PduSessionManagementDataIsSet = false;
}
std::vector<std::string>& ExposureDataChangeNotification::getDelResources() {
  return m_DelResources;
}
void ExposureDataChangeNotification::setDelResources(
    std::vector<std::string> const& value) {
  m_DelResources      = value;
  m_DelResourcesIsSet = true;
}
bool ExposureDataChangeNotification::delResourcesIsSet() const {
  return m_DelResourcesIsSet;
}
void ExposureDataChangeNotification::unsetDelResources() {
  m_DelResourcesIsSet = false;
}

}  // namespace oai::udr::model
