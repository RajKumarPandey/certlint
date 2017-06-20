/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Explicit88"
 * 	found in "rfc3280-PKIX1Explicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types`
 */

#include "UnformattedPostalAddress.h"

static const int permitted_alphabet_table_3[256] = {
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	/*                  */
 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,	/*                  */
 1, 0, 0, 0, 0, 0, 0, 2, 3, 4, 0, 5, 6, 7, 8, 9,	/* .      '() +,-./ */
10,11,12,13,14,15,16,17,18,19,20, 0, 0,21, 0,22,	/* 0123456789:  = ? */
 0,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,	/*  ABCDEFGHIJKLMNO */
38,39,40,41,42,43,44,45,46,47,48, 0, 0, 0, 0, 0,	/* PQRSTUVWXYZ      */
 0,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,	/*  abcdefghijklmno */
64,65,66,67,68,69,70,71,72,73,74, 0, 0, 0, 0, 0,	/* pqrstuvwxyz      */
};

static int check_permitted_alphabet_3(const void *sptr) {
	const int *table = permitted_alphabet_table_3;
	/* The underlying type is PrintableString */
	const PrintableString_t *st = (const PrintableString_t *)sptr;
	const uint8_t *ch = st->buf;
	const uint8_t *end = ch + st->size;
	
	for(; ch < end; ch++) {
		uint8_t cv = *ch;
		if(!table[cv]) return -1;
	}
	return 0;
}

static int
memb_PrintableString_constraint_2(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const PrintableString_t *st = (const PrintableString_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 1 && size <= 30)
		 && !check_permitted_alphabet_3(st)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_printable_address_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 6)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_teletex_string_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const TeletexString_t *st = (const TeletexString_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 1 && size <= 180)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_TYPE_member_t asn_MBR_printable_address_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (19 << 2)),
		0,
		&asn_DEF_PrintableString,
		memb_PrintableString_constraint_2,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static const ber_tlv_tag_t asn_DEF_printable_address_tags_2[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_printable_address_specs_2 = {
	sizeof(struct printable_address),
	offsetof(struct printable_address, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_printable_address_2 = {
	"printable-address",
	"printable-address",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_printable_address_tags_2,
	sizeof(asn_DEF_printable_address_tags_2)
		/sizeof(asn_DEF_printable_address_tags_2[0]), /* 1 */
	asn_DEF_printable_address_tags_2,	/* Same as above */
	sizeof(asn_DEF_printable_address_tags_2)
		/sizeof(asn_DEF_printable_address_tags_2[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_printable_address_2,
	1,	/* Single element */
	&asn_SPC_printable_address_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_UnformattedPostalAddress_1[] = {
	{ ATF_POINTER, 2, offsetof(struct UnformattedPostalAddress, printable_address),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_printable_address_2,
		memb_printable_address_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"printable-address"
		},
	{ ATF_POINTER, 1, offsetof(struct UnformattedPostalAddress, teletex_string),
		(ASN_TAG_CLASS_UNIVERSAL | (20 << 2)),
		0,
		&asn_DEF_TeletexString,
		memb_teletex_string_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"teletex-string"
		},
};
static const ber_tlv_tag_t asn_DEF_UnformattedPostalAddress_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (17 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UnformattedPostalAddress_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 0, 0, 0 }, /* printable-address */
    { (ASN_TAG_CLASS_UNIVERSAL | (20 << 2)), 1, 0, 0 } /* teletex-string */
};
static const uint8_t asn_MAP_UnformattedPostalAddress_mmap_1[(2 + (8 * sizeof(unsigned int)) - 1) / 8] = {
	(0 << 7) | (0 << 6)
};
static asn_SET_specifics_t asn_SPC_UnformattedPostalAddress_specs_1 = {
	sizeof(struct UnformattedPostalAddress),
	offsetof(struct UnformattedPostalAddress, _asn_ctx),
	offsetof(struct UnformattedPostalAddress, _presence_map),
	asn_MAP_UnformattedPostalAddress_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_UnformattedPostalAddress_tag2el_1,	/* Same as above */
	2,	/* Count of tags in the CXER map */
	0,	/* Whether extensible */
	(unsigned int *)asn_MAP_UnformattedPostalAddress_mmap_1	/* Mandatory elements map */
};
asn_TYPE_descriptor_t asn_DEF_UnformattedPostalAddress = {
	"UnformattedPostalAddress",
	"UnformattedPostalAddress",
	SET_free,
	SET_print,
	SET_constraint,
	SET_decode_ber,
	SET_encode_der,
	SET_decode_xer,
	SET_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_UnformattedPostalAddress_tags_1,
	sizeof(asn_DEF_UnformattedPostalAddress_tags_1)
		/sizeof(asn_DEF_UnformattedPostalAddress_tags_1[0]), /* 1 */
	asn_DEF_UnformattedPostalAddress_tags_1,	/* Same as above */
	sizeof(asn_DEF_UnformattedPostalAddress_tags_1)
		/sizeof(asn_DEF_UnformattedPostalAddress_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_UnformattedPostalAddress_1,
	2,	/* Elements count */
	&asn_SPC_UnformattedPostalAddress_specs_1	/* Additional specs */
};

