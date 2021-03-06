//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/xml/src/main/java/org/xmlpull/v1/sax2/Driver.java
//

#ifndef _OrgXmlpullV1Sax2Driver_H_
#define _OrgXmlpullV1Sax2Driver_H_

@class OrgXmlSaxInputSource;
@protocol OrgXmlSaxContentHandler;
@protocol OrgXmlSaxDTDHandler;
@protocol OrgXmlSaxEntityResolver;
@protocol OrgXmlSaxErrorHandler;
@protocol OrgXmlpullV1XmlPullParser;

#include "J2ObjC_header.h"
#include "org/xml/sax/Attributes.h"
#include "org/xml/sax/Locator.h"
#include "org/xml/sax/XMLReader.h"

@interface OrgXmlpullV1Sax2Driver : NSObject < OrgXmlSaxLocator, OrgXmlSaxXMLReader, OrgXmlSaxAttributes > {
 @public
  id<OrgXmlSaxContentHandler> contentHandler_;
  id<OrgXmlSaxErrorHandler> errorHandler_;
  NSString *systemId_;
  id<OrgXmlpullV1XmlPullParser> pp_;
}

- (instancetype)init;

- (instancetype)initWithOrgXmlpullV1XmlPullParser:(id<OrgXmlpullV1XmlPullParser>)pp;

- (jint)getLength;

- (NSString *)getURIWithInt:(jint)index;

- (NSString *)getLocalNameWithInt:(jint)index;

- (NSString *)getQNameWithInt:(jint)index;

- (NSString *)getTypeWithInt:(jint)index;

- (NSString *)getValueWithInt:(jint)index;

- (jint)getIndexWithNSString:(NSString *)uri
                withNSString:(NSString *)localName;

- (jint)getIndexWithNSString:(NSString *)qName;

- (NSString *)getTypeWithNSString:(NSString *)uri
                     withNSString:(NSString *)localName;

- (NSString *)getTypeWithNSString:(NSString *)qName;

- (NSString *)getValueWithNSString:(NSString *)uri
                      withNSString:(NSString *)localName;

- (NSString *)getValueWithNSString:(NSString *)qName;

- (NSString *)getPublicId;

- (NSString *)getSystemId;

- (jint)getLineNumber;

- (jint)getColumnNumber;

- (jboolean)getFeatureWithNSString:(NSString *)name;

- (void)setFeatureWithNSString:(NSString *)name
                   withBoolean:(jboolean)value;

- (id)getPropertyWithNSString:(NSString *)name;

- (void)setPropertyWithNSString:(NSString *)name
                         withId:(id)value;

- (void)setEntityResolverWithOrgXmlSaxEntityResolver:(id<OrgXmlSaxEntityResolver>)resolver;

- (id<OrgXmlSaxEntityResolver>)getEntityResolver;

- (void)setDTDHandlerWithOrgXmlSaxDTDHandler:(id<OrgXmlSaxDTDHandler>)handler;

- (id<OrgXmlSaxDTDHandler>)getDTDHandler;

- (void)setContentHandlerWithOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)handler;

- (id<OrgXmlSaxContentHandler>)getContentHandler;

- (void)setErrorHandlerWithOrgXmlSaxErrorHandler:(id<OrgXmlSaxErrorHandler>)handler;

- (id<OrgXmlSaxErrorHandler>)getErrorHandler;

- (void)parseWithOrgXmlSaxInputSource:(OrgXmlSaxInputSource *)source;

- (void)parseWithNSString:(NSString *)systemId;

- (void)parseSubTreeWithOrgXmlpullV1XmlPullParser:(id<OrgXmlpullV1XmlPullParser>)pp;

- (void)startElementWithNSString:(NSString *)namespace_
                    withNSString:(NSString *)localName
                    withNSString:(NSString *)qName;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgXmlpullV1Sax2Driver)

J2OBJC_FIELD_SETTER(OrgXmlpullV1Sax2Driver, contentHandler_, id<OrgXmlSaxContentHandler>)
J2OBJC_FIELD_SETTER(OrgXmlpullV1Sax2Driver, errorHandler_, id<OrgXmlSaxErrorHandler>)
J2OBJC_FIELD_SETTER(OrgXmlpullV1Sax2Driver, systemId_, NSString *)
J2OBJC_FIELD_SETTER(OrgXmlpullV1Sax2Driver, pp_, id<OrgXmlpullV1XmlPullParser>)

CF_EXTERN_C_BEGIN

FOUNDATION_EXPORT NSString *OrgXmlpullV1Sax2Driver_DECLARATION_HANDLER_PROPERTY_;
J2OBJC_STATIC_FIELD_GETTER(OrgXmlpullV1Sax2Driver, DECLARATION_HANDLER_PROPERTY_, NSString *)

FOUNDATION_EXPORT NSString *OrgXmlpullV1Sax2Driver_LEXICAL_HANDLER_PROPERTY_;
J2OBJC_STATIC_FIELD_GETTER(OrgXmlpullV1Sax2Driver, LEXICAL_HANDLER_PROPERTY_, NSString *)

FOUNDATION_EXPORT NSString *OrgXmlpullV1Sax2Driver_NAMESPACES_FEATURE_;
J2OBJC_STATIC_FIELD_GETTER(OrgXmlpullV1Sax2Driver, NAMESPACES_FEATURE_, NSString *)

FOUNDATION_EXPORT NSString *OrgXmlpullV1Sax2Driver_NAMESPACE_PREFIXES_FEATURE_;
J2OBJC_STATIC_FIELD_GETTER(OrgXmlpullV1Sax2Driver, NAMESPACE_PREFIXES_FEATURE_, NSString *)

FOUNDATION_EXPORT NSString *OrgXmlpullV1Sax2Driver_VALIDATION_FEATURE_;
J2OBJC_STATIC_FIELD_GETTER(OrgXmlpullV1Sax2Driver, VALIDATION_FEATURE_, NSString *)

FOUNDATION_EXPORT NSString *OrgXmlpullV1Sax2Driver_APACHE_SCHEMA_VALIDATION_FEATURE_;
J2OBJC_STATIC_FIELD_GETTER(OrgXmlpullV1Sax2Driver, APACHE_SCHEMA_VALIDATION_FEATURE_, NSString *)

FOUNDATION_EXPORT NSString *OrgXmlpullV1Sax2Driver_APACHE_DYNAMIC_VALIDATION_FEATURE_;
J2OBJC_STATIC_FIELD_GETTER(OrgXmlpullV1Sax2Driver, APACHE_DYNAMIC_VALIDATION_FEATURE_, NSString *)
CF_EXTERN_C_END

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlpullV1Sax2Driver)

#endif // _OrgXmlpullV1Sax2Driver_H_
