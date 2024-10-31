/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice
 * -no-gen-example -gen-APER -gen-UPER -no-gen-JER -gen-BER -D src`
 */

#ifndef _Ngap_EmergencyAreaID_H_
#define _Ngap_EmergencyAreaID_H_

#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Ngap_EmergencyAreaID */
typedef OCTET_STRING_t Ngap_EmergencyAreaID_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Ngap_EmergencyAreaID_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_EmergencyAreaID;
asn_struct_free_f Ngap_EmergencyAreaID_free;
asn_struct_print_f Ngap_EmergencyAreaID_print;
asn_constr_check_f Ngap_EmergencyAreaID_constraint;
ber_type_decoder_f Ngap_EmergencyAreaID_decode_ber;
der_type_encoder_f Ngap_EmergencyAreaID_encode_der;
xer_type_decoder_f Ngap_EmergencyAreaID_decode_xer;
xer_type_encoder_f Ngap_EmergencyAreaID_encode_xer;
oer_type_decoder_f Ngap_EmergencyAreaID_decode_oer;
oer_type_encoder_f Ngap_EmergencyAreaID_encode_oer;
per_type_decoder_f Ngap_EmergencyAreaID_decode_uper;
per_type_encoder_f Ngap_EmergencyAreaID_encode_uper;
per_type_decoder_f Ngap_EmergencyAreaID_decode_aper;
per_type_encoder_f Ngap_EmergencyAreaID_encode_aper;

#ifdef __cplusplus
}
#endif

#endif /* _Ngap_EmergencyAreaID_H_ */
#include <asn_internal.h>
