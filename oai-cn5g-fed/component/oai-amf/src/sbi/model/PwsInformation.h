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
 * PwsInformation.h
 *
 *
 */

#ifndef PwsInformation_H_
#define PwsInformation_H_

#include "N2InfoContent.h"
#include <string>
#include "GlobalRanNodeId.h"
#include <vector>
#include <nlohmann/json.hpp>

namespace oai::amf::model {

/// <summary>
///
/// </summary>
class PwsInformation {
 public:
  PwsInformation();
  virtual ~PwsInformation() = default;

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

  bool operator==(const PwsInformation& rhs) const;
  bool operator!=(const PwsInformation& rhs) const;

  /////////////////////////////////////////////
  /// PwsInformation members

  /// <summary>
  ///
  /// </summary>
  int32_t getMessageIdentifier() const;
  void setMessageIdentifier(int32_t const value);
  /// <summary>
  ///
  /// </summary>
  int32_t getSerialNumber() const;
  void setSerialNumber(int32_t const value);
  /// <summary>
  ///
  /// </summary>
  oai::amf::model::N2InfoContent getPwsContainer() const;
  void setPwsContainer(oai::amf::model::N2InfoContent const& value);
  /// <summary>
  ///
  /// </summary>
  std::vector<oai::model::common::GlobalRanNodeId> getBcEmptyAreaList() const;
  void setBcEmptyAreaList(
      std::vector<oai::model::common::GlobalRanNodeId> const& value);
  bool bcEmptyAreaListIsSet() const;
  void unsetBcEmptyAreaList();
  /// <summary>
  ///
  /// </summary>
  bool isSendRanResponse() const;
  void setSendRanResponse(bool const value);
  bool sendRanResponseIsSet() const;
  void unsetSendRanResponse();
  /// <summary>
  ///
  /// </summary>
  std::string getOmcId() const;
  void setOmcId(std::string const& value);
  bool omcIdIsSet() const;
  void unsetOmcId();

  friend void to_json(nlohmann::json& j, const PwsInformation& o);
  friend void from_json(const nlohmann::json& j, PwsInformation& o);

 protected:
  int32_t m_MessageIdentifier;

  int32_t m_SerialNumber;

  oai::amf::model::N2InfoContent m_PwsContainer;

  std::vector<oai::model::common::GlobalRanNodeId> m_BcEmptyAreaList;
  bool m_BcEmptyAreaListIsSet;
  bool m_SendRanResponse;
  bool m_SendRanResponseIsSet;
  std::string m_OmcId;
  bool m_OmcIdIsSet;
};

}  // namespace oai::amf::model

#endif /* PwsInformation_H_ */
