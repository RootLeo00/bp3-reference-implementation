/**
 * NSSF NS Selection
 * NSSF Network Slice Selection Service. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.1.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "NetworkSliceInformationDocumentApi.h"

#include "Helpers.h"
#include "nssf_config.hpp"
#include "sbi_helper.hpp"

extern std::unique_ptr<oai::config::nssf::nssf_config> nssf_cfg;

namespace oai {
namespace nssf_server {
namespace api {

using namespace oai::model::common::helpers;
using namespace oai::nssf_server::model;
using namespace oai::model::common;
using namespace oai::common::sbi;

const std::string NetworkSliceInformationDocumentApi::base =
    sbi_helper::NssfNsSelectionBase;

NetworkSliceInformationDocumentApi::NetworkSliceInformationDocumentApi(
    const std::shared_ptr<Pistache::Rest::Router>& rtr)
    : router(rtr) {}

void NetworkSliceInformationDocumentApi::init() {
  setupRoutes();
}

void NetworkSliceInformationDocumentApi::setupRoutes() {
  using namespace Pistache::Rest;

  Routes::Get(
      *router,
      base + nssf_cfg->local().get_sbi().get_api_version() +
          sbi_helper::NssfNsSelectionPathNetworSliceInformation,
      Routes::bind(
          &NetworkSliceInformationDocumentApi::n_s_selection_get_handler,
          this));

  // Default handler, called when a route is not found
  router->addCustomHandler(Routes::bind(
      &NetworkSliceInformationDocumentApi::
          network_slice_information_document_api_default_handler,
      this));
}

std::pair<Pistache::Http::Code, std::string>
NetworkSliceInformationDocumentApi::handleParsingException(
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
NetworkSliceInformationDocumentApi::handleOperationException(
    const std::exception& ex) const noexcept {
  return std::make_pair(Pistache::Http::Code::Internal_Server_Error, ex.what());
}

void NetworkSliceInformationDocumentApi::n_s_selection_get_handler(
    const Pistache::Rest::Request& request,
    Pistache::Http::ResponseWriter response) {
  try {
    // Getting the query params
    auto nfTypeQuery = request.query().get("nf-type");
    Pistache::Optional<NFType> nfType;
    if (!nfTypeQuery.isEmpty()) {
      NFType valueQuery_instance;
      if (fromStringValue(nfTypeQuery.get(), valueQuery_instance)) {
        nfType = Pistache::Some(valueQuery_instance);
      }
    }
    auto nfIdQuery = request.query().get("nf-id");
    Pistache::Optional<std::string> nfId;
    if (!nfIdQuery.isEmpty()) {
      std::string valueQuery_instance;
      if (fromStringValue(nfIdQuery.get(), valueQuery_instance)) {
        nfId = Pistache::Some(valueQuery_instance);
      }
    }
    auto sliceInfoRequestForRegistrationQuery = request.query().get(
        sbi_helper::NssfNsSelectionParametersSliceInfoRequestForRegistration);
    Pistache::Optional<SliceInfoForRegistration>
        sliceInfoRequestForRegistration;
    if (!sliceInfoRequestForRegistrationQuery.isEmpty()) {
      SliceInfoForRegistration valueQuery_instance;
      if (fromStringValueHelper(
              sliceInfoRequestForRegistrationQuery.get(),
              valueQuery_instance)) {
        sliceInfoRequestForRegistration = Pistache::Some(valueQuery_instance);
      }
    }
    auto sliceInfoRequestForPduSessionQuery =
        request.query().get("slice-info-request-for-pdu-session");
    Pistache::Optional<SliceInfoForPDUSession> sliceInfoRequestForPduSession;
    if (!sliceInfoRequestForPduSessionQuery.isEmpty()) {
      SliceInfoForPDUSession valueQuery_instance;
      if (fromStringValueHelper(
              sliceInfoRequestForPduSessionQuery.get(), valueQuery_instance)) {
        sliceInfoRequestForPduSession = Pistache::Some(valueQuery_instance);
      }
    }
    auto sliceInfoRequestForUeCuQuery =
        request.query().get("slice-info-request-for-ue-cu");
    Pistache::Optional<SliceInfoForUEConfigurationUpdate>
        sliceInfoRequestForUeCu;
    if (!sliceInfoRequestForUeCuQuery.isEmpty()) {
      SliceInfoForUEConfigurationUpdate valueQuery_instance;
      if (fromStringValueHelper(
              sliceInfoRequestForUeCuQuery.get(), valueQuery_instance)) {
        sliceInfoRequestForUeCu = Pistache::Some(valueQuery_instance);
      }
      Logger::nssf_app().error("NS Selection failure !!!");
      response.send(
          Pistache::Http::Code::Not_Found,
          "The requested method does not exist");
      return;
    }
    auto homePlmnIdQuery = request.query().get("home-plmn-id");
    Pistache::Optional<PlmnId> homePlmnId;
    if (!homePlmnIdQuery.isEmpty()) {
      PlmnId valueQuery_instance;
      if (fromStringValue(homePlmnIdQuery.get(), valueQuery_instance)) {
        homePlmnId = Pistache::Some(valueQuery_instance);
      }
    }
    auto taiQuery = request.query().get("tai");
    Pistache::Optional<Tai> tai;
    if (!taiQuery.isEmpty()) {
      Tai valueQuery_instance;
      if (fromStringValue(taiQuery.get(), valueQuery_instance)) {
        tai = Pistache::Some(valueQuery_instance);
      }
    }
    auto supportedFeaturesQuery = request.query().get("supported-features");
    Pistache::Optional<std::string> supportedFeatures;
    if (!supportedFeaturesQuery.isEmpty()) {
      std::string valueQuery_instance;
      if (fromStringValue(supportedFeaturesQuery.get(), valueQuery_instance)) {
        supportedFeatures = Pistache::Some(valueQuery_instance);
      }
    }

    try {
      this->n_s_selection_get(
          nfType, nfId, sliceInfoRequestForRegistration,
          sliceInfoRequestForPduSession, sliceInfoRequestForUeCu, homePlmnId,
          tai, supportedFeatures, response);
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

void NetworkSliceInformationDocumentApi::
    network_slice_information_document_api_default_handler(
        const Pistache::Rest::Request&,
        Pistache::Http::ResponseWriter response) {
  response.send(
      Pistache::Http::Code::Not_Found, "The requested method does not exist");
}

bool fromStringValueHelper(
    const std::string& inStr,
    oai::nssf_server::model::SliceInfoForRegistration& value) {
  Logger::nssf_sbi().info(
      " Query_PARAM::SLICE_INFO_RESGISTRATION - %s", inStr.c_str());
  nlohmann::json::parse(inStr.c_str()).get_to(value);
  return true;
}

bool fromStringValueHelper(
    const std::string& inStr,
    oai::nssf_server::model::SliceInfoForPDUSession& value) {
  Logger::nssf_sbi().info(
      " Query_PARAM slice-info-request-for-pdu-session - %s", inStr.c_str());
  nlohmann::json::parse(inStr.c_str()).get_to(value);
  return true;
}

bool fromStringValueHelper(
    const std::string& inStr,
    oai::nssf_server::model::SliceInfoForUEConfigurationUpdate& value) {
  Logger::nssf_sbi().info(
      " Query_PARAM slice-info-request-for-registration - %s", inStr.c_str());
  nlohmann::json::parse(inStr.c_str()).get_to(value);
  return true;
}

}  // namespace api
}  // namespace nssf_server
}  // namespace oai
