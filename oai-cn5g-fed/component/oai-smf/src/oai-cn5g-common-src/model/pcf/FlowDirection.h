/**
 * Npcf_SMPolicyControl API
 * Session Management Policy Control Service © 2023, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.9
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * FlowDirection.h
 *
 * Possible values are - DOWNLINK: The corresponding filter applies for traffic
 * to the UE. - UPLINK: The corresponding filter applies for traffic from the
 * UE. - BIDIRECTIONAL: The corresponding filter applies for traffic both to and
 * from the UE. - UNSPECIFIED: The corresponding filter applies for traffic to
 * the UE (downlink), but has no specific direction declared. The service data
 * flow detection shall apply the filter for uplink traffic as if the filter was
 * bidirectional. The PCF shall not use the value UNSPECIFIED in filters created
 * by the network in NW-initiated procedures. The PCF shall only include the
 * value UNSPECIFIED in filters in UE-initiated procedures if the same value is
 * received from the SMF.
 */

#ifndef FlowDirection_H_
#define FlowDirection_H_

#include "FlowDirection_anyOf.h"
#include <nlohmann/json.hpp>

namespace oai::model::pcf {

/// <summary>
/// Possible values are - DOWNLINK: The corresponding filter applies for traffic
/// to the UE. - UPLINK: The corresponding filter applies for traffic from the
/// UE. - BIDIRECTIONAL: The corresponding filter applies for traffic both to
/// and from the UE. - UNSPECIFIED: The corresponding filter applies for traffic
/// to the UE (downlink), but has no specific direction declared. The service
/// data flow detection shall apply the filter for uplink traffic as if the
/// filter was bidirectional. The PCF shall not use the value UNSPECIFIED in
/// filters created by the network in NW-initiated procedures. The PCF shall
/// only include the value UNSPECIFIED in filters in UE-initiated procedures if
/// the same value is received from the SMF.
/// </summary>
class FlowDirection {
 public:
  FlowDirection();
  virtual ~FlowDirection() = default;

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

  bool operator==(const FlowDirection& rhs) const;
  bool operator!=(const FlowDirection& rhs) const;

  /////////////////////////////////////////////
  /// FlowDirection members

  FlowDirection_anyOf getValue() const;
  void setValue(FlowDirection_anyOf value);
  FlowDirection_anyOf::eFlowDirection_anyOf getEnumValue() const;
  void setEnumValue(FlowDirection_anyOf::eFlowDirection_anyOf value);
  friend void to_json(nlohmann::json& j, const FlowDirection& o);
  friend void from_json(const nlohmann::json& j, FlowDirection& o);
  friend void to_json(nlohmann::json& j, const FlowDirection_anyOf& o);
  friend void from_json(const nlohmann::json& j, FlowDirection_anyOf& o);

 protected:
  FlowDirection_anyOf m_value;
};

}  // namespace oai::model::pcf

#endif /* FlowDirection_H_ */
