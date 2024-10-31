/**
 * Namf_Communication
 * AMF Communication Service © 2019, 3GPP Organizational Partners (ARIB, ATIS,
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
 * NonUeN2InfoSubscriptionCreateData.h
 *
 *
 */

#ifndef NonUeN2InfoSubscriptionCreateData_H_
#define NonUeN2InfoSubscriptionCreateData_H_

#include "N2InformationClass.h"
#include <string>
#include "GlobalRanNodeId.h"
#include <vector>
#include "AccessType.h"
#include <nlohmann/json.hpp>

namespace oai::model::lmf {

/// <summary>
///
/// </summary>
class NonUeN2InfoSubscriptionCreateData {
 public:
  NonUeN2InfoSubscriptionCreateData();
  virtual ~NonUeN2InfoSubscriptionCreateData();

  void validate();

  /////////////////////////////////////////////
  /// NonUeN2InfoSubscriptionCreateData members

  /// <summary>
  ///
  /// </summary>
  std::vector<oai::model::common::GlobalRanNodeId>& getGlobalRanNodeList();
  bool globalRanNodeListIsSet() const;
  void unsetGlobalRanNodeList();
  /// <summary>
  ///
  /// </summary>
  std::vector<oai::model::common::AccessType>& getAnTypeList();
  bool anTypeListIsSet() const;
  void unsetAnTypeList();
  /// <summary>
  ///
  /// </summary>
  N2InformationClass getN2InformationClass() const;
  void setN2InformationClass(N2InformationClass const& value);
  /// <summary>
  ///
  /// </summary>
  std::string getN2NotifyCallbackUri() const;
  void setN2NotifyCallbackUri(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  std::string getNfId() const;
  void setNfId(std::string const& value);
  bool nfIdIsSet() const;
  void unsetNfId();
  /// <summary>
  ///
  /// </summary>
  std::string getSupportedFeatures() const;
  void setSupportedFeatures(std::string const& value);
  bool supportedFeaturesIsSet() const;
  void unsetSupportedFeatures();

  friend void to_json(
      nlohmann::json& j, const NonUeN2InfoSubscriptionCreateData& o);
  friend void from_json(
      const nlohmann::json& j, NonUeN2InfoSubscriptionCreateData& o);

 protected:
  std::vector<oai::model::common::GlobalRanNodeId> m_GlobalRanNodeList;
  bool m_GlobalRanNodeListIsSet;
  std::vector<oai::model::common::AccessType> m_AnTypeList;
  bool m_AnTypeListIsSet;
  N2InformationClass m_N2InformationClass;

  std::string m_N2NotifyCallbackUri;

  std::string m_NfId;
  bool m_NfIdIsSet;
  std::string m_SupportedFeatures;
  bool m_SupportedFeaturesIsSet;
};

}  // namespace oai::model::lmf

#endif /* NonUeN2InfoSubscriptionCreateData_H_ */
