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

#include "QueryNIDDAuthorizationDataGPSIOrExternalGroupIdentifierDocumentApi.h"

#include "Helpers.h"
#include "udr_config.hpp"
#include "udr_sbi_helper.hpp"

extern oai::udr::config::udr_config udr_cfg;

namespace oai::udr::api {

using namespace oai::model::common::helpers;
using namespace oai::udr::model;
using namespace oai::udr::api;

QueryNIDDAuthorizationDataGPSIOrExternalGroupIdentifierDocumentApi::
    QueryNIDDAuthorizationDataGPSIOrExternalGroupIdentifierDocumentApi(
        std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void QueryNIDDAuthorizationDataGPSIOrExternalGroupIdentifierDocumentApi::
    init() {
  setupRoutes();
}

void QueryNIDDAuthorizationDataGPSIOrExternalGroupIdentifierDocumentApi::
    setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Get(
      *router,
      udr_sbi_helper::UdrDataRepositoryServiceBase +
          udr_sbi_helper::UdrDrPathSubscriptionDataNiddAuthorizationData,
      Routes::bind(
          &QueryNIDDAuthorizationDataGPSIOrExternalGroupIdentifierDocumentApi::
              get_nidd_au_data_handler,
          this));

  // Default handler, called when a route is not found
  router->addCustomHandler(Routes::bind(
      &QueryNIDDAuthorizationDataGPSIOrExternalGroupIdentifierDocumentApi::
          query_nidd_authorization_data_gpsi_or_external_group_identifier_document_api_default_handler,
      this));
}

void QueryNIDDAuthorizationDataGPSIOrExternalGroupIdentifierDocumentApi::
    get_nidd_au_data_handler(
        const Pistache::Rest::Request& request,
        Pistache::Http::ResponseWriter response) {
  if (!request.hasParam(":ueId")) {
    // send a 400 error
    response.send(Pistache::Http::Code::Bad_Request);
    return;
  }
  // Getting the path params
  auto ueId = request.param(":ueId").as<std::string>();

  // Getting the query params
  auto singleNssaiQuery = request.query().get("single-nssai");
  Pistache::Optional<oai::model::common::Snssai> singleNssai;
  if (!singleNssaiQuery.isEmpty()) {
    //        Snssai valueQuery_instance;
    //        if(fromStringValue(singleNssaiQuery.get(), valueQuery_instance)){
    //            singleNssai = Pistache::Some(valueQuery_instance);
    //        }
  }
  auto dnnQuery = request.query().get("dnn");
  Pistache::Optional<std::string> dnn;
  if (!dnnQuery.isEmpty()) {
    std::string valueQuery_instance;
    if (fromStringValue(dnnQuery.get(), valueQuery_instance)) {
      dnn = Pistache::Some(valueQuery_instance);
    }
  }
  auto mtcProviderInformationQuery =
      request.query().get("mtc-provider-information");
  Pistache::Optional<std::string> mtcProviderInformation;
  if (!mtcProviderInformationQuery.isEmpty()) {
    std::string valueQuery_instance;
    if (fromStringValue(
            mtcProviderInformationQuery.get(), valueQuery_instance)) {
      mtcProviderInformation = Pistache::Some(valueQuery_instance);
    }
  }

  // Getting the header params
  auto ifNoneMatch     = request.headers().tryGetRaw("If-None-Match");
  auto ifModifiedSince = request.headers().tryGetRaw("If-Modified-Since");

  try {
    this->get_nidd_au_data(
        ueId, singleNssai, dnn, mtcProviderInformation, ifNoneMatch,
        ifModifiedSince, response);
  } catch (nlohmann::detail::exception& e) {
    // send a 400 error
    response.send(Pistache::Http::Code::Bad_Request, e.what());
    return;
  } catch (Pistache::Http::HttpError& e) {
    response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
    return;
  } catch (std::exception& e) {
    // send a 500 error
    response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
    return;
  }
}

void QueryNIDDAuthorizationDataGPSIOrExternalGroupIdentifierDocumentApi::
    query_nidd_authorization_data_gpsi_or_external_group_identifier_document_api_default_handler(
        const Pistache::Rest::Request&,
        Pistache::Http::ResponseWriter response) {
  response.send(
      Pistache::Http::Code::Not_Found, "The requested method does not exist");
}

}  // namespace oai::udr::api
