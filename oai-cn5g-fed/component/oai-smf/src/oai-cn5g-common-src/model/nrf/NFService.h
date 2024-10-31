/**
 * NRF NFManagement Service
 * NRF NFManagement Service. © 2019, 3GPP Organizational Partners (ARIB, ATIS,
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
 * NFService.h
 *
 *
 */

#ifndef NFService_H_
#define NFService_H_

#include "NFServiceStatus.h"
#include "ServiceName.h"
#include "NFServiceVersion.h"
#include <string>
#include "DefaultNotificationSubscription.h"
#include "IpEndPoint.h"
#include "UriScheme.h"
#include "PlmnId.h"
#include "Snssai.h"
#include <vector>
#include "ChfServiceInfo.h"
#include <nlohmann/json.hpp>

namespace oai::model::nrf {

/// <summary>
///
/// </summary>
class NFService {
 public:
  NFService();
  virtual ~NFService();

  void validate();

  /////////////////////////////////////////////
  /// NFService members

  /// <summary>
  ///
  /// </summary>
  std::string getServiceInstanceId() const;
  void setServiceInstanceId(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  std::string getServiceName() const;
  void setServiceName(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  std::vector<NFServiceVersion> getVersions();
  void setVersions(std::vector<NFServiceVersion> const& value);
  /// <summary>
  ///
  /// </summary>
  std::string getScheme() const;
  void setScheme(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  std::string getNfServiceStatus() const;
  void setNfServiceStatus(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  std::string getFqdn() const;
  void setFqdn(std::string const& value);
  bool fqdnIsSet() const;
  void unsetFqdn();
  /// <summary>
  ///
  /// </summary>
  std::string getInterPlmnFqdn() const;
  void setInterPlmnFqdn(std::string const& value);
  bool interPlmnFqdnIsSet() const;
  void unsetInterPlmnFqdn();
  /// <summary>
  ///
  /// </summary>
  std::vector<IpEndPoint>& getIpEndPoints();
  void setIpEndPoints(std::vector<IpEndPoint> const& value);
  bool ipEndPointsIsSet() const;
  void unsetIpEndPoints();
  /// <summary>
  ///
  /// </summary>
  std::string getApiPrefix() const;
  void setApiPrefix(std::string const& value);
  bool apiPrefixIsSet() const;
  void unsetApiPrefix();
  /// <summary>
  ///
  /// </summary>
  std::vector<DefaultNotificationSubscription>&
  getDefaultNotificationSubscriptions();
  void setDefaultNotificationSubscriptions(
      std::vector<DefaultNotificationSubscription> const& value);
  bool defaultNotificationSubscriptionsIsSet() const;
  void unsetDefaultNotificationSubscriptions();
  /// <summary>
  ///
  /// </summary>
  std::vector<oai::model::common::PlmnId>& getAllowedPlmns();
  void setAllowedPlmns(std::vector<oai::model::common::PlmnId> const& value);
  bool allowedPlmnsIsSet() const;
  void unsetAllowedPlmns();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string>& getAllowedNfTypes();
  void setAllowedNfTypes(std::vector<std::string> const& value);
  bool allowedNfTypesIsSet() const;
  void unsetAllowedNfTypes();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string>& getAllowedNfDomains();
  void setAllowedNfDomains(std::vector<std::string> const& value);
  bool allowedNfDomainsIsSet() const;
  void unsetAllowedNfDomains();
  /// <summary>
  ///
  /// </summary>
  std::vector<oai::model::common::Snssai>& getAllowedNssais();
  void setAllowedNssais(std::vector<oai::model::common::Snssai> const& value);
  bool allowedNssaisIsSet() const;
  void unsetAllowedNssais();
  /// <summary>
  ///
  ///
  /// </summary>
  int32_t getCapacity() const;
  void setCapacity(int32_t const value);
  bool capacityIsSet() const;
  void unsetCapacity();
  /// <summary>
  ///
  /// </summary>
  int32_t getLoad() const;
  void setLoad(int32_t const value);
  bool loadIsSet() const;
  void unsetLoad();
  /// <summary>
  ///
  /// </summary>
  int32_t getPriority() const;
  void setPriority(int32_t const value);
  bool priorityIsSet() const;
  void unsetPriority();
  /// <summary>
  ///
  /// </summary>
  std::string getRecoveryTime() const;
  void setRecoveryTime(std::string const& value);
  bool recoveryTimeIsSet() const;
  void unsetRecoveryTime();
  /// <summary>
  ///
  /// </summary>
  ChfServiceInfo getChfServiceInfo() const;
  void setChfServiceInfo(ChfServiceInfo const& value);
  bool chfServiceInfoIsSet() const;
  void unsetChfServiceInfo();
  /// <summary>
  ///
  /// </summary>
  std::string getSupportedFeatures() const;
  void setSupportedFeatures(std::string const& value);
  bool supportedFeaturesIsSet() const;
  void unsetSupportedFeatures();

  friend void to_json(nlohmann::json& j, const NFService& o);
  friend void from_json(const nlohmann::json& j, NFService& o);

 protected:
  std::string m_ServiceInstanceId;

  std::string m_ServiceName;

  std::vector<NFServiceVersion> m_Versions;

  std::string m_Scheme;

  std::string m_NfServiceStatus;

  std::string m_Fqdn;
  bool m_FqdnIsSet;
  std::string m_InterPlmnFqdn;
  bool m_InterPlmnFqdnIsSet;
  std::vector<IpEndPoint> m_IpEndPoints;
  bool m_IpEndPointsIsSet;
  std::string m_ApiPrefix;
  bool m_ApiPrefixIsSet;
  std::vector<DefaultNotificationSubscription>
      m_DefaultNotificationSubscriptions;
  bool m_DefaultNotificationSubscriptionsIsSet;
  std::vector<oai::model::common::PlmnId> m_AllowedPlmns;
  bool m_AllowedPlmnsIsSet;
  std::vector<std::string> m_AllowedNfTypes;
  bool m_AllowedNfTypesIsSet;
  std::vector<std::string> m_AllowedNfDomains;
  bool m_AllowedNfDomainsIsSet;
  std::vector<oai::model::common::Snssai> m_AllowedNssais;
  bool m_AllowedNssaisIsSet;
  int32_t m_Priority;
  bool m_PriorityIsSet;
  int32_t m_Capacity;
  bool m_CapacityIsSet;
  int32_t m_Load;
  bool m_LoadIsSet;
  std::string m_RecoveryTime;
  bool m_RecoveryTimeIsSet;
  ChfServiceInfo m_ChfServiceInfo;
  bool m_ChfServiceInfoIsSet;
  std::string m_SupportedFeatures;
  bool m_SupportedFeaturesIsSet;
};

}  // namespace oai::model::nrf

#endif /* NFService_H_ */
