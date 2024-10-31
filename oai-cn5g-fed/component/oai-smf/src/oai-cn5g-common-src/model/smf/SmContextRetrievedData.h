/**
 * Nsmf_PDUSession
 * SMF PDU Session Service. © 2019, 3GPP Organizational Partners (ARIB, ATIS,
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
 * SmContextRetrievedData.h
 *
 *
 */

#ifndef SmContextRetrievedData_H_
#define SmContextRetrievedData_H_

#include "SmContext.h"
#include <string>
#include <nlohmann/json.hpp>

namespace oai::model::smf {

/// <summary>
///
/// </summary>
class SmContextRetrievedData {
 public:
  SmContextRetrievedData();
  virtual ~SmContextRetrievedData();

  void validate();

  /////////////////////////////////////////////
  /// SmContextRetrievedData members

  /// <summary>
  ///
  /// </summary>
  std::string getUeEpsPdnConnection() const;
  void setUeEpsPdnConnection(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  SmContext getSmContext() const;
  void setSmContext(SmContext const& value);
  bool smContextIsSet() const;
  void unsetSmContext();

  friend void to_json(nlohmann::json& j, const SmContextRetrievedData& o);
  friend void from_json(const nlohmann::json& j, SmContextRetrievedData& o);

 protected:
  std::string m_UeEpsPdnConnection;

  SmContext m_SmContext;
  bool m_SmContextIsSet;
};

}  // namespace oai::model::smf

#endif /* SmContextRetrievedData_H_ */
