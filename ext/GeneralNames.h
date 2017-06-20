/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Implicit88"
 * 	found in "rfc3280-PKIX1Implicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types`
 */

#ifndef	_GeneralNames_H_
#define	_GeneralNames_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GeneralName;

/* GeneralNames */
typedef struct GeneralNames {
	A_SEQUENCE_OF(struct GeneralName) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GeneralNames_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GeneralNames;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GeneralName.h"

#endif	/* _GeneralNames_H_ */
#include <asn_internal.h>
