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
 * RoamingChargingProfile.h
 *
 *
 */

#ifndef RoamingChargingProfile_H_
#define RoamingChargingProfile_H_

#include "Trigger.h"
#include "PartialRecordMethod.h"
#include <vector>
#include <nlohmann/json.hpp>

namespace oai::model::smf {

/// <summary>
///
/// </summary>
class RoamingChargingProfile {
 public:
  RoamingChargingProfile();
  virtual ~RoamingChargingProfile();

  void validate();

  /////////////////////////////////////////////
  /// RoamingChargingProfile members

  /// <summary>
  ///
  /// </summary>
  std::vector<Trigger>& getTriggers();
  bool triggersIsSet() const;
  void unsetTriggers();
  /// <summary>
  ///
  /// </summary>
  PartialRecordMethod getPartialRecordMethod() const;
  void setPartialRecordMethod(PartialRecordMethod const& value);
  bool partialRecordMethodIsSet() const;
  void unsetPartialRecordMethod();

  friend void to_json(nlohmann::json& j, const RoamingChargingProfile& o);
  friend void from_json(const nlohmann::json& j, RoamingChargingProfile& o);

 protected:
  std::vector<Trigger> m_Triggers;
  bool m_TriggersIsSet;
  PartialRecordMethod m_PartialRecordMethod;
  bool m_PartialRecordMethodIsSet;
};

}  // namespace oai::model::smf

#endif /* RoamingChargingProfile_H_ */
