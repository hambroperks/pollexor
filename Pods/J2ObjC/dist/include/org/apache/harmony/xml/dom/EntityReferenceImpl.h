//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/xml/dom/EntityReferenceImpl.java
//

#ifndef _OrgApacheHarmonyXmlDomEntityReferenceImpl_H_
#define _OrgApacheHarmonyXmlDomEntityReferenceImpl_H_

@class OrgApacheHarmonyXmlDomDocumentImpl;

#include "J2ObjC_header.h"
#include "org/apache/harmony/xml/dom/LeafNodeImpl.h"
#include "org/w3c/dom/EntityReference.h"

@interface OrgApacheHarmonyXmlDomEntityReferenceImpl : OrgApacheHarmonyXmlDomLeafNodeImpl < OrgW3cDomEntityReference > {
}

- (instancetype)initWithOrgApacheHarmonyXmlDomDocumentImpl:(OrgApacheHarmonyXmlDomDocumentImpl *)document
                                              withNSString:(NSString *)name;

- (NSString *)getNodeName;

- (jshort)getNodeType;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonyXmlDomEntityReferenceImpl)

CF_EXTERN_C_BEGIN
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonyXmlDomEntityReferenceImpl)

#endif // _OrgApacheHarmonyXmlDomEntityReferenceImpl_H_
