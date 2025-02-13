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
 * NonUEN2MessagesSubscriptionsCollectionDocumentApi.h
 *
 *
 */

#ifndef NonUEN2MessagesSubscriptionsCollectionDocumentApi_H_
#define NonUEN2MessagesSubscriptionsCollectionDocumentApi_H_

#include <pistache/http.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>
#include <pistache/router.h>

#include "NonUeN2InfoSubscriptionCreateData.h"
#include "NonUeN2InfoSubscriptionCreatedData.h"
#include "ProblemDetails.h"
#include "amf_sbi_helper.hpp"

namespace oai {
namespace amf {
namespace api {

using namespace oai::model::amf;

class NonUEN2MessagesSubscriptionsCollectionDocumentApi {
 public:
  NonUEN2MessagesSubscriptionsCollectionDocumentApi(
      std::shared_ptr<Pistache::Rest::Router>);
  virtual ~NonUEN2MessagesSubscriptionsCollectionDocumentApi() {}
  void init();

  const std::string base = amf_sbi_helper::AmfCommunicationServiceBase;

 private:
  void setupRoutes();

  void non_ue_n2_info_subscribe_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);
  void non_uen2_messages_subscriptions_collection_document_api_default_handler(
      const Pistache::Rest::Request& request,
      Pistache::Http::ResponseWriter response);

  std::shared_ptr<Pistache::Rest::Router> router;

  /// <summary>
  /// Namf_Communication Non UE N2 Info Subscribe service Operation
  /// </summary>
  /// <remarks>
  ///
  /// </remarks>
  /// <param name="nonUeN2InfoSubscriptionCreateData"></param>
  virtual void non_ue_n2_info_subscribe(
      const NonUeN2InfoSubscriptionCreateData&
          nonUeN2InfoSubscriptionCreateData,
      Pistache::Http::ResponseWriter& response) = 0;
};

}  // namespace api
}  // namespace amf
}  // namespace oai

#endif /* NonUEN2MessagesSubscriptionsCollectionDocumentApi_H_ */
