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
 * N2InfoContainer.h
 *
 *
 */

#ifndef N2InfoContainer_H_
#define N2InfoContainer_H_

#include "V2xInformation.h"
#include "N2RanInformation.h"
#include "N2InformationClass.h"
#include "N2SmInformation.h"
#include "NrppaInformation.h"
#include "PwsInformation.h"
#include <nlohmann/json.hpp>

namespace oai::model::amf {

/// <summary>
///
/// </summary>
class N2InfoContainer {
 public:
  N2InfoContainer();
  virtual ~N2InfoContainer() = default;

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

  bool operator==(const N2InfoContainer& rhs) const;
  bool operator!=(const N2InfoContainer& rhs) const;

  /////////////////////////////////////////////
  /// N2InfoContainer members

  /// <summary>
  ///
  /// </summary>
  oai::model::amf::N2InformationClass getN2InformationClass() const;
  void setN2InformationClass(oai::model::amf::N2InformationClass const& value);
  /// <summary>
  ///
  /// </summary>
  oai::model::amf::N2SmInformation getSmInfo() const;
  void setSmInfo(oai::model::amf::N2SmInformation const& value);
  bool smInfoIsSet() const;
  void unsetSmInfo();
  /// <summary>
  ///
  /// </summary>
  oai::model::amf::N2RanInformation getRanInfo() const;
  void setRanInfo(oai::model::amf::N2RanInformation const& value);
  bool ranInfoIsSet() const;
  void unsetRanInfo();
  /// <summary>
  ///
  /// </summary>
  oai::model::amf::NrppaInformation getNrppaInfo() const;
  void setNrppaInfo(oai::model::amf::NrppaInformation const& value);
  bool nrppaInfoIsSet() const;
  void unsetNrppaInfo();
  /// <summary>
  ///
  /// </summary>
  oai::model::amf::PwsInformation getPwsInfo() const;
  void setPwsInfo(oai::model::amf::PwsInformation const& value);
  bool pwsInfoIsSet() const;
  void unsetPwsInfo();
  /// <summary>
  ///
  /// </summary>
  oai::model::amf::V2xInformation getV2xInfo() const;
  void setV2xInfo(oai::model::amf::V2xInformation const& value);
  bool v2xInfoIsSet() const;
  void unsetV2xInfo();

  friend void to_json(nlohmann::json& j, const N2InfoContainer& o);
  friend void from_json(const nlohmann::json& j, N2InfoContainer& o);

 protected:
  oai::model::amf::N2InformationClass m_N2InformationClass;

  oai::model::amf::N2SmInformation m_SmInfo;
  bool m_SmInfoIsSet;
  oai::model::amf::N2RanInformation m_RanInfo;
  bool m_RanInfoIsSet;
  oai::model::amf::NrppaInformation m_NrppaInfo;
  bool m_NrppaInfoIsSet;
  oai::model::amf::PwsInformation m_PwsInfo;
  bool m_PwsInfoIsSet;
  oai::model::amf::V2xInformation m_V2xInfo;
  bool m_V2xInfoIsSet;
};

}  // namespace oai::model::amf

#endif /* N2InfoContainer_H_ */
