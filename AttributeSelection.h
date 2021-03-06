/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "Lightweight-Directory-Access-Protocol-V3"
 * 	found in "Lightweight-Directory-Access-Protocol-V3.asn1"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_AttributeSelection_H_
#define	_AttributeSelection_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LDAPString.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* AttributeSelection */
typedef struct AttributeSelection {
	A_SEQUENCE_OF(LDAPString_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AttributeSelection_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AttributeSelection;

#ifdef __cplusplus
}
#endif

#endif	/* _AttributeSelection_H_ */
#include <asn_internal.h>
