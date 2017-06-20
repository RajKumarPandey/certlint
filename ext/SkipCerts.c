/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "PKIX1Implicit88"
 * 	found in "rfc3280-PKIX1Implicit88.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types`
 */

#include "SkipCerts.h"

int
SkipCerts_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const INTEGER_t *st = (const INTEGER_t *)sptr;
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Check if the sign bit is present */
	value = st->buf ? ((st->buf[0] & 0x80) ? -1 : 1) : 0;
	
	if((value >= 0)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using INTEGER,
 * so here we adjust the DEF accordingly.
 */
static void
SkipCerts_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_INTEGER.free_struct;
	td->print_struct   = asn_DEF_INTEGER.print_struct;
	td->check_constraints = asn_DEF_INTEGER.check_constraints;
	td->ber_decoder    = asn_DEF_INTEGER.ber_decoder;
	td->der_encoder    = asn_DEF_INTEGER.der_encoder;
	td->xer_decoder    = asn_DEF_INTEGER.xer_decoder;
	td->xer_encoder    = asn_DEF_INTEGER.xer_encoder;
	td->uper_decoder   = asn_DEF_INTEGER.uper_decoder;
	td->uper_encoder   = asn_DEF_INTEGER.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_INTEGER.per_constraints;
	td->elements       = asn_DEF_INTEGER.elements;
	td->elements_count = asn_DEF_INTEGER.elements_count;
	td->specifics      = asn_DEF_INTEGER.specifics;
}

void
SkipCerts_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	SkipCerts_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
SkipCerts_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	SkipCerts_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
SkipCerts_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	SkipCerts_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
SkipCerts_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	SkipCerts_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
SkipCerts_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	SkipCerts_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
SkipCerts_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	SkipCerts_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static const ber_tlv_tag_t asn_DEF_SkipCerts_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
asn_TYPE_descriptor_t asn_DEF_SkipCerts = {
	"SkipCerts",
	"SkipCerts",
	SkipCerts_free,
	SkipCerts_print,
	SkipCerts_constraint,
	SkipCerts_decode_ber,
	SkipCerts_encode_der,
	SkipCerts_decode_xer,
	SkipCerts_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_SkipCerts_tags_1,
	sizeof(asn_DEF_SkipCerts_tags_1)
		/sizeof(asn_DEF_SkipCerts_tags_1[0]), /* 1 */
	asn_DEF_SkipCerts_tags_1,	/* Same as above */
	sizeof(asn_DEF_SkipCerts_tags_1)
		/sizeof(asn_DEF_SkipCerts_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	0	/* No specifics */
};

