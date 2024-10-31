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
 * PointUncertaintyEllipse_allOf.h
 *
 *
 */

#ifndef PointUncertaintyEllipse_allOf_H_
#define PointUncertaintyEllipse_allOf_H_

#include "GeographicalCoordinates.h"
#include "UncertaintyEllipse.h"
#include <nlohmann/json.hpp>

namespace oai::model::lmf {

/// <summary>
///
/// </summary>
class PointUncertaintyEllipse_allOf {
 public:
  PointUncertaintyEllipse_allOf();
  virtual ~PointUncertaintyEllipse_allOf() = default;

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

  bool operator==(const PointUncertaintyEllipse_allOf& rhs) const;
  bool operator!=(const PointUncertaintyEllipse_allOf& rhs) const;

  /////////////////////////////////////////////
  /// PointUncertaintyEllipse_allOf members

  /// <summary>
  ///
  /// </summary>
  oai::model::lmf::GeographicalCoordinates getPoint() const;
  void setPoint(oai::model::lmf::GeographicalCoordinates const& value);
  /// <summary>
  ///
  /// </summary>
  oai::model::lmf::UncertaintyEllipse getUncertaintyEllipse() const;
  void setUncertaintyEllipse(oai::model::lmf::UncertaintyEllipse const& value);
  /// <summary>
  ///
  /// </summary>
  int32_t getConfidence() const;
  void setConfidence(int32_t const value);

  friend void to_json(
      nlohmann::json& j, const PointUncertaintyEllipse_allOf& o);
  friend void from_json(
      const nlohmann::json& j, PointUncertaintyEllipse_allOf& o);

 protected:
  oai::model::lmf::GeographicalCoordinates m_Point;

  oai::model::lmf::UncertaintyEllipse m_UncertaintyEllipse;

  int32_t m_Confidence;
};

}  // namespace oai::model::lmf

#endif /* PointUncertaintyEllipse_allOf_H_ */
