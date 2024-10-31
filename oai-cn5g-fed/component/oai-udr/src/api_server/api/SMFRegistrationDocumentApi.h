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
 * SMFRegistrationDocumentApi.h
 *
 *
 */

#ifndef SMFRegistrationDocumentApi_H_
#define SMFRegistrationDocumentApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include <string>

#include "SmfRegistration.h"

namespace oai::udr::api {

using namespace oai::udr::model;

class SMFRegistrationDocumentApi {
 public:
  SMFRegistrationDocumentApi(std::shared_ptr<Pistache::Rest::Router>);
  virtual ~SMFRegistrationDocumentApi() {}
  void init();

 private:
  void setupRoutes();

  void create_smf_context_non3gpp_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);
  void delete_smf_context_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);
  void query_smf_registration_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);
  void smf_registration_document_api_default_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// To create an individual SMF context data of a UE in the UDR
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="ueId">UE id</param>
  /// <param name="pduSessionId">PDU session id</param>
  /// <param name="smfRegistration"> (optional)</param>
  virtual void create_smf_context_non3gpp(
      const std::string& ueId, const int32_t& pduSessionId,
      const SmfRegistration& smfRegistration,
      Pistache::Http::ResponseWriter& response) = 0;

  /// <summary>
  /// To remove an individual SMF context data of a UE the UDR
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="ueId">UE id</param>
  /// <param name="pduSessionId">PDU session id</param>
  virtual void delete_smf_context(
      const std::string& ueId, const int32_t& pduSessionId,
      Pistache::Http::ResponseWriter& response) = 0;

  /// <summary>
  /// Retrieves the individual SMF registration of a UE
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="ueId">UE id</param>
  /// <param name="pduSessionId">PDU session id</param>
  /// <param name="fields">attributes to be retrieved (optional, default to
  /// std::vector&lt;std::string&gt;())</param> <param
  /// name="supportedFeatures">Supported Features (optional, default to
  /// &quot;&quot;)</param>
  virtual void query_smf_registration(
      const std::string& ueId, const int32_t& pduSessionId,
      const Pistache::Optional<std::vector<std::string>>& fields,
      const Pistache::Optional<std::string>& supportedFeatures,
      Pistache::Http::ResponseWriter& response) = 0;
};

}  // namespace oai::udr::api

#endif /* SMFRegistrationDocumentApi_H_ */
