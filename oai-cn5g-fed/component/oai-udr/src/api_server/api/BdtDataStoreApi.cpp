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

#include "BdtDataStoreApi.h"

#include "Helpers.h"
#include "udr_config.hpp"
#include "udr_sbi_helper.hpp"

extern oai::udr::config::udr_config udr_cfg;

namespace oai::udr::api {

using namespace oai::model::common::helpers;
using namespace oai::udr::model;
using namespace oai::udr::api;

BdtDataStoreApi::BdtDataStoreApi(std::shared_ptr<Pistache::Rest::Router> rtr) {
  router = rtr;
}

void BdtDataStoreApi::init() {
  setupRoutes();
}

void BdtDataStoreApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Get(
      *router,
      udr_sbi_helper::UdrDataRepositoryServiceBase +
          udr_sbi_helper::UdrDrPathSubscriptionDataPolicyDataBdtData,
      Routes::bind(&BdtDataStoreApi::read_bdt_data_handler, this));

  // Default handler, called when a route is not found
  router->addCustomHandler(
      Routes::bind(&BdtDataStoreApi::bdt_data_store_api_default_handler, this));
}

void BdtDataStoreApi::read_bdt_data_handler(
    const Pistache::Rest::Request& request,
    Pistache::Http::ResponseWriter response) {
  // Getting the query params
  auto bdtRefIdsQuery = request.query().get("bdt-ref-ids");
  Pistache::Optional<std::vector<std::string>> bdtRefIds;
  if (!bdtRefIdsQuery.isEmpty()) {
    std::vector<std::string> valueQuery_instance;
    if (fromStringValue(bdtRefIdsQuery.get(), valueQuery_instance)) {
      bdtRefIds = Pistache::Some(valueQuery_instance);
    }
  }
  auto suppFeatQuery = request.query().get("supp-feat");
  Pistache::Optional<std::string> suppFeat;
  if (!suppFeatQuery.isEmpty()) {
    std::string valueQuery_instance;
    if (fromStringValue(suppFeatQuery.get(), valueQuery_instance)) {
      suppFeat = Pistache::Some(valueQuery_instance);
    }
  }

  try {
    this->read_bdt_data(bdtRefIds, suppFeat, response);
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

void BdtDataStoreApi::bdt_data_store_api_default_handler(
    const Pistache::Rest::Request&, Pistache::Http::ResponseWriter response) {
  response.send(
      Pistache::Http::Code::Not_Found, "The requested method does not exist");
}

}  // namespace oai::udr::api
