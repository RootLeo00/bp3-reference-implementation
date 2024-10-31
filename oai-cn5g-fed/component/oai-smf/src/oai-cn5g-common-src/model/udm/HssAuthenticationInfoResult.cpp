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
 * Nudm_UEAU
 * UDM UE Authentication Service. � 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "HssAuthenticationInfoResult.h"

namespace oai::model::udm {

HssAuthenticationInfoResult::HssAuthenticationInfoResult() {
  m_SupportedFeatures      = "";
  m_SupportedFeaturesIsSet = false;
}

HssAuthenticationInfoResult::~HssAuthenticationInfoResult() {}

void HssAuthenticationInfoResult::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const HssAuthenticationInfoResult& o) {
  j = nlohmann::json();
  if (o.supportedFeaturesIsSet())
    j["supportedFeatures"] = o.m_SupportedFeatures;
  j["hssAuthenticationVectors"] = o.m_HssAuthenticationVectors;
}

void from_json(const nlohmann::json& j, HssAuthenticationInfoResult& o) {
  if (j.find("supportedFeatures") != j.end()) {
    j.at("supportedFeatures").get_to(o.m_SupportedFeatures);
    o.m_SupportedFeaturesIsSet = true;
  }
  j.at("hssAuthenticationVectors").get_to(o.m_HssAuthenticationVectors);
}

std::string HssAuthenticationInfoResult::getSupportedFeatures() const {
  return m_SupportedFeatures;
}
void HssAuthenticationInfoResult::setSupportedFeatures(
    std::string const& value) {
  m_SupportedFeatures      = value;
  m_SupportedFeaturesIsSet = true;
}
bool HssAuthenticationInfoResult::supportedFeaturesIsSet() const {
  return m_SupportedFeaturesIsSet;
}
void HssAuthenticationInfoResult::unsetSupportedFeatures() {
  m_SupportedFeaturesIsSet = false;
}
HssAuthenticationVectors
HssAuthenticationInfoResult::getHssAuthenticationVectors() const {
  return m_HssAuthenticationVectors;
}
void HssAuthenticationInfoResult::setHssAuthenticationVectors(
    HssAuthenticationVectors const& value) {
  m_HssAuthenticationVectors = value;
}

}  // namespace oai::model::udm
