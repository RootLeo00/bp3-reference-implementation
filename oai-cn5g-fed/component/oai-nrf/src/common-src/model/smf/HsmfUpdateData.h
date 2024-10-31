/**
 * Nsmf_PDUSession
 * SMF PDU Session Service. © 2019, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * HsmfUpdateData.h
 *
 *
 */

#ifndef HsmfUpdateData_H_
#define HsmfUpdateData_H_

#include "MaReleaseIndication.h"
#include "RatType.h"
#include "RefToBinaryData.h"
#include <string>
#include "QosFlowNotifyItem.h"
#include "PlmnId.h"
#include "QosFlowItem.h"
#include "SecondaryRatUsageReport.h"
#include <vector>
#include "AccessType.h"
#include "RequestIndication.h"
#include "NgApCause.h"
#include "SecondaryRatUsageInfo.h"
#include "EpsInterworkingIndication.h"
#include "Cause.h"
#include "UserLocation.h"
#include "PduSessionNotifyItem.h"
#include "TunnelInfo.h"
#include <nlohmann/json.hpp>

namespace oai::model::smf {

/// <summary>
///
/// </summary>
class HsmfUpdateData {
 public:
  HsmfUpdateData();
  virtual ~HsmfUpdateData();

  void validate();

  /////////////////////////////////////////////
  /// HsmfUpdateData members

  /// <summary>
  ///
  /// </summary>
  RequestIndication getRequestIndication() const;
  void setRequestIndication(RequestIndication const& value);
  /// <summary>
  ///
  /// </summary>
  std::string getPei() const;
  void setPei(std::string const& value);
  bool peiIsSet() const;
  void unsetPei();
  /// <summary>
  ///
  /// </summary>
  TunnelInfo getVcnTunnelInfo() const;
  void setVcnTunnelInfo(TunnelInfo const& value);
  bool vcnTunnelInfoIsSet() const;
  void unsetVcnTunnelInfo();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::PlmnId getServingNetwork() const;
  void setServingNetwork(oai::model::common::PlmnId const& value);
  bool servingNetworkIsSet() const;
  void unsetServingNetwork();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::AccessType getAnType() const;
  void setAnType(oai::model::common::AccessType const& value);
  bool anTypeIsSet() const;
  void unsetAnType();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::AccessType getSecondAnType() const;
  void setSecondAnType(oai::model::common::AccessType const& value);
  bool secondAnTypeIsSet() const;
  void unsetSecondAnType();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::RatType getRatType() const;
  void setRatType(oai::model::common::RatType const& value);
  bool ratTypeIsSet() const;
  void unsetRatType();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::UserLocation getUeLocation() const;
  void setUeLocation(oai::model::common::UserLocation const& value);
  bool ueLocationIsSet() const;
  void unsetUeLocation();
  /// <summary>
  ///
  /// </summary>
  std::string getUeTimeZone() const;
  void setUeTimeZone(std::string const& value);
  bool ueTimeZoneIsSet() const;
  void unsetUeTimeZone();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::UserLocation getAddUeLocation() const;
  void setAddUeLocation(oai::model::common::UserLocation const& value);
  bool addUeLocationIsSet() const;
  void unsetAddUeLocation();
  /// <summary>
  ///
  /// </summary>
  bool isPauseCharging() const;
  void setPauseCharging(bool const value);
  bool pauseChargingIsSet() const;
  void unsetPauseCharging();
  /// <summary>
  ///
  /// </summary>
  int32_t getPti() const;
  void setPti(int32_t const value);
  bool ptiIsSet() const;
  void unsetPti();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::RefToBinaryData getN1SmInfoFromUe() const;
  void setN1SmInfoFromUe(oai::model::common::RefToBinaryData const& value);
  bool n1SmInfoFromUeIsSet() const;
  void unsetN1SmInfoFromUe();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::RefToBinaryData getUnknownN1SmInfo() const;
  void setUnknownN1SmInfo(oai::model::common::RefToBinaryData const& value);
  bool unknownN1SmInfoIsSet() const;
  void unsetUnknownN1SmInfo();
  /// <summary>
  ///
  /// </summary>
  std::vector<QosFlowItem>& getQosFlowsRelNotifyList();
  bool qosFlowsRelNotifyListIsSet() const;
  void unsetQosFlowsRelNotifyList();
  /// <summary>
  ///
  /// </summary>
  std::vector<QosFlowNotifyItem>& getQosFlowsNotifyList();
  bool qosFlowsNotifyListIsSet() const;
  void unsetQosFlowsNotifyList();
  /// <summary>
  ///
  /// </summary>
  std::vector<PduSessionNotifyItem>& getNotifyList();
  bool notifyListIsSet() const;
  void unsetNotifyList();
  /// <summary>
  ///
  /// </summary>
  std::vector<int32_t>& getEpsBearerId();
  bool epsBearerIdIsSet() const;
  void unsetEpsBearerId();
  /// <summary>
  ///
  /// </summary>
  bool isHoPreparationIndication() const;
  void setHoPreparationIndication(bool const value);
  bool hoPreparationIndicationIsSet() const;
  void unsetHoPreparationIndication();
  /// <summary>
  ///
  /// </summary>
  std::vector<int32_t>& getRevokeEbiList();
  bool revokeEbiListIsSet() const;
  void unsetRevokeEbiList();
  /// <summary>
  ///
  /// </summary>
  Cause getCause() const;
  void setCause(Cause const& value);
  bool causeIsSet() const;
  void unsetCause();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::NgApCause getNgApCause() const;
  void setNgApCause(oai::model::common::NgApCause const& value);
  bool ngApCauseIsSet() const;
  void unsetNgApCause();
  /// <summary>
  ///
  /// </summary>
  int32_t get5gMmCauseValue() const;
  void set5gMmCauseValue(int32_t const value);
  bool _5gMmCauseValueIsSet() const;
  void unset_5gMmCauseValue();
  /// <summary>
  ///
  /// </summary>
  bool isAlwaysOnRequested() const;
  void setAlwaysOnRequested(bool const value);
  bool alwaysOnRequestedIsSet() const;
  void unsetAlwaysOnRequested();
  /// <summary>
  ///
  /// </summary>
  EpsInterworkingIndication getEpsInterworkingInd() const;
  void setEpsInterworkingInd(EpsInterworkingIndication const& value);
  bool epsInterworkingIndIsSet() const;
  void unsetEpsInterworkingInd();
  /// <summary>
  ///
  /// </summary>
  std::vector<oai::model::common::SecondaryRatUsageReport>&
  getSecondaryRatUsageReport();
  bool secondaryRatUsageReportIsSet() const;
  void unsetSecondaryRatUsageReport();
  /// <summary>
  ///
  /// </summary>
  std::vector<oai::model::common::SecondaryRatUsageInfo>&
  getSecondaryRatUsageInfo();
  bool secondaryRatUsageInfoIsSet() const;
  void unsetSecondaryRatUsageInfo();
  /// <summary>
  ///
  /// </summary>
  bool isAnTypeCanBeChanged() const;
  void setAnTypeCanBeChanged(bool const value);
  bool anTypeCanBeChangedIsSet() const;
  void unsetAnTypeCanBeChanged();
  /// <summary>
  ///
  /// </summary>
  MaReleaseIndication getMaReleaseInd() const;
  void setMaReleaseInd(MaReleaseIndication const& value);
  bool maReleaseIndIsSet() const;
  void unsetMaReleaseInd();

