/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this
 * file except in compliance with the License. You may obtain a copy of the
 * License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */
/**
 * Nudr_DataRepository API OpenAPI file
 * Unified Data Repository Service. © 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.1.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * SponsorConnectivityData.h
 *
 * Contains the sponsored data connectivity related information for a sponsor
 * identifier.
 */

#ifndef SponsorConnectivityData_H_
#define SponsorConnectivityData_H_

#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace oai::udr::model {

/// <summary>
/// Contains the sponsored data connectivity related information for a sponsor
/// identifier.
/// </summary>
class SponsorConnectivityData {
 public:
  SponsorConnectivityData();
  virtual ~SponsorConnectivityData();

  void validate();

  /////////////////////////////////////////////
  /// SponsorConnectivityData members

  /// <summary>
  ///
  /// </summary>
  std::vector<std::string>& getAspIds();
  void setAspIds(std::vector<std::string> const& value);

  friend void to_json(nlohmann::json& j, const SponsorConnectivityData& o);
  friend void from_json(const nlohmann::json& j, SponsorConnectivityData& o);

 protected:
  std::vector<std::string> m_AspIds;
};

}  // namespace oai::udr::model

#endif /* SponsorConnectivityData_H_ */
