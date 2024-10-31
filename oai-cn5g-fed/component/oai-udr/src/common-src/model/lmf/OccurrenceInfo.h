/**
 * LMF Location
 * LMF Location Service. © 2022, 3GPP Organizational Partners (ARIB, ATIS, CCSA,
 * ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.5
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * OccurrenceInfo.h
 *
 *
 */

#ifndef OccurrenceInfo_H_
#define OccurrenceInfo_H_

#include "OccurrenceInfo_anyOf.h"
#include <nlohmann/json.hpp>

namespace oai::model::lmf {

/// <summary>
///
/// </summary>
class OccurrenceInfo {
 public:
  OccurrenceInfo();
  virtual ~OccurrenceInfo() = default;

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

  bool operator==(const OccurrenceInfo& rhs) const;
  bool operator!=(const OccurrenceInfo& rhs) const;

  /////////////////////////////////////////////
  /// OccurrenceInfo members

  OccurrenceInfo_anyOf getValue() const;
  void setValue(OccurrenceInfo_anyOf value);
  OccurrenceInfo_anyOf::eOccurrenceInfo_anyOf getEnumValue() const;
  void setEnumValue(OccurrenceInfo_anyOf::eOccurrenceInfo_anyOf value);
  friend void to_json(nlohmann::json& j, const OccurrenceInfo& o);
  friend void from_json(const nlohmann::json& j, OccurrenceInfo& o);
  friend void to_json(nlohmann::json& j, const OccurrenceInfo_anyOf& o);
  friend void from_json(const nlohmann::json& j, OccurrenceInfo_anyOf& o);

 protected:
  OccurrenceInfo_anyOf m_value;
};

}  // namespace oai::model::lmf

#endif /* OccurrenceInfo_H_ */
