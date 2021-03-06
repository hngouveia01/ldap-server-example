/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "Lightweight-Directory-Access-Protocol-V3"
 * 	found in "Lightweight-Directory-Access-Protocol-V3.asn1"
 * 	`asn1c -fcompound-names`
 */

#include "Filter.h"

static int
memb_and_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSET_FROM_VOID(sptr)->count;
	
	if((size >= 1)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_or_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSET_FROM_VOID(sptr)->count;
	
	if((size >= 1)) {
		/* Perform validation of the inner elements */
		return td->check_constraints(td, sptr, ctfailcb, app_key);
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_TYPE_member_t asn_MBR_and_2[] = {
	{ ATF_POINTER, 0, 0,
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_Filter,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"filter"
		},
};
static ber_tlv_tag_t asn_DEF_and_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (17 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_and_specs_2 = {
	sizeof(struct Filter__and),
	offsetof(struct Filter__and, _asn_ctx),
	2,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_and_2 = {
	"and",
	"and",
	SET_OF_free,
	SET_OF_print,
	SET_OF_constraint,
	SET_OF_decode_ber,
	SET_OF_encode_der,
	SET_OF_decode_xer,
	SET_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_and_tags_2,
	sizeof(asn_DEF_and_tags_2)
		/sizeof(asn_DEF_and_tags_2[0]) - 1, /* 1 */
	asn_DEF_and_tags_2,	/* Same as above */
	sizeof(asn_DEF_and_tags_2)
		/sizeof(asn_DEF_and_tags_2[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_and_2,
	1,	/* Single element */
	&asn_SPC_and_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_or_4[] = {
	{ ATF_POINTER, 0, 0,
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_Filter,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"filter"
		},
};
static ber_tlv_tag_t asn_DEF_or_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (17 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_or_specs_4 = {
	sizeof(struct Filter__or),
	offsetof(struct Filter__or, _asn_ctx),
	2,	/* XER encoding is XMLValueList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_or_4 = {
	"or",
	"or",
	SET_OF_free,
	SET_OF_print,
	SET_OF_constraint,
	SET_OF_decode_ber,
	SET_OF_encode_der,
	SET_OF_decode_xer,
	SET_OF_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_or_tags_4,
	sizeof(asn_DEF_or_tags_4)
		/sizeof(asn_DEF_or_tags_4[0]) - 1, /* 1 */
	asn_DEF_or_tags_4,	/* Same as above */
	sizeof(asn_DEF_or_tags_4)
		/sizeof(asn_DEF_or_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_or_4,
	1,	/* Single element */
	&asn_SPC_or_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_Filter_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Filter, choice.and),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_and_2,
		memb_and_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"and"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Filter, choice.or),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_or_4,
		memb_or_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"or"
		},
	{ ATF_POINTER, 0, offsetof(struct Filter, choice.not),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Filter,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"not"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Filter, choice.equalityMatch),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AttributeValueAssertion,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"equalityMatch"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Filter, choice.substrings),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SubstringFilter,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"substrings"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Filter, choice.greaterOrEqual),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AttributeValueAssertion,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"greaterOrEqual"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Filter, choice.lessOrEqual),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AttributeValueAssertion,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"lessOrEqual"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Filter, choice.present),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AttributeDescription,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"present"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Filter, choice.approxMatch),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AttributeValueAssertion,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"approxMatch"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Filter, choice.extensibleMatch),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MatchingRuleAssertion,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"extensibleMatch"
		},
};
static asn_TYPE_tag2member_t asn_MAP_Filter_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* and at 205 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* or at 206 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* not at 207 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* equalityMatch at 208 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* substrings at 214 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* greaterOrEqual at 215 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* lessOrEqual at 216 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* present at 217 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* approxMatch at 218 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* extensibleMatch at 219 */
};
static asn_CHOICE_specifics_t asn_SPC_Filter_specs_1 = {
	sizeof(struct Filter),
	offsetof(struct Filter, _asn_ctx),
	offsetof(struct Filter, present),
	sizeof(((struct Filter *)0)->present),
	asn_MAP_Filter_tag2el_1,
	10,	/* Count of tags in the map */
	0,
	10	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_Filter = {
	"Filter",
	"Filter",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	0,	/* No PER visible constraints */
	asn_MBR_Filter_1,
	10,	/* Elements count */
	&asn_SPC_Filter_specs_1	/* Additional specs */
};

