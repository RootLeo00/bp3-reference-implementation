/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice
 * -no-gen-example -gen-APER -gen-UPER -no-gen-JER -gen-BER -D src`
 */

#include "Ngap_AreaScopeOfMDT-NR.h"

#include "Ngap_CellBasedMDT-NR.h"
#include "Ngap_TABasedMDT.h"
#include "Ngap_TAIBasedMDT.h"
#include "Ngap_ProtocolIE-SingleContainer.h"
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_Ngap_AreaScopeOfMDT_NR_constr_1
    CC_NOTUSED = {{0, 0}, -1};
#endif /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_Ngap_AreaScopeOfMDT_NR_constr_1
    CC_NOTUSED = {
        {APC_CONSTRAINED, 3, 3, 0, 4} /* (0..4) */,
        {APC_UNCONSTRAINED, -1, -1, 0, 0},
        0,
        0 /* No PER value map */
};
#endif /* !defined(ASN_DISABLE_UPER_SUPPORT) ||                                \
          !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_Ngap_AreaScopeOfMDT_NR_1[] = {
    {ATF_POINTER,
     0,
     offsetof(struct Ngap_AreaScopeOfMDT_NR, choice.cellBased),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_Ngap_CellBasedMDT_NR,
     0,
     {
#if !defined(ASN_DISABLE_OER_SUPPORT)
         0,
#endif /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
         0,
#endif /* !defined(ASN_DISABLE_UPER_SUPPORT) ||                                \
          !defined(ASN_DISABLE_APER_SUPPORT) */
         0},
     0,
     0, /* No default value */
     "cellBased"},
    {ATF_POINTER,
     0,
     offsetof(struct Ngap_AreaScopeOfMDT_NR, choice.tABased),
     (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_Ngap_TABasedMDT,
     0,
     {
#if !defined(ASN_DISABLE_OER_SUPPORT)
         0,
#endif /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
         0,
#endif /* !defined(ASN_DISABLE_UPER_SUPPORT) ||                                \
          !defined(ASN_DISABLE_APER_SUPPORT) */
         0},
     0,
     0, /* No default value */
     "tABased"},
    {ATF_NOFLAGS,
     0,
     offsetof(struct Ngap_AreaScopeOfMDT_NR, choice.pLMNWide),
     (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_NULL,
     0,
     {
#if !defined(ASN_DISABLE_OER_SUPPORT)
         0,
#endif /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
         0,
#endif /* !defined(ASN_DISABLE_UPER_SUPPORT) ||                                \
          !defined(ASN_DISABLE_APER_SUPPORT) */
         0},
     0,
     0, /* No default value */
     "pLMNWide"},
    {ATF_POINTER,
     0,
     offsetof(struct Ngap_AreaScopeOfMDT_NR, choice.tAIBased),
     (ASN_TAG_CLASS_CONTEXT | (3 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_Ngap_TAIBasedMDT,
     0,
     {
#if !defined(ASN_DISABLE_OER_SUPPORT)
         0,
#endif /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
         0,
#endif /* !defined(ASN_DISABLE_UPER_SUPPORT) ||                                \
          !defined(ASN_DISABLE_APER_SUPPORT) */
         0},
     0,
     0, /* No default value */
     "tAIBased"},
    {ATF_POINTER,
     0,
     offsetof(struct Ngap_AreaScopeOfMDT_NR, choice.choice_Extensions),
     (ASN_TAG_CLASS_CONTEXT | (4 << 2)),
     -1, /* IMPLICIT tag at current level */
     &asn_DEF_Ngap_ProtocolIE_SingleContainer_9618P1,
     0,
     {
#if !defined(ASN_DISABLE_OER_SUPPORT)
         0,
#endif /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
         0,
#endif /* !defined(ASN_DISABLE_UPER_SUPPORT) ||                                \
          !defined(ASN_DISABLE_APER_SUPPORT) */
         0},
     0,
     0, /* No default value */
     "choice-Extensions"},
};
static const asn_TYPE_tag2member_t asn_MAP_Ngap_AreaScopeOfMDT_NR_tag2el_1[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* cellBased */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}, /* tABased */
    {(ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0}, /* pLMNWide */
    {(ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0}, /* tAIBased */
    {(ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0}  /* choice-Extensions */
};
asn_CHOICE_specifics_t asn_SPC_Ngap_AreaScopeOfMDT_NR_specs_1 = {
    sizeof(struct Ngap_AreaScopeOfMDT_NR),
    offsetof(struct Ngap_AreaScopeOfMDT_NR, _asn_ctx),
    offsetof(struct Ngap_AreaScopeOfMDT_NR, present),
    sizeof(((struct Ngap_AreaScopeOfMDT_NR*) 0)->present),
    asn_MAP_Ngap_AreaScopeOfMDT_NR_tag2el_1,
    5, /* Count of tags in the map */
    0,
    0,
    -1 /* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_Ngap_AreaScopeOfMDT_NR = {
    "AreaScopeOfMDT-NR",
    "AreaScopeOfMDT-NR",
    &asn_OP_CHOICE,
    0, /* No effective tags (pointer) */
    0, /* No effective tags (count) */
    0, /* No tags (pointer) */
    0, /* No tags (count) */
    {
#if !defined(ASN_DISABLE_OER_SUPPORT)
        &asn_OER_type_Ngap_AreaScopeOfMDT_NR_constr_1,
#endif /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
        &asn_PER_type_Ngap_AreaScopeOfMDT_NR_constr_1,
#endif /* !defined(ASN_DISABLE_UPER_SUPPORT) ||                                \
          !defined(ASN_DISABLE_APER_SUPPORT) */
        CHOICE_constraint},
    asn_MBR_Ngap_AreaScopeOfMDT_NR_1,
    5,                                      /* Elements count */
    &asn_SPC_Ngap_AreaScopeOfMDT_NR_specs_1 /* Additional specs */
};