  friend void to_json(nlohmann::json& j, const HsmfUpdateData& o);
  friend void from_json(const nlohmann::json& j, HsmfUpdateData& o);

 protected:
  RequestIndication m_RequestIndication;

  std::string m_Pei;
  bool m_PeiIsSet;
  TunnelInfo m_VcnTunnelInfo;
  bool m_VcnTunnelInfoIsSet;
  oai::model::common::PlmnId m_ServingNetwork;
  bool m_ServingNetworkIsSet;
  oai::model::common::AccessType m_AnType;
  bool m_AnTypeIsSet;
  oai::model::common::AccessType m_SecondAnType;
  bool m_SecondAnTypeIsSet;
  oai::model::common::RatType m_RatType;
  bool m_RatTypeIsSet;
  oai::model::common::UserLocation m_UeLocation;
  bool m_UeLocationIsSet;
  std::string m_UeTimeZone;
  bool m_UeTimeZoneIsSet;
  oai::model::common::UserLocation m_AddUeLocation;
  bool m_AddUeLocationIsSet;
  bool m_PauseCharging;
  bool m_PauseChargingIsSet;
  int32_t m_Pti;
  bool m_PtiIsSet;
  oai::model::common::RefToBinaryData m_N1SmInfoFromUe;
  bool m_N1SmInfoFromUeIsSet;
  oai::model::common::RefToBinaryData m_UnknownN1SmInfo;
  bool m_UnknownN1SmInfoIsSet;
  std::vector<QosFlowItem> m_QosFlowsRelNotifyList;
  bool m_QosFlowsRelNotifyListIsSet;
  std::vector<QosFlowNotifyItem> m_QosFlowsNotifyList;
  bool m_QosFlowsNotifyListIsSet;
  std::vector<PduSessionNotifyItem> m_NotifyList;
  bool m_NotifyListIsSet;
  std::vector<int32_t> m_EpsBearerId;
  bool m_EpsBearerIdIsSet;
  bool m_HoPreparationIndication;
  bool m_HoPreparationIndicationIsSet;
  std::vector<int32_t> m_RevokeEbiList;
  bool m_RevokeEbiListIsSet;
  Cause m_Cause;
  bool m_CauseIsSet;
  oai::model::common::NgApCause m_NgApCause;
  bool m_NgApCauseIsSet;
  int32_t m__5gMmCauseValue;
  bool m__5gMmCauseValueIsSet;
  bool m_AlwaysOnRequested;
  bool m_AlwaysOnRequestedIsSet;
  EpsInterworkingIndication m_EpsInterworkingInd;
  bool m_EpsInterworkingIndIsSet;
  std::vector<oai::model::common::SecondaryRatUsageReport>
      m_SecondaryRatUsageReport;
  bool m_SecondaryRatUsageReportIsSet;
  std::vector<oai::model::common::SecondaryRatUsageInfo>
      m_SecondaryRatUsageInfo;
  bool m_SecondaryRatUsageInfoIsSet;
  bool m_AnTypeCanBeChanged;
  bool m_AnTypeCanBeChangedIsSet;
  MaReleaseIndication m_MaReleaseInd;
  bool m_MaReleaseIndIsSet;
};

}  // namespace oai::model::smf

#endif /* HsmfUpdateData_H_ */
