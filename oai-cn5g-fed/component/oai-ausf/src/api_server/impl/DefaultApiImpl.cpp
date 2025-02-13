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

#include "DefaultApiImpl.h"

#include "authentication_algorithms_with_5gaka.hpp"
#include "logger.hpp"
#include <iostream>

#include "conversions.hpp"
#include "sha256.hpp"
#include "UEAuthenticationCtx.h"
#include "ConfirmationDataResponse.h"
#include "AuthenticationInfo.h"

#include <typeinfo>
#include <map>
#include "ausf_config.hpp"
#include "ProblemDetails.h"

using namespace oai::config;
extern ausf_config ausf_cfg;

using namespace std;

namespace oai {
namespace ausf_server {
namespace api {

using namespace oai::model::ausf;

DefaultApiImpl::DefaultApiImpl(
    std::shared_ptr<Pistache::Rest::Router> rtr, ausf_app* ausf_app_inst,
    std::string address)
    : DefaultApi(rtr), m_ausf_app(ausf_app_inst), m_address(address) {}

void DefaultApiImpl::eap_auth_method(
    const std::string& authCtxId, const EapSession& eapSession,
    Pistache::Http::ResponseWriter& response) {
  Logger::ausf_server().info("eap_auth_method");
  response.send(
      Pistache::Http::Code::Not_Implemented,
      "eap_auth_method API has not been implemented yet!\n");
}

void DefaultApiImpl::rg_authentications_post(
    const RgAuthenticationInfo& rgAuthenticationInfo,
    Pistache::Http::ResponseWriter& response) {
  Logger::ausf_server().info("rg_authentications_post");
  response.send(
      Pistache::Http::Code::Not_Implemented,
      "rg_authentications_post API has not been implemented yet!\n");
}

void DefaultApiImpl::ue_authentications_auth_ctx_id5g_aka_confirmation_put(
    const std::string& authCtxId, const ConfirmationData& confirmationData,
    Pistache::Http::ResponseWriter& response) {
  Pistache::Http::Code code = {};
  nlohmann::json json_data  = {};

  m_ausf_app->handle_ue_authentications_confirmation(
      authCtxId, confirmationData, json_data, code);

  // ausf --> seaf
  Logger::ausf_server().debug(
      "5g-aka-confirmation response:\n %s", json_data.dump().c_str());

  Logger::ausf_server().info(
      "Send 5g-aka-confirmation response to SEAF (Code %d)", (int) code);
  response.send(code, json_data.dump().c_str());
}

void DefaultApiImpl::ue_authentications_deregister_post(
    const DeregistrationInfo& deregistrationInfo,
    Pistache::Http::ResponseWriter& response) {
  Logger::ausf_server().info("ue_authentications_deregister_post");
  response.send(
      Pistache::Http::Code::Not_Implemented,
      "ue_authentications_deregister_post API has not been implemented yet!\n");
}

void DefaultApiImpl::ue_authentications_post(
    const AuthenticationInfo& authenticationInfo,
    Pistache::Http::ResponseWriter& response) {
  // Getting params
  std::string reponse_from_udm    = {};
  std::string location            = {};
  UEAuthenticationCtx ue_auth_ctx = {};
  nlohmann::json UEAuthCtx_json   = {};
  Pistache::Http::Code code       = {};

  m_ausf_app->handle_ue_authentications(
      authenticationInfo, UEAuthCtx_json, location, code);

  Logger::ausf_server().debug(
      "Auth response:\n %s", UEAuthCtx_json.dump().c_str());

  Logger::ausf_server().info(
      "Send Auth response to SEAF (Code %d)", (int) code);
  response.headers().add<Pistache::Http::Header::Location>(location);
  response.send(code, UEAuthCtx_json.dump().c_str());
}

}  // namespace api
}  // namespace ausf_server
}  // namespace oai
