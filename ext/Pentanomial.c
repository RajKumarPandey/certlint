/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Algorithms88"
 * 	found in "rfc3279-PKIX1Algorithms88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types`
 */

#include "Pentanomial.h"

static asn_TYPE_member_t asn_MBR_Pentanomial_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Pentanomial, k1),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_INTEGER,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"k1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Pentanomial, k2),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_INTEGER,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"k2"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Pentanomial, k3),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_INTEGER,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"k3"
		},
};
static const ber_tlv_tag_t asn_DEF_Pentanomial_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Pentanomial_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 2 }, /* k1 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 1, -1, 1 }, /* k2 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 2, -2, 0 } /* k3 */
};
static asn_SEQUENCE_specifics_t asn_SPC_Pentanomial_specs_1 = {
	sizeof(struct Pentanomial),
	offsetof(struct Pentanomial, _asn_ctx),
	asn_MAP_Pentanomial_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Pentanomial = {
	"Pentanomial",
	"Pentanomial",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_Pentanomial_tags_1,
	sizeof(asn_DEF_Pentanomial_tags_1)
		/sizeof(asn_DEF_Pentanomial_tags_1[0]), /* 1 */
	asn_DEF_Pentanomial_tags_1,	/* Same as above */
	sizeof(asn_DEF_Pentanomial_tags_1)
		/sizeof(asn_DEF_Pentanomial_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Pentanomial_1,
	3,	/* Elements count */
	&asn_SPC_Pentanomial_specs_1	/* Additional specs */
};

