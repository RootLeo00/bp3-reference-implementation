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
/*
 * SubscriptionDataSets.h
 *
 *
 */

#ifndef SubscriptionDataSets_H_
#define SubscriptionDataSets_H_

#include <nlohmann/json.hpp>
#include <vector>

#include "AccessAndMobilitySubscriptionData.h"
#include "LcsBroadcastAssistanceTypesData.h"
#include "LcsMoData.h"
#include "LcsPrivacyData.h"
#include "SessionManagementSubscriptionData.h"
#include "SmfSelectionSubscriptionData.h"
#include "SmsManagementSubscriptionData.h"
#include "SmsSubscriptionData.h"
#include "TraceData.h"
#include "UeContextInAmfData.h"
#include "UeContextInSmfData.h"
#include "UeContextInSmsfData.h"
#include "V2xSubscriptionData.h"

namespace oai::udr::model {

/// <summary>
///
/// </summary>
class SubscriptionDataSets {
 public:
  SubscriptionDataSets();
  virtual ~SubscriptionDataSets();

  void validate();

  /////////////////////////////////////////////
  /// SubscriptionDataSets members

  /// <summary>
  ///
  /// </summary>
  AccessAndMobilitySubscriptionData getAmData() const;
  void setAmData(AccessAndMobilitySubscriptionData const& value);
  bool amDataIsSet() const;
  void unsetAmData();
  /// <summary>
  ///
  /// </summary>
  SmfSelectionSubscriptionData getSmfSelData() const;
  void setSmfSelData(SmfSelectionSubscriptionData const& value);
  bool smfSelDataIsSet() const;
  void unsetSmfSelData();
  /// <summary>
  ///
  /// </summary>
  UeContextInAmfData getUecAmfData() const;
  void setUecAmfData(UeContextInAmfData const& value);
  bool uecAmfDataIsSet() const;
  void unsetUecAmfData();
  /// <summary>
  ///
  /// </summary>
  UeContextInSmfData getUecSmfData() const;
  void setUecSmfData(UeContextInSmfData const& value);
  bool uecSmfDataIsSet() const;
  void unsetUecSmfData();
  /// <summary>
  ///
  /// </summary>
  UeContextInSmsfData getUecSmsfData() const;
  void setUecSmsfData(UeContextInSmsfData const& value);
  bool uecSmsfDataIsSet() const;
  void unsetUecSmsfData();
  /// <summary>
  ///
  /// </summary>
  SmsSubscriptionData getSmsSubsData() const;
  void setSmsSubsData(SmsSubscriptionData const& value);
  bool smsSubsDataIsSet() const;
  void unsetSmsSubsData();
  /// <summary>
  ///
  /// </summary>
  std::vector<SessionManagementSubscriptionData>& getSmData();
  void setSmData(std::vector<SessionManagementSubscriptionData> const& value);
  bool smDataIsSet() const;
  void unsetSmData();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::TraceData getTraceData() const;
  void setTraceData(oai::model::common::TraceData const& value);
  bool traceDataIsSet() const;
  void unsetTraceData();
  /// <summary>
  ///
  /// </summary>
  SmsManagementSubscriptionData getSmsMngData() const;
  void setSmsMngData(SmsManagementSubscriptionData const& value);
  bool smsMngDataIsSet() const;
  void unsetSmsMngData();
  /// <summary>
  ///
  /// </summary>
  LcsPrivacyData getLcsPrivacyData() const;
  void setLcsPrivacyData(LcsPrivacyData const& value);
  bool lcsPrivacyDataIsSet() const;
  void unsetLcsPrivacyData();
  /// <summary>
  ///
  /// </summary>
  LcsMoData getLcsMoData() const;
  void setLcsMoData(LcsMoData const& value);
  bool lcsMoDataIsSet() const;
  void unsetLcsMoData();
  /// <summary>
  ///
  /// </summary>
  V2xSubscriptionData getV2xData() const;
  void setV2xData(V2xSubscriptionData const& value);
  bool v2xDataIsSet() const;
  void unsetV2xData();
  /// <summary>
  ///
  /// </summary>
  LcsBroadcastAssistanceTypesData getLcsBroadcastAssistanceTypesData() const;
  void setLcsBroadcastAssistanceTypesData(
      LcsBroadcastAssistanceTypesData const& value);
  bool lcsBroadcastAssistanceTypesDataIsSet() const;
  void unsetLcsBroadcastAssistanceTypesData();

  friend void to_json(nlohmann::json& j, const SubscriptionDataSets& o);
  friend void from_json(const nlohmann::json& j, SubscriptionDataSets& o);

 protected:
  AccessAndMobilitySubscriptionData m_AmData;
  bool m_AmDataIsSet;
  SmfSelectionSubscriptionData m_SmfSelData;
  bool m_SmfSelDataIsSet;
  UeContextInAmfData m_UecAmfData;
  bool m_UecAmfDataIsSet;
  UeContextInSmfData m_UecSmfData;
  bool m_UecSmfDataIsSet;
  UeContextInSmsfData m_UecSmsfData;
  bool m_UecSmsfDataIsSet;
  SmsSubscriptionData m_SmsSubsData;
  bool m_SmsSubsDataIsSet;
  std::vector<SessionManagementSubscriptionData> m_SmData;
  bool m_SmDataIsSet;
  oai::model::common::TraceData m_TraceData;
  bool m_TraceDataIsSet;
  SmsManagementSubscriptionData m_SmsMngData;
  bool m_SmsMngDataIsSet;
  LcsPrivacyData m_LcsPrivacyData;
  bool m_LcsPrivacyDataIsSet;
  LcsMoData m_LcsMoData;
  bool m_LcsMoDataIsSet;
  V2xSubscriptionData m_V2xData;
  bool m_V2xDataIsSet;
  LcsBroadcastAssistanceTypesData m_LcsBroadcastAssistanceTypesData;
  bool m_LcsBroadcastAssistanceTypesDataIsSet;
};

}  // namespace oai::udr::model

#endif /* SubscriptionDataSets_H_ */
