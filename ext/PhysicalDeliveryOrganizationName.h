/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "rfc3280-PKIX1Explicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types`
 */

#ifndef	_PhysicalDeliveryOrganizationName_H_
#define	_PhysicalDeliveryOrganizationName_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PDSParameter.h"

#ifdef __cplusplus
extern "C" {
#endif

/* PhysicalDeliveryOrganizationName */
typedef PDSParameter_t	 PhysicalDeliveryOrganizationName_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PhysicalDeliveryOrganizationName;
asn_struct_free_f PhysicalDeliveryOrganizationName_free;
asn_struct_print_f PhysicalDeliveryOrganizationName_print;
asn_constr_check_f PhysicalDeliveryOrganizationName_constraint;
ber_type_decoder_f PhysicalDeliveryOrganizationName_decode_ber;
der_type_encoder_f PhysicalDeliveryOrganizationName_encode_der;
xer_type_decoder_f PhysicalDeliveryOrganizationName_decode_xer;
xer_type_encoder_f PhysicalDeliveryOrganizationName_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _PhysicalDeliveryOrganizationName_H_ */
#include <asn_internal.h>
