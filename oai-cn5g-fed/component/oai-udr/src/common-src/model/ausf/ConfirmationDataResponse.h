/**
 * AUSF API
 * AUSF UE Authentication Service. © 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this
 *file except in compliance with the License. You may obtain a copy of the
 *License at
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

/*
 * ConfirmationDataResponse.h
 *
 *
 */

#ifndef ConfirmationDataResponse_H_
#define ConfirmationDataResponse_H_

#include "AuthResult.h"
#include <nlohmann/json.hpp>
#include <string>

namespace oai::model::ausf {

/// <summary>
///
/// </summary>
class ConfirmationDataResponse {
 public:
  ConfirmationDataResponse();
  virtual ~ConfirmationDataResponse();

  void validate();

  /////////////////////////////////////////////
  /// ConfirmationDataResponse members

  /// <summary>
  ///
  /// </summary>
  bool getAuthResult() const;
  void setAuthResult(bool const& value);

  // AuthResult getAuthResult() const;
  // void setAuthResult(AuthResult const &value);

  /// <summary>
  ///
  /// </summary>
  std::string getSupi() const;
  void setSupi(std::string const& value);
  bool supiIsSet() const;
  void unsetSupi();
  /// <summary>
  ///
  /// </summary>
  std::string getKseaf() const;
  void setKseaf(std::string const& value);
  bool kseafIsSet() const;
  void unsetKseaf();

  friend void to_json(nlohmann::json& j, const ConfirmationDataResponse& o);
  friend void from_json(const nlohmann::json& j, ConfirmationDataResponse& o);

 protected:
  bool m_AuthResult;
  // AuthResult m_AuthResult;   //AuthResult not defined

  std::string m_Supi;
  bool m_SupiIsSet;
  std::string m_Kseaf;
  bool m_KseafIsSet;
};

}  // namespace oai::model::ausf

#endif /* ConfirmationDataResponse_H_ */
