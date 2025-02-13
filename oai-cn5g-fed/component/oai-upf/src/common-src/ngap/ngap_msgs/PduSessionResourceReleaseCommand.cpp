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

#include "PduSessionResourceReleaseCommand.hpp"

#include "logger.hpp"
#include "utils.hpp"

namespace oai::ngap {

//------------------------------------------------------------------------------
PduSessionResourceReleaseCommandMsg::PduSessionResourceReleaseCommandMsg()
    : NgapUeMessage() {
  m_PduSessionResourceReleaseCommandIes = nullptr;
  m_RanPagingPriority                   = std::nullopt;
  m_NasPdu                              = std::nullopt;

  setMessageType(NgapMessageType::PDU_SESSION_RESOURCE_RELEASE_COMMAND);
  initialize();
}

//------------------------------------------------------------------------------
PduSessionResourceReleaseCommandMsg::~PduSessionResourceReleaseCommandMsg() {}

//------------------------------------------------------------------------------
void PduSessionResourceReleaseCommandMsg::initialize() {
  m_PduSessionResourceReleaseCommandIes =
      &(ngapPdu->choice.initiatingMessage->value.choice
            .PDUSessionResourceReleaseCommand);
}

//------------------------------------------------------------------------------
void PduSessionResourceReleaseCommandMsg::setAmfUeNgapId(const uint64_t& id) {
  NgapUeMessage::m_AmfUeNgapId.set(id);

  Ngap_PDUSessionResourceReleaseCommandIEs_t* ie =
      (Ngap_PDUSessionResourceReleaseCommandIEs_t*) calloc(
          1, sizeof(Ngap_PDUSessionResourceReleaseCommandIEs_t));

  ie->id          = Ngap_ProtocolIE_ID_id_AMF_UE_NGAP_ID;
  ie->criticality = Ngap_Criticality_reject;
  ie->value.present =
      Ngap_PDUSessionResourceReleaseCommandIEs__value_PR_AMF_UE_NGAP_ID;

  int ret =
      NgapUeMessage::m_AmfUeNgapId.encode(ie->value.choice.AMF_UE_NGAP_ID);
  if (!ret) {
    Logger::nas_mm().warn("Encode AMF_UE_NGAP_ID IE error");
    oai::utils::utils::free_wrapper((void**) &ie);
    return;
  }

  ret = ASN_SEQUENCE_ADD(
      &m_PduSessionResourceReleaseCommandIes->protocolIEs.list, ie);
  if (ret != 0) Logger::nas_mm().warn("Encode AMF_UE_NGAP_ID IE error");
}

//------------------------------------------------------------------------------
void PduSessionResourceReleaseCommandMsg::setRanUeNgapId(
    const uint32_t& ranUeNgapId) {
  NgapUeMessage::m_RanUeNgapId.set(ranUeNgapId);

  Ngap_PDUSessionResourceReleaseCommandIEs_t* ie =
      (Ngap_PDUSessionResourceReleaseCommandIEs_t*) calloc(
          1, sizeof(Ngap_PDUSessionResourceReleaseCommandIEs_t));
  ie->id          = Ngap_ProtocolIE_ID_id_RAN_UE_NGAP_ID;
  ie->criticality = Ngap_Criticality_reject;
  ie->value.present =
      Ngap_PDUSessionResourceReleaseCommandIEs__value_PR_RAN_UE_NGAP_ID;

  int ret =
      NgapUeMessage::m_RanUeNgapId.encode(ie->value.choice.RAN_UE_NGAP_ID);
  if (!ret) {
    Logger::nas_mm().warn("Encode RAN_UE_NGAP_ID IE error");
    oai::utils::utils::free_wrapper((void**) &ie);
    return;
  }

  ret = ASN_SEQUENCE_ADD(
      &m_PduSessionResourceReleaseCommandIes->protocolIEs.list, ie);
  if (ret != 0) Logger::nas_mm().warn("Encode RAN_UE_NGAP_ID IE error");
}

//------------------------------------------------------------------------------
void PduSessionResourceReleaseCommandMsg::setRanPagingPriority(
    const uint32_t& priority) {
  RanPagingPriority tmp = {};
  tmp.set(priority);
  m_RanPagingPriority = std::optional<RanPagingPriority>(tmp);

  Ngap_PDUSessionResourceReleaseCommandIEs_t* ie =
      (Ngap_PDUSessionResourceReleaseCommandIEs_t*) calloc(
          1, sizeof(Ngap_PDUSessionResourceReleaseCommandIEs_t));
  ie->id          = Ngap_ProtocolIE_ID_id_RANPagingPriority;
  ie->criticality = Ngap_Criticality_ignore;
  ie->value.present =
      Ngap_PDUSessionResourceReleaseCommandIEs__value_PR_RANPagingPriority;

  int ret =
      m_RanPagingPriority.value().encode(ie->value.choice.RANPagingPriority);
  if (!ret) {
    Logger::nas_mm().warn("Encode RANPagingPriority IE error");
    oai::utils::utils::free_wrapper((void**) &ie);
    return;
  }

  ret = ASN_SEQUENCE_ADD(
      &m_PduSessionResourceReleaseCommandIes->protocolIEs.list, ie);
  if (ret != 0) Logger::nas_mm().warn("Encode RANPagingPriority IE error");
}

//------------------------------------------------------------------------------
bool PduSessionResourceReleaseCommandMsg::getRanPagingPriority(
    uint32_t& priority) const {
  if (!m_RanPagingPriority.has_value()) return false;
  priority = m_RanPagingPriority.value().get();
  return true;
}

//------------------------------------------------------------------------------
void PduSessionResourceReleaseCommandMsg::setNasPdu(const bstring& pdu) {
  NasPdu tmp = {};
  tmp.set(pdu);
  m_NasPdu = std::optional<NasPdu>(tmp);

  Ngap_PDUSessionResourceReleaseCommandIEs_t* ie =
      (Ngap_PDUSessionResourceReleaseCommandIEs_t*) calloc(
          1, sizeof(Ngap_PDUSessionResourceReleaseCommandIEs_t));
  ie->id          = Ngap_ProtocolIE_ID_id_NAS_PDU;
  ie->criticality = Ngap_Criticality_reject;
  ie->value.present =
      Ngap_PDUSessionResourceReleaseCommandIEs__value_PR_NAS_PDU;

  int ret = m_NasPdu.value().encode(ie->value.choice.NAS_PDU);
  if (!ret) {
    Logger::nas_mm().warn("encode NAS_PDU IE error");
    oai::utils::utils::free_wrapper((void**) &ie);
    return;
  }

  ret = ASN_SEQUENCE_ADD(
      &m_PduSessionResourceReleaseCommandIes->protocolIEs.list, ie);
  if (ret != 0) Logger::nas_mm().warn("Encode NAS_PDU IE error");
}

//------------------------------------------------------------------------------
bool PduSessionResourceReleaseCommandMsg::getNasPdu(bstring& pdu) const {
  if (!m_NasPdu.has_value()) return false;
  return m_NasPdu.value().get(pdu);
}

//------------------------------------------------------------------------------
void PduSessionResourceReleaseCommandMsg::setPduSessionResourceToReleaseList(
    const std::vector<PDUSessionResourceToReleaseItem_t>& list) {
  std::vector<PduSessionResourceToReleaseItemRelCmd> itemRelCmdList;

  for (int i = 0; i < list.size(); i++) {
    PduSessionResourceToReleaseItemRelCmd itemRelCmd = {};
    PduSessionId pduSessionId                        = {};
    pduSessionId.set(list[i].pduSessionId);
    itemRelCmd.set(
        pduSessionId, list[i].pduSessionResourceReleaseCommandTransfer);
    itemRelCmdList.push_back(itemRelCmd);
  }

  m_PduSessionResourceToReleaseList.set(itemRelCmdList);

  Ngap_PDUSessionResourceReleaseCommandIEs_t* ie =
      (Ngap_PDUSessionResourceReleaseCommandIEs_t*) calloc(
          1, sizeof(Ngap_PDUSessionResourceReleaseCommandIEs_t));

  ie->id          = Ngap_ProtocolIE_ID_id_PDUSessionResourceToReleaseListRelCmd;
  ie->criticality = Ngap_Criticality_reject;
  ie->value.present =
      Ngap_PDUSessionResourceReleaseCommandIEs__value_PR_PDUSessionResourceToReleaseListRelCmd;

  int ret = m_PduSessionResourceToReleaseList.encode(
      ie->value.choice.PDUSessionResourceToReleaseListRelCmd);
  if (!ret) {
    Logger::nas_mm().warn(
        "Encode PDUSessionResourceToReleaseListRelCmd IE error");
    return;
  }

  ret = ASN_SEQUENCE_ADD(
      &m_PduSessionResourceReleaseCommandIes->protocolIEs.list, ie);
  if (ret != 0)
    Logger::nas_mm().warn(
        "Encode PDUSessionResourceToReleaseListRelCmd IE error");
}

//------------------------------------------------------------------------------
bool PduSessionResourceReleaseCommandMsg::getPduSessionResourceToReleaseList(
    std::vector<PDUSessionResourceToReleaseItem_t>& list) const {
  std::vector<PduSessionResourceToReleaseItemRelCmd> itemRelCmdList;
  m_PduSessionResourceToReleaseList.get(itemRelCmdList);

  for (auto& item : itemRelCmdList) {
    PDUSessionResourceToReleaseItem_t rel = {};
    PduSessionId pduSessionId             = {};

    item.get(pduSessionId, rel.pduSessionResourceReleaseCommandTransfer);
    pduSessionId.get(rel.pduSessionId);

    list.push_back(rel);
  }

  return true;
}

//------------------------------------------------------------------------------
bool PduSessionResourceReleaseCommandMsg::decode(Ngap_NGAP_PDU_t* ngapMsgPdu) {
  ngapPdu = ngapMsgPdu;

  if (ngapPdu->present == Ngap_NGAP_PDU_PR_initiatingMessage) {
    if (ngapPdu->choice.initiatingMessage &&
        ngapPdu->choice.initiatingMessage->procedureCode ==
            Ngap_ProcedureCode_id_PDUSessionResourceRelease &&
        ngapPdu->choice.initiatingMessage->criticality ==
            Ngap_Criticality_reject &&
        ngapPdu->choice.initiatingMessage->value.present ==
            Ngap_InitiatingMessage__value_PR_PDUSessionResourceReleaseCommand) {
      m_PduSessionResourceReleaseCommandIes =
          &ngapPdu->choice.initiatingMessage->value.choice
               .PDUSessionResourceReleaseCommand;
    } else {
      Logger::nas_mm().warn(
          "Check PDUSessionResourceReleaseCommand message error!");
      return false;
    }
  } else {
    Logger::nas_mm().warn("MessageType error");
    return false;
  }

  for (int i = 0;
       i < m_PduSessionResourceReleaseCommandIes->protocolIEs.list.count; i++) {
    switch (
        m_PduSessionResourceReleaseCommandIes->protocolIEs.list.array[i]->id) {
      case Ngap_ProtocolIE_ID_id_AMF_UE_NGAP_ID: {
        if (m_PduSessionResourceReleaseCommandIes->protocolIEs.list.array[i]
                    ->criticality == Ngap_Criticality_reject &&
            m_PduSessionResourceReleaseCommandIes->protocolIEs.list.array[i]
                    ->value.present ==
                Ngap_PDUSessionResourceReleaseCommandIEs__value_PR_AMF_UE_NGAP_ID) {
          if (!NgapUeMessage::m_AmfUeNgapId.decode(
                  m_PduSessionResourceReleaseCommandIes->protocolIEs.list
                      .array[i]
                      ->value.choice.AMF_UE_NGAP_ID)) {
            Logger::nas_mm().warn("Decoded NGAP AMF_UE_NGAP_ID IE error");
            return false;
          }
        } else {
          Logger::nas_mm().warn("Decoded NGAP AMF_UE_NGAP_ID IE error");
          return false;
        }
      } break;

      case Ngap_ProtocolIE_ID_id_RAN_UE_NGAP_ID: {
        if (m_PduSessionResourceReleaseCommandIes->protocolIEs.list.array[i]
                    ->criticality == Ngap_Criticality_reject &&
            m_PduSessionResourceReleaseCommandIes->protocolIEs.list.array[i]
                    ->value.present ==
                Ngap_PDUSessionResourceReleaseCommandIEs__value_PR_RAN_UE_NGAP_ID) {
          if (!NgapUeMessage::m_RanUeNgapId.decode(
                  m_PduSessionResourceReleaseCommandIes->protocolIEs.list
                      .array[i]
                      ->value.choice.RAN_UE_NGAP_ID)) {
            Logger::nas_mm().warn("Decoded NGAP RAN_UE_NGAP_ID IE error");
            return false;
          }
        } else {
          Logger::nas_mm().warn("Decoded NGAP RAN_UE_NGAP_ID IE error");
          return false;
        }
      } break;

      case Ngap_ProtocolIE_ID_id_RANPagingPriority: {
        if (m_PduSessionResourceReleaseCommandIes->protocolIEs.list.array[i]
                    ->criticality == Ngap_Criticality_ignore &&
            m_PduSessionResourceReleaseCommandIes->protocolIEs.list.array[i]
                    ->value.present ==
                Ngap_PDUSessionResourceReleaseCommandIEs__value_PR_RANPagingPriority) {
          RanPagingPriority tmp = {};
          if (!tmp.decode(
                  m_PduSessionResourceReleaseCommandIes->protocolIEs.list
                      .array[i]
                      ->value.choice.RANPagingPriority)) {
            Logger::nas_mm().warn("Decoded NGAP RANPagingPriority IE error");
            return false;
          }
          m_RanPagingPriority = std::optional<RanPagingPriority>(tmp);
        } else {
          Logger::nas_mm().warn("Decoded NGAP RANPagingPriority IE error");
          return false;
        }
      } break;

      case Ngap_ProtocolIE_ID_id_NAS_PDU: {
        if (m_PduSessionResourceReleaseCommandIes->protocolIEs.list.array[i]
                    ->criticality == Ngap_Criticality_reject &&
            m_PduSessionResourceReleaseCommandIes->protocolIEs.list.array[i]
                    ->value.present ==
                Ngap_PDUSessionResourceReleaseCommandIEs__value_PR_NAS_PDU) {
          NasPdu tmp = {};
          if (!tmp.decode(
                  m_PduSessionResourceReleaseCommandIes->protocolIEs.list
                      .array[i]
                      ->value.choice.NAS_PDU)) {
            Logger::nas_mm().warn("Decoded NGAP NAS_PDU IE error");
            return false;
          }
          m_NasPdu = std::optional<NasPdu>(tmp);
        } else {
          Logger::nas_mm().warn("Decoded NGAP NAS_PDU IE error");
          return false;
        }
      } break;

      case Ngap_ProtocolIE_ID_id_PDUSessionResourceToReleaseListRelCmd: {
        if (m_PduSessionResourceReleaseCommandIes->protocolIEs.list.array[i]
                    ->criticality == Ngap_Criticality_reject &&
            m_PduSessionResourceReleaseCommandIes->protocolIEs.list.array[i]
                    ->value.present ==
                Ngap_PDUSessionResourceReleaseCommandIEs__value_PR_PDUSessionResourceToReleaseListRelCmd) {
          if (!m_PduSessionResourceToReleaseList.decode(
                  m_PduSessionResourceReleaseCommandIes->protocolIEs.list
                      .array[i]
                      ->value.choice.PDUSessionResourceToReleaseListRelCmd)) {
            Logger::nas_mm().warn(
                "Decoded NGAP PDUSessionResourceToReleaseListRelCmd IE error");
            return false;
          }
        } else {
          Logger::nas_mm().warn(
              "Decoded NGAP PDUSessionResourceToReleaseListRelCmd IE error");
          return false;
        }
      } break;
      default: {
        Logger::nas_mm().warn("Decoded NGAP message PDU error");
        return false;
      }
    }
  }

  return true;
}
}  // namespace oai::ngap
