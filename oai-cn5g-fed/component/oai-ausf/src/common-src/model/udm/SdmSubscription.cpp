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
 * Nudm_SDM
 * Nudm Subscriber Data Management Service. � 2019, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "SdmSubscription.h"

namespace oai::model::udm {

SdmSubscription::SdmSubscription() {
  m_NfInstanceId             = "";
  m_ImplicitUnsubscribe      = false;
  m_ImplicitUnsubscribeIsSet = false;
  m_Expires                  = "";
  m_ExpiresIsSet             = false;
  m_CallbackReference        = "";
  m_AmfServiceNameIsSet      = false;
  m_SingleNssaiIsSet         = false;
  m_Dnn                      = "";
  m_DnnIsSet                 = false;
  m_SubscriptionId           = "";
  m_SubscriptionIdIsSet      = false;
  m_PlmnIdIsSet              = false;
}

SdmSubscription::~SdmSubscription() {}

void SdmSubscription::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const SdmSubscription& o) {
  j                 = nlohmann::json();
  j["nfInstanceId"] = o.m_NfInstanceId;
  if (o.implicitUnsubscribeIsSet())
    j["implicitUnsubscribe"] = o.m_ImplicitUnsubscribe;
  if (o.expiresIsSet()) j["expires"] = o.m_Expires;
  j["callbackReference"] = o.m_CallbackReference;
  if (o.amfServiceNameIsSet()) j["amfServiceName"] = o.m_AmfServiceName;
  j["monitoredResourceUris"] = o.m_MonitoredResourceUris;
  if (o.singleNssaiIsSet()) j["singleNssai"] = o.m_SingleNssai;
  if (o.dnnIsSet()) j["dnn"] = o.m_Dnn;
  if (o.subscriptionIdIsSet()) j["subscriptionId"] = o.m_SubscriptionId;
  if (o.plmnIdIsSet()) j["plmnId"] = o.m_PlmnId;
}

void from_json(const nlohmann::json& j, SdmSubscription& o) {
  j.at("nfInstanceId").get_to(o.m_NfInstanceId);
  if (j.find("implicitUnsubscribe") != j.end()) {
    j.at("implicitUnsubscribe").get_to(o.m_ImplicitUnsubscribe);
    o.m_ImplicitUnsubscribeIsSet = true;
  }
  if (j.find("expires") != j.end()) {
    j.at("expires").get_to(o.m_Expires);
    o.m_ExpiresIsSet = true;
  }
  j.at("callbackReference").get_to(o.m_CallbackReference);
  if (j.find("amfServiceName") != j.end()) {
    j.at("amfServiceName").get_to(o.m_AmfServiceName);
    o.m_AmfServiceNameIsSet = true;
  }
  j.at("monitoredResourceUris").get_to(o.m_MonitoredResourceUris);
  if (j.find("singleNssai") != j.end()) {
    j.at("singleNssai").get_to(o.m_SingleNssai);
    o.m_SingleNssaiIsSet = true;
  }
  if (j.find("dnn") != j.end()) {
    j.at("dnn").get_to(o.m_Dnn);
    o.m_DnnIsSet = true;
  }
  if (j.find("subscriptionId") != j.end()) {
    j.at("subscriptionId").get_to(o.m_SubscriptionId);
    o.m_SubscriptionIdIsSet = true;
  }
  if (j.find("plmnId") != j.end()) {
    j.at("plmnId").get_to(o.m_PlmnId);
    o.m_PlmnIdIsSet = true;
  }
}

std::string SdmSubscription::getNfInstanceId() const {
  return m_NfInstanceId;
}
void SdmSubscription::setNfInstanceId(std::string const& value) {
  m_NfInstanceId = value;
}
bool SdmSubscription::isImplicitUnsubscribe() const {
  return m_ImplicitUnsubscribe;
}
void SdmSubscription::setImplicitUnsubscribe(bool const value) {
  m_ImplicitUnsubscribe      = value;
  m_ImplicitUnsubscribeIsSet = true;
}
bool SdmSubscription::implicitUnsubscribeIsSet() const {
  return m_ImplicitUnsubscribeIsSet;
}
void SdmSubscription::unsetImplicitUnsubscribe() {
  m_ImplicitUnsubscribeIsSet = false;
}
std::string SdmSubscription::getExpires() const {
  return m_Expires;
}
void SdmSubscription::setExpires(std::string const& value) {
  m_Expires      = value;
  m_ExpiresIsSet = true;
}
bool SdmSubscription::expiresIsSet() const {
  return m_ExpiresIsSet;
}
void SdmSubscription::unsetExpires() {
  m_ExpiresIsSet = false;
}
std::string SdmSubscription::getCallbackReference() const {
  return m_CallbackReference;
}
void SdmSubscription::setCallbackReference(std::string const& value) {
  m_CallbackReference = value;
}
oai::model::nrf::ServiceName SdmSubscription::getAmfServiceName() const {
  return m_AmfServiceName;
}
void SdmSubscription::setAmfServiceName(
    oai::model::nrf::ServiceName const& value) {
  m_AmfServiceName      = value;
  m_AmfServiceNameIsSet = true;
}
bool SdmSubscription::amfServiceNameIsSet() const {
  return m_AmfServiceNameIsSet;
}
void SdmSubscription::unsetAmfServiceName() {
  m_AmfServiceNameIsSet = false;
}
std::vector<std::string>& SdmSubscription::getMonitoredResourceUris() {
  return m_MonitoredResourceUris;
}
oai::model::common::Snssai SdmSubscription::getSingleNssai() const {
  return m_SingleNssai;
}
void SdmSubscription::setSingleNssai(oai::model::common::Snssai const& value) {
  m_SingleNssai      = value;
  m_SingleNssaiIsSet = true;
}
bool SdmSubscription::singleNssaiIsSet() const {
  return m_SingleNssaiIsSet;
}
void SdmSubscription::unsetSingleNssai() {
  m_SingleNssaiIsSet = false;
}
std::string SdmSubscription::getDnn() const {
  return m_Dnn;
}
void SdmSubscription::setDnn(std::string const& value) {
  m_Dnn      = value;
  m_DnnIsSet = true;
}
bool SdmSubscription::dnnIsSet() const {
  return m_DnnIsSet;
}
void SdmSubscription::unsetDnn() {
  m_DnnIsSet = false;
}
std::string SdmSubscription::getSubscriptionId() const {
  return m_SubscriptionId;
}
void SdmSubscription::setSubscriptionId(std::string const& value) {
  m_SubscriptionId      = value;
  m_SubscriptionIdIsSet = true;
}
bool SdmSubscription::subscriptionIdIsSet() const {
  return m_SubscriptionIdIsSet;
}
void SdmSubscription::unsetSubscriptionId() {
  m_SubscriptionIdIsSet = false;
}
oai::model::common::PlmnId SdmSubscription::getPlmnId() const {
  return m_PlmnId;
}
void SdmSubscription::setPlmnId(oai::model::common::PlmnId const& value) {
  m_PlmnId      = value;
  m_PlmnIdIsSet = true;
}
bool SdmSubscription::plmnIdIsSet() const {
  return m_PlmnIdIsSet;
}
void SdmSubscription::unsetPlmnId() {
  m_PlmnIdIsSet = false;
}

}  // namespace oai::model::udm
