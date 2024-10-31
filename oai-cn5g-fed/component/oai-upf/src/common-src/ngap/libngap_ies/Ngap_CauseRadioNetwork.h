/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice
 * -no-gen-example -gen-APER -gen-UPER -no-gen-JER -gen-BER -D src`
 */

#ifndef _Ngap_CauseRadioNetwork_H_
#define _Ngap_CauseRadioNetwork_H_

#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_CauseRadioNetwork {
  Ngap_CauseRadioNetwork_unspecified                           = 0,
  Ngap_CauseRadioNetwork_txnrelocoverall_expiry                = 1,
  Ngap_CauseRadioNetwork_successful_handover                   = 2,
  Ngap_CauseRadioNetwork_release_due_to_ngran_generated_reason = 3,
  Ngap_CauseRadioNetwork_release_due_to_5gc_generated_reason   = 4,
  Ngap_CauseRadioNetwork_handover_cancelled                    = 5,
  Ngap_CauseRadioNetwork_partial_handover                      = 6,
  Ngap_CauseRadioNetwork_ho_failure_in_target_5GC_ngran_node_or_target_system =
      7,
  Ngap_CauseRadioNetwork_ho_target_not_allowed                       = 8,
  Ngap_CauseRadioNetwork_tngrelocoverall_expiry                      = 9,
  Ngap_CauseRadioNetwork_tngrelocprep_expiry                         = 10,
  Ngap_CauseRadioNetwork_cell_not_available                          = 11,
  Ngap_CauseRadioNetwork_unknown_targetID                            = 12,
  Ngap_CauseRadioNetwork_no_radio_resources_available_in_target_cell = 13,
  Ngap_CauseRadioNetwork_unknown_local_UE_NGAP_ID                    = 14,
  Ngap_CauseRadioNetwork_inconsistent_remote_UE_NGAP_ID              = 15,
  Ngap_CauseRadioNetwork_handover_desirable_for_radio_reason         = 16,
  Ngap_CauseRadioNetwork_time_critical_handover                      = 17,
  Ngap_CauseRadioNetwork_resource_optimisation_handover              = 18,
  Ngap_CauseRadioNetwork_reduce_load_in_serving_cell                 = 19,
  Ngap_CauseRadioNetwork_user_inactivity                             = 20,
  Ngap_CauseRadioNetwork_radio_connection_with_ue_lost               = 21,
  Ngap_CauseRadioNetwork_radio_resources_not_available               = 22,
  Ngap_CauseRadioNetwork_invalid_qos_combination                     = 23,
  Ngap_CauseRadioNetwork_failure_in_radio_interface_procedure        = 24,
  Ngap_CauseRadioNetwork_interaction_with_other_procedure            = 25,
  Ngap_CauseRadioNetwork_unknown_PDU_session_ID                      = 26,
  Ngap_CauseRadioNetwork_unkown_qos_flow_ID                          = 27,
  Ngap_CauseRadioNetwork_multiple_PDU_session_ID_instances           = 28,
  Ngap_CauseRadioNetwork_multiple_qos_flow_ID_instances              = 29,
  Ngap_CauseRadioNetwork_encryption_and_or_integrity_protection_algorithms_not_supported =
      30,
  Ngap_CauseRadioNetwork_ng_intra_system_handover_triggered               = 31,
  Ngap_CauseRadioNetwork_ng_inter_system_handover_triggered               = 32,
  Ngap_CauseRadioNetwork_xn_handover_triggered                            = 33,
  Ngap_CauseRadioNetwork_not_supported_5QI_value                          = 34,
  Ngap_CauseRadioNetwork_ue_context_transfer                              = 35,
  Ngap_CauseRadioNetwork_ims_voice_eps_fallback_or_rat_fallback_triggered = 36,
  Ngap_CauseRadioNetwork_up_integrity_protection_not_possible             = 37,
  Ngap_CauseRadioNetwork_up_confidentiality_protection_not_possible       = 38,
  Ngap_CauseRadioNetwork_slice_not_supported                              = 39,
  Ngap_CauseRadioNetwork_ue_in_rrc_inactive_state_not_reachable           = 40,
  Ngap_CauseRadioNetwork_redirection                                      = 41,
  Ngap_CauseRadioNetwork_resources_not_available_for_the_slice            = 42,
  Ngap_CauseRadioNetwork_ue_max_integrity_protected_data_rate_reason      = 43,
  Ngap_CauseRadioNetwork_release_due_to_cn_detected_mobility              = 44,
  /*
   * Enumeration is extensible
   */
  Ngap_CauseRadioNetwork_n26_interface_not_available = 45,
  Ngap_CauseRadioNetwork_release_due_to_pre_emption  = 46,
  Ngap_CauseRadioNetwork_multiple_location_reporting_reference_ID_instances =
      47,
  Ngap_CauseRadioNetwork_rsn_not_available_for_the_up = 48,
  Ngap_CauseRadioNetwork_npn_access_denied            = 49,
  Ngap_CauseRadioNetwork_cag_only_access_denied       = 50,
  Ngap_CauseRadioNetwork_insufficient_ue_capabilities = 51
} e_Ngap_CauseRadioNetwork;

/* Ngap_CauseRadioNetwork */
typedef long Ngap_CauseRadioNetwork_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Ngap_CauseRadioNetwork_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_CauseRadioNetwork;
extern const asn_INTEGER_specifics_t asn_SPC_Ngap_CauseRadioNetwork_specs_1;
asn_struct_free_f Ngap_CauseRadioNetwork_free;
asn_struct_print_f Ngap_CauseRadioNetwork_print;
asn_constr_check_f Ngap_CauseRadioNetwork_constraint;
ber_type_decoder_f Ngap_CauseRadioNetwork_decode_ber;
der_type_encoder_f Ngap_CauseRadioNetwork_encode_der;
xer_type_decoder_f Ngap_CauseRadioNetwork_decode_xer;
xer_type_encoder_f Ngap_CauseRadioNetwork_encode_xer;
oer_type_decoder_f Ngap_CauseRadioNetwork_decode_oer;
oer_type_encoder_f Ngap_CauseRadioNetwork_encode_oer;
per_type_decoder_f Ngap_CauseRadioNetwork_decode_uper;
per_type_encoder_f Ngap_CauseRadioNetwork_encode_uper;
per_type_decoder_f Ngap_CauseRadioNetwork_decode_aper;
per_type_encoder_f Ngap_CauseRadioNetwork_encode_aper;

#ifdef __cplusplus
}
#endif

#endif /* _Ngap_CauseRadioNetwork_H_ */
#include <asn_internal.h>
