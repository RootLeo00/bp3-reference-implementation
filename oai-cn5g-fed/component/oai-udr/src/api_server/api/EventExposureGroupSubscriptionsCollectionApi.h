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
 * EventExposureGroupSubscriptionsCollectionApi.h
 *
 *
 */

#ifndef EventExposureGroupSubscriptionsCollectionApi_H_
#define EventExposureGroupSubscriptionsCollectionApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include <string>

#include "EeSubscription.h"

namespace oai::udr::api {

using namespace oai::udr::model;

class EventExposureGroupSubscriptionsCollectionApi {
 public:
  EventExposureGroupSubscriptionsCollectionApi(
      std::shared_ptr<Pistache::Rest::Router>);
  virtual ~EventExposureGroupSubscriptionsCollectionApi() {}
  void init();

 private:
  void setupRoutes();

  void create_ee_group_subscriptions_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);
  void query_ee_group_subscriptions_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);
  void event_exposure_group_subscriptions_collection_api_default_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Create individual EE subscription for a group of UEs or any UE
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="ueGroupId">Group of UEs or any UE</param>
  /// <param name="eeSubscription"></param>
  virtual void create_ee_group_subscriptions(
      const std::string& ueGroupId, const EeSubscription& eeSubscription,
      Pistache::Http::ResponseWriter& response) = 0;

  /// <summary>
  /// Retrieves the ee subscriptions of a group of UEs or any UE
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="ueGroupId">Group of UEs or any UE</param>
  /// <param name="supportedFeatures">Supported Features (optional, default to
  /// &quot;&quot;)</param>
  virtual void query_ee_group_subscriptions(
      const std::string& ueGroupId,
      const Pistache::Optional<std::string>& supportedFeatures,
      Pistache::Http::ResponseWriter& response) = 0;
};

}  // namespace oai::udr::api

#endif /* EventExposureGroupSubscriptionsCollectionApi_H_ */
