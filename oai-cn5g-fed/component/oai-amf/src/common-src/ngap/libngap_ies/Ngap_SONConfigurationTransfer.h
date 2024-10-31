/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice
 * -no-gen-example -gen-APER -gen-UPER -no-gen-JER -gen-BER -D src`
 */

#ifndef _Ngap_SONConfigurationTransfer_H_
#define _Ngap_SONConfigurationTransfer_H_

#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_TargetRANNodeID.h"
#include "Ngap_SourceRANNodeID.h"
#include "Ngap_SONInformation.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Ngap_XnTNLConfigurationInfo;
struct Ngap_ProtocolExtensionContainer;

/* Ngap_SONConfigurationTransfer */
typedef struct Ngap_SONConfigurationTransfer {
  Ngap_TargetRANNodeID_t targetRANNodeID;
  Ngap_SourceRANNodeID_t sourceRANNodeID;
  Ngap_SONInformation_t sONInformation;
  struct Ngap_XnTNLConfigurationInfo* xnTNLConfigurationInfo; /* OPTIONAL */
  struct Ngap_ProtocolExtensionContainer* iE_Extensions;      /* OPTIONAL */
  /*
   * This type is extensible,
   * possible extensions are below.
   */

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} Ngap_SONConfigurationTransfer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_SONConfigurationTransfer;
extern asn_SEQUENCE_specifics_t asn_SPC_Ngap_SONConfigurationTransfer_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_SONConfigurationTransfer_1[5];

#ifdef __cplusplus
}
#endif

#endif /* _Ngap_SONConfigurationTransfer_H_ */
#include <asn_internal.h>
