/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "Lightweight-Directory-Access-Protocol-V3"
 * 	found in "Lightweight-Directory-Access-Protocol-V3.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_AttributeValueAssertion_H_
#define	_AttributeValueAssertion_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AttributeDescription.h"
#include "AssertionValue.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* AttributeValueAssertion */
typedef struct AttributeValueAssertion {
	AttributeDescription_t	 attributeDesc;
	AssertionValue_t	 assertionValue;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AttributeValueAssertion_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AttributeValueAssertion;

#ifdef __cplusplus
}
#endif

#endif	/* _AttributeValueAssertion_H_ */
#include <asn_internal.h>