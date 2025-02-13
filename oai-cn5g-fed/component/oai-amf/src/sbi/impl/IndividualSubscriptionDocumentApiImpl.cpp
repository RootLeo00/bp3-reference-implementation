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

#include "IndividualSubscriptionDocumentApiImpl.h"

namespace oai {
namespace amf {
namespace api {

using namespace oai::model::amf;

IndividualSubscriptionDocumentApiImpl::IndividualSubscriptionDocumentApiImpl(
    std::shared_ptr<Pistache::Rest::Router> rtr,
    amf_application::amf_app* amf_app_inst)
    : IndividualSubscriptionDocumentApi(rtr), m_amf_app(amf_app_inst) {}

void IndividualSubscriptionDocumentApiImpl::a_mf_status_change_subscribe_modfy(
    const std::string& subscriptionId, const SubscriptionData& subscriptionData,
    Pistache::Http::ResponseWriter& response) {
  response.send(
      Pistache::Http::Code::Ok,
      "IndividualSubscriptionDocumentApiImpl::a_mf_status_change_subscribe_"
      "modfy API has not been implemented yet!\n");
}
void IndividualSubscriptionDocumentApiImpl::a_mf_status_change_un_subscribe(
    const std::string& subscriptionId,
    Pistache::Http::ResponseWriter& response) {
  response.send(
      Pistache::Http::Code::Ok,
      "IndividualSubscriptionDocumentApiImpl::a_mf_status_change_un_subscribe "
      "API has not been implemented yet!\n");
}

}  // namespace api
}  // namespace amf
}  // namespace oai
