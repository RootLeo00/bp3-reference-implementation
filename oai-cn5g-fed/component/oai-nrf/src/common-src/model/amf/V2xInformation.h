/**
 * Namf_Communication
 * AMF Communication Service © 2022, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.8
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * V2xInformation.h
 *
 *
 */

#ifndef V2xInformation_H_
#define V2xInformation_H_

#include "N2InfoContent.h"
#include <nlohmann/json.hpp>

namespace oai::model::amf {

/// <summary>
///
/// </summary>
class V2xInformation {
 public:
  V2xInformation();
  virtual ~V2xInformation() = default;

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

  bool operator==(const V2xInformation& rhs) const;
  bool operator!=(const V2xInformation& rhs) const;

  /////////////////////////////////////////////
  /// V2xInformation members

  /// <summary>
  ///
  /// </summary>
  oai::model::amf::N2InfoContent getN2Pc5Pol() const;
  void setN2Pc5Pol(oai::model::amf::N2InfoContent const& value);
  bool n2Pc5PolIsSet() const;
  void unsetN2Pc5Pol();

  friend void to_json(nlohmann::json& j, const V2xInformation& o);
  friend void from_json(const nlohmann::json& j, V2xInformation& o);

 protected:
  oai::model::amf::N2InfoContent m_N2Pc5Pol;
  bool m_N2Pc5PolIsSet;
};

}  // namespace oai::model::amf

#endif /* V2xInformation_H_ */
