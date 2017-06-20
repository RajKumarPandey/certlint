/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "rfc3280-PKIX1Explicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types`
 */

#ifndef	_DistinguishedName_H_
#define	_DistinguishedName_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RDNSequence.h"

#ifdef __cplusplus
extern "C" {
#endif

/* DistinguishedName */
typedef RDNSequence_t	 DistinguishedName_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DistinguishedName;
asn_struct_free_f DistinguishedName_free;
asn_struct_print_f DistinguishedName_print;
asn_constr_check_f DistinguishedName_constraint;
ber_type_decoder_f DistinguishedName_decode_ber;
der_type_encoder_f DistinguishedName_encode_der;
xer_type_decoder_f DistinguishedName_decode_xer;
xer_type_encoder_f DistinguishedName_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _DistinguishedName_H_ */
#include <asn_internal.h>
