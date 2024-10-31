/**
 * Common Data Types
 * Common Data Types for Service Based Interfaces. © 2022, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.7
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * BatteryIndication.h
 *
 *
 */

#ifndef BatteryIndication_H_
#define BatteryIndication_H_

#include <nlohmann/json.hpp>

namespace oai::model::common {

/// <summary>
///
/// </summary>
class BatteryIndication {
 public:
  BatteryIndication();
  virtual ~BatteryIndication() = default;

  /// <summary>
  /// Validate the current data in the model. Throws a ValidationException on
  /// failure.
  /// </summary>
  void validate() const;

  /// <summary>
  /// Validate the current data in the model. Returns false on error and writes
  /// an error message into the given stringstream.
  /// </summary>
  bool validate(std::stringstream& msg) const;

  /// <summary>
  /// Helper overload for validate. Used when one model stores another model and
  /// calls it's validate. Not meant to be called outside that case.
  /// </summary>
  bool validate(std::stringstream& msg, const std::string& pathPrefix) const;

  bool operator==(const BatteryIndication& rhs) const;
  bool operator!=(const BatteryIndication& rhs) const;

  /////////////////////////////////////////////
  /// BatteryIndication members

  /// <summary>
  ///
  /// </summary>
  bool isBatteryInd() const;
  void setBatteryInd(bool const value);
  bool batteryIndIsSet() const;
  void unsetBatteryInd();
  /// <summary>
  ///
  /// </summary>
  bool isReplaceableInd() const;
  void setReplaceableInd(bool const value);
  bool replaceableIndIsSet() const;
  void unsetReplaceableInd();
  /// <summary>
  ///
  /// </summary>
  bool isRechargeableInd() const;
  void setRechargeableInd(bool const value);
  bool rechargeableIndIsSet() const;
  void unsetRechargeableInd();

  friend void to_json(nlohmann::json& j, const BatteryIndication& o);
  friend void from_json(const nlohmann::json& j, BatteryIndication& o);

 protected:
  bool m_BatteryInd;
  bool m_BatteryIndIsSet;
  bool m_ReplaceableInd;
  bool m_ReplaceableIndIsSet;
  bool m_RechargeableInd;
  bool m_RechargeableIndIsSet;
};

}  // namespace oai::model::common

#endif /* BatteryIndication_H_ */
