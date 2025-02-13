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
 * HorizontalWithVerticalVelocity.h
 *
 *
 */

#ifndef HorizontalWithVerticalVelocity_H_
#define HorizontalWithVerticalVelocity_H_

#include "VerticalDirection.h"
#include <nlohmann/json.hpp>

namespace oai::model::lmf {

/// <summary>
///
/// </summary>
class HorizontalWithVerticalVelocity {
 public:
  HorizontalWithVerticalVelocity();
  virtual ~HorizontalWithVerticalVelocity() = default;

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

  bool operator==(const HorizontalWithVerticalVelocity& rhs) const;
  bool operator!=(const HorizontalWithVerticalVelocity& rhs) const;

  /////////////////////////////////////////////
  /// HorizontalWithVerticalVelocity members

  /// <summary>
  ///
  /// </summary>
  float getHSpeed() const;
  void setHSpeed(float const value);
  /// <summary>
  ///
  /// </summary>
  int32_t getBearing() const;
  void setBearing(int32_t const value);
  /// <summary>
  ///
  /// </summary>
  float getVSpeed() const;
  void setVSpeed(float const value);
  /// <summary>
  ///
  /// </summary>
  oai::model::lmf::VerticalDirection getVDirection() const;
  void setVDirection(oai::model::lmf::VerticalDirection const& value);

  friend void to_json(
      nlohmann::json& j, const HorizontalWithVerticalVelocity& o);
  friend void from_json(
      const nlohmann::json& j, HorizontalWithVerticalVelocity& o);

 protected:
  float m_HSpeed;

  int32_t m_Bearing;

  float m_VSpeed;

  oai::model::lmf::VerticalDirection m_VDirection;
};

}  // namespace oai::model::lmf

#endif /* HorizontalWithVerticalVelocity_H_ */
