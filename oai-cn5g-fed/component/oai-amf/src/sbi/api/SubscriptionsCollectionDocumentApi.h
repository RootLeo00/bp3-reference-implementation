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
 * SubscriptionsCollectionDocumentApi.h
 *
 *
 */

#ifndef SubscriptionsCollectionDocumentApi_H_
#define SubscriptionsCollectionDocumentApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "ProblemDetails.h"
#include "SubscriptionData.h"
#include "amf_sbi_helper.hpp"

namespace oai {
namespace amf {
namespace api {

using namespace oai::model::amf;

class SubscriptionsCollectionDocumentApi {
 public:
  SubscriptionsCollectionDocumentApi(std::shared_ptr<Pistache::Rest::Router>);
  virtual ~SubscriptionsCollectionDocumentApi() {}
  void init();

  const std::string base = amf_sbi_helper::AmfCommunicationServiceBase;

 private:
  void setupRoutes();

  void a_mf_status_change_subscribe_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);
  void subscriptions_collection_document_api_default_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Namf_Communication AMF Status Change Subscribe service Operation
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="subscriptionData"></param>
  virtual void a_mf_status_change_subscribe(
      const SubscriptionData& subscriptionData,
      Pistache::Http::ResponseWriter& response) = 0;
};

}  // namespace api
}  // namespace amf
}  // namespace oai

#endif /* SubscriptionsCollectionDocumentApi_H_ */
