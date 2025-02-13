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

#ifndef FILE_NSSF_APP_HPP_SEEN
#define FILE_NSSF_APP_HPP_SEEN

#include <boost/atomic.hpp>
#include <string>

#include "3gpp_29.500.h"
#include "nssf_slice_availability.hpp"
#include "nssf_slice_selection.hpp"

namespace nssf {

class nssf_app {
 private:
  nssf_slice_select nssf_nss;
  nssf_slice_avail nssf_nsa;

 public:
  explicit nssf_app(const std::string& config_file);
  nssf_app(nssf_app const&) = delete;
  void operator=(nssf_app const&) = delete;

  virtual ~nssf_app();

  /*
   * Handle a Register NF Instance request
   * @param [const std::string &] nf_instance_id: Instance ID
   * @param [NFProfile &] nf_profile: NF profile
   * @param [int &] http_code: HTTP code used to return to the consumer
   * @param [const uint8_t] http_version: HTTP version
   * @param [ProblemDetails &] problem_details: Store details of the error
   * @return void
   */

  void handle_slice_info_for_registration(
      const SliceInfoForRegistration& slice_info,
      const oai::model::common::Tai& tai,
      const oai::model::common::PlmnId& home_plmnid,
      const std::string& features, int& http_code, const uint8_t http_version,
      oai::model::common::ProblemDetails& problem_details,
      AuthorizedNetworkSliceInfo& auth_slice_info);

  void handle_slice_info_for_pdu_session(
      const SliceInfoForPDUSession& slice_info,
      const oai::model::common::Tai& tai,
      const oai::model::common::PlmnId& home_plmnid,
      const std::string& features, int& http_code, const uint8_t http_version,
      oai::model::common::ProblemDetails& problem_details,
      AuthorizedNetworkSliceInfo& auth_slice_info);

  void handle_slice_info_for_ue_cu(
      const SliceInfoForUEConfigurationUpdate& slice_info,
      const oai::model::common::Tai& tai,
      const oai::model::common::PlmnId& home_plmnid,
      const std::string& features, int& http_code, const uint8_t http_version,
      oai::model::common::ProblemDetails& problem_details);

  void handle_create_nssai_availability(
      const std::string& nfId, const NssaiAvailabilityInfo& nssaiAvailInfo,
      AuthorizedNssaiAvailabilityInfo& auth_info, int& http_code,
      const uint8_t http_version,
      oai::model::common::ProblemDetails& problem_details);
};
}  // namespace nssf
#endif /* FILE_NSSF_APP_HPP_SEEN */
