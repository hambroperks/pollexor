//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/w3c/dom/ls/LSSerializer.java
//

#ifndef _OrgW3cDomLsLSSerializer_H_
#define _OrgW3cDomLsLSSerializer_H_

@protocol OrgW3cDomDOMConfiguration;
@protocol OrgW3cDomLsLSOutput;
@protocol OrgW3cDomLsLSSerializerFilter;
@protocol OrgW3cDomNode;

#include "J2ObjC_header.h"

@protocol OrgW3cDomLsLSSerializer < NSObject, JavaObject >

- (id<OrgW3cDomDOMConfiguration>)getDomConfig;

- (NSString *)getNewLine;

- (void)setNewLineWithNSString:(NSString *)newLine;

- (id<OrgW3cDomLsLSSerializerFilter>)getFilter;

- (void)setFilterWithOrgW3cDomLsLSSerializerFilter:(id<OrgW3cDomLsLSSerializerFilter>)filter;

- (jboolean)writeWithOrgW3cDomNode:(id<OrgW3cDomNode>)nodeArg
           withOrgW3cDomLsLSOutput:(id<OrgW3cDomLsLSOutput>)destination;

- (jboolean)writeToURIWithOrgW3cDomNode:(id<OrgW3cDomNode>)nodeArg
                           withNSString:(NSString *)uri;

- (NSString *)writeToStringWithOrgW3cDomNode:(id<OrgW3cDomNode>)nodeArg;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgW3cDomLsLSSerializer)

J2OBJC_TYPE_LITERAL_HEADER(OrgW3cDomLsLSSerializer)

#endif // _OrgW3cDomLsLSSerializer_H_
