/**
 * NSSF NSSAI Availability
 * NSSF NSSAI Availability Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.4
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "NSSAIAvailabilityStoreApi.h"

#include "Helpers.h"
#include "nssf_config.hpp"
#include "sbi_helper.hpp"

extern std::unique_ptr<oai::config::nssf::nssf_config> nssf_cfg;

namespace oai {
namespace nssf_server {
namespace api {

using namespace oai::model::common::helpers;
using namespace oai::nssf_server::model;
using namespace oai::common::sbi;

const std::string NSSAIAvailabilityStoreApi::base =
    sbi_helper::NssfNssaiAvailabilityBase;

NSSAIAvailabilityStoreApi::NSSAIAvailabilityStoreApi(
    const std::shared_ptr<Pistache::Rest::Router>& rtr)
    : router(rtr) {}

void NSSAIAvailabilityStoreApi::init() {
  setupRoutes();
}

void NSSAIAvailabilityStoreApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Options(
      *router,
      base + nssf_cfg->local().get_sbi().get_api_version() +
          "/nssai-availability",
      Routes::bind(
          &NSSAIAvailabilityStoreApi::n_ssai_availability_options_handler,
          this));

  // Default handler, called when a route is not found
  router->addCustomHandler(Routes::bind(
      &NSSAIAvailabilityStoreApi::nssai_availability_store_api_default_handler,
      this));
}

std::pair<Pistache::Http::Code, std::string>
NSSAIAvailabilityStoreApi::handleParsingException(
    const std::exception& ex) const noexcept {
  try {
    throw;
  } catch (nlohmann::detail::exception& e) {
    return std::make_pair(Pistache::Http::Code::Bad_Request, e.what());
    // } catch (oai::nssf_server::helpers::ValidationException &e) {
    //     return std::make_pair(Pistache::Http::Code::Bad_Request, e.what());
  } catch (std::exception& e) {
    return std::make_pair(
        Pistache::Http::Code::Internal_Server_Error, e.what());
  }
}

std::pair<Pistache::Http::Code, std::string>
NSSAIAvailabilityStoreApi::handleOperationException(
    const std::exception& ex) const noexcept {
  return std::make_pair(Pistache::Http::Code::Internal_Server_Error, ex.what());
}

void NSSAIAvailabilityStoreApi::n_ssai_availability_options_handler(
    const Pistache::Rest::Request&, Pistache::Http::ResponseWriter response) {
  try {
    try {
      this->n_ssai_availability_options(response);
    } catch (Pistache::Http::HttpError& e) {
      response.send(static_cast<Pistache::Http::Code>(e.code()), e.what());
      return;
    } catch (std::exception& e) {
      const std::pair<Pistache::Http::Code, std::string> errorInfo =
          this->handleOperationException(e);
      response.send(errorInfo.first, errorInfo.second);
      return;
    }

  } catch (std::exception& e) {
    response.send(Pistache::Http::Code::Internal_Server_Error, e.what());
  }
}

void NSSAIAvailabilityStoreApi::nssai_availability_store_api_default_handler(
    const Pistache::Rest::Request&, Pistache::Http::ResponseWriter response) {
  response.send(
      Pistache::Http::Code::Not_Found, "The requested method does not exist");
}

}  // namespace api
}  // namespace nssf_server
}  // namespace oai
