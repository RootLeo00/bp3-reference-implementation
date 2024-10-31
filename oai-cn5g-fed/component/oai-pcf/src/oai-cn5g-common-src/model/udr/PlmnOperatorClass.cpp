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

#include "PlmnOperatorClass.h"

namespace oai::udr::model {

PlmnOperatorClass::PlmnOperatorClass() {}

PlmnOperatorClass::~PlmnOperatorClass() {}

void PlmnOperatorClass::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const PlmnOperatorClass& o) {
  j                   = nlohmann::json();
  j["lcsClientClass"] = o.m_LcsClientClass;
  j["lcsClientIds"]   = o.m_LcsClientIds;
}

void from_json(const nlohmann::json& j, PlmnOperatorClass& o) {
  j.at("lcsClientClass").get_to(o.m_LcsClientClass);
  j.at("lcsClientIds").get_to(o.m_LcsClientIds);
}

LcsClientClass PlmnOperatorClass::getLcsClientClass() const {
  return m_LcsClientClass;
}
void PlmnOperatorClass::setLcsClientClass(LcsClientClass const& value) {
  m_LcsClientClass = value;
}
std::vector<std::string>& PlmnOperatorClass::getLcsClientIds() {
  return m_LcsClientIds;
}
void PlmnOperatorClass::setLcsClientIds(std::vector<std::string> const& value) {
  m_LcsClientIds = value;
}

}  // namespace oai::udr::model
