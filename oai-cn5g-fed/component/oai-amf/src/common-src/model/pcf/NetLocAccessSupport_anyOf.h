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
 * NetLocAccessSupport_anyOf.h
 *
 *
 */

#ifndef NetLocAccessSupport_anyOf_H_
#define NetLocAccessSupport_anyOf_H_

#include <nlohmann/json.hpp>

namespace oai::model::pcf {

/// <summary>
///
/// </summary>
class NetLocAccessSupport_anyOf {
 public:
  NetLocAccessSupport_anyOf();
  virtual ~NetLocAccessSupport_anyOf() = default;

  enum class eNetLocAccessSupport_anyOf {
    // To have a valid default value.
    // Avoiding name clashes with user defined
    // enum values
    INVALID_VALUE_OPENAPI_GENERATED = 0,
    ANR_NOT_SUPPORTED,
    TZR_NOT_SUPPORTED,
    LOC_NOT_SUPPORTED
  };

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

  bool operator==(const NetLocAccessSupport_anyOf& rhs) const;
  bool operator!=(const NetLocAccessSupport_anyOf& rhs) const;

  /////////////////////////////////////////////
  /// NetLocAccessSupport_anyOf members

  NetLocAccessSupport_anyOf::eNetLocAccessSupport_anyOf getValue() const;
  void setValue(NetLocAccessSupport_anyOf::eNetLocAccessSupport_anyOf value);

  friend void to_json(nlohmann::json& j, const NetLocAccessSupport_anyOf& o);
  friend void from_json(const nlohmann::json& j, NetLocAccessSupport_anyOf& o);

 protected:
  NetLocAccessSupport_anyOf::eNetLocAccessSupport_anyOf m_value =
      NetLocAccessSupport_anyOf::eNetLocAccessSupport_anyOf::
          INVALID_VALUE_OPENAPI_GENERATED;
};

}  // namespace oai::model::pcf

#endif /* NetLocAccessSupport_anyOf_H_ */
