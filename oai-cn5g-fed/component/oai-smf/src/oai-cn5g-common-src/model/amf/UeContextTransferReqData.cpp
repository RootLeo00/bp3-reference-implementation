/**
 * Namf_Communication
 * AMF Communication Service © 2019, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "UeContextTransferReqData.h"

namespace oai::model::amf {

UeContextTransferReqData::UeContextTransferReqData() {
  m_PlmnIdIsSet            = false;
  m_RegRequestIsSet        = false;
  m_SupportedFeatures      = "";
  m_SupportedFeaturesIsSet = false;
}

UeContextTransferReqData::~UeContextTransferReqData() {}

void UeContextTransferReqData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const UeContextTransferReqData& o) {
  j               = nlohmann::json();
  j["reason"]     = o.m_Reason;
  j["accessType"] = o.m_AccessType;
  if (o.plmnIdIsSet()) j["plmnId"] = o.m_PlmnId;
  if (o.regRequestIsSet()) j["regRequest"] = o.m_RegRequest;
  if (o.supportedFeaturesIsSet())
    j["supportedFeatures"] = o.m_SupportedFeatures;
}

void from_json(const nlohmann::json& j, UeContextTransferReqData& o) {
  j.at("reason").get_to(o.m_Reason);
  j.at("accessType").get_to(o.m_AccessType);
  if (j.find("plmnId") != j.end()) {
    j.at("plmnId").get_to(o.m_PlmnId);
    o.m_PlmnIdIsSet = true;
  }
  if (j.find("regRequest") != j.end()) {
    j.at("regRequest").get_to(o.m_RegRequest);
    o.m_RegRequestIsSet = true;
  }
  if (j.find("supportedFeatures") != j.end()) {
    j.at("supportedFeatures").get_to(o.m_SupportedFeatures);
    o.m_SupportedFeaturesIsSet = true;
  }
}

TransferReason UeContextTransferReqData::getReason() const {
  return m_Reason;
}
void UeContextTransferReqData::setReason(TransferReason const& value) {
  m_Reason = value;
}
oai::model::common::AccessType UeContextTransferReqData::getAccessType() const {
  return m_AccessType;
}
void UeContextTransferReqData::setAccessType(
    oai::model::common::AccessType const& value) {
  m_AccessType = value;
}
oai::model::common::PlmnId UeContextTransferReqData::getPlmnId() const {
  return m_PlmnId;
}
void UeContextTransferReqData::setPlmnId(
    oai::model::common::PlmnId const& value) {
  m_PlmnId      = value;
  m_PlmnIdIsSet = true;
}
bool UeContextTransferReqData::plmnIdIsSet() const {
  return m_PlmnIdIsSet;
}
void UeContextTransferReqData::unsetPlmnId() {
  m_PlmnIdIsSet = false;
}
N1MessageContainer UeContextTransferReqData::getRegRequest() const {
  return m_RegRequest;
}
void UeContextTransferReqData::setRegRequest(N1MessageContainer const& value) {
  m_RegRequest      = value;
  m_RegRequestIsSet = true;
}
bool UeContextTransferReqData::regRequestIsSet() const {
  return m_RegRequestIsSet;
}
void UeContextTransferReqData::unsetRegRequest() {
  m_RegRequestIsSet = false;
}
std::string UeContextTransferReqData::getSupportedFeatures() const {
  return m_SupportedFeatures;
}
void UeContextTransferReqData::setSupportedFeatures(std::string const& value) {
  m_SupportedFeatures      = value;
  m_SupportedFeaturesIsSet = true;
}
bool UeContextTransferReqData::supportedFeaturesIsSet() const {
  return m_SupportedFeaturesIsSet;
}
void UeContextTransferReqData::unsetSupportedFeatures() {
  m_SupportedFeaturesIsSet = false;
}

}  // namespace oai::model::amf
