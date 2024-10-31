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

#include "AvImsGbaEapAka.h"

namespace oai::model::udm {

AvImsGbaEapAka::AvImsGbaEapAka() {
  m_Rand = "";
  m_Xres = "";
  m_Autn = "";
  m_Ck   = "";
  m_Ik   = "";
}

AvImsGbaEapAka::~AvImsGbaEapAka() {}

void AvImsGbaEapAka::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const AvImsGbaEapAka& o) {
  j           = nlohmann::json();
  j["avType"] = o.m_AvType;
  j["rand"]   = o.m_Rand;
  j["xres"]   = o.m_Xres;
  j["autn"]   = o.m_Autn;
  j["ck"]     = o.m_Ck;
  j["ik"]     = o.m_Ik;
}

void from_json(const nlohmann::json& j, AvImsGbaEapAka& o) {
  j.at("avType").get_to(o.m_AvType);
  j.at("rand").get_to(o.m_Rand);
  j.at("xres").get_to(o.m_Xres);
  j.at("autn").get_to(o.m_Autn);
  j.at("ck").get_to(o.m_Ck);
  j.at("ik").get_to(o.m_Ik);
}

HssAvType AvImsGbaEapAka::getAvType() const {
  return m_AvType;
}
void AvImsGbaEapAka::setAvType(HssAvType const& value) {
  m_AvType = value;
}
std::string AvImsGbaEapAka::getRand() const {
  return m_Rand;
}
void AvImsGbaEapAka::setRand(std::string const& value) {
  m_Rand = value;
}
std::string AvImsGbaEapAka::getXres() const {
  return m_Xres;
}
void AvImsGbaEapAka::setXres(std::string const& value) {
  m_Xres = value;
}
std::string AvImsGbaEapAka::getAutn() const {
  return m_Autn;
}
void AvImsGbaEapAka::setAutn(std::string const& value) {
  m_Autn = value;
}
std::string AvImsGbaEapAka::getCk() const {
  return m_Ck;
}
void AvImsGbaEapAka::setCk(std::string const& value) {
  m_Ck = value;
}
std::string AvImsGbaEapAka::getIk() const {
  return m_Ik;
}
void AvImsGbaEapAka::setIk(std::string const& value) {
  m_Ik = value;
}

}  // namespace oai::model::udm
