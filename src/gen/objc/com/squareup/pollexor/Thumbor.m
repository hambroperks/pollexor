//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/temp/pollexor/src/main/java/com/squareup/pollexor/Thumbor.java
//

#include "J2ObjC_source.h"
#include "com/squareup/pollexor/Thumbor.h"
#include "com/squareup/pollexor/ThumborUrlBuilder.h"
#include "java/lang/IllegalArgumentException.h"

@interface PXRThumbor () {
 @public
  NSString *host_;
  NSString *key_;
}

@end

J2OBJC_FIELD_SETTER(PXRThumbor, host_, NSString *)
J2OBJC_FIELD_SETTER(PXRThumbor, key_, NSString *)

__attribute__((unused)) static void PXRThumbor_initWithNSString_withNSString_(PXRThumbor *self, NSString *host, NSString *key);

__attribute__((unused)) static PXRThumbor *new_PXRThumbor_initWithNSString_withNSString_(NSString *host, NSString *key) NS_RETURNS_RETAINED;

__attribute__((unused)) static PXRThumbor *create_PXRThumbor_initWithNSString_withNSString_(NSString *host, NSString *key);

@implementation PXRThumbor

+ (PXRThumbor *)createWithNSString:(NSString *)host {
  return PXRThumbor_createWithNSString_(host);
}

+ (PXRThumbor *)createWithNSString:(NSString *)host
                      withNSString:(NSString *)key {
  return PXRThumbor_createWithNSString_withNSString_(host, key);
}

- (NSString *)getHost {
  return host_;
}

- (NSString *)getKey {
  return key_;
}

- (PXRThumborUrlBuilder *)buildImageWithNSString:(NSString *)image {
  if (image == nil || [image java_length] == 0) {
    @throw create_JavaLangIllegalArgumentException_initWithNSString_(@"Invalid image.");
  }
  return create_PXRThumborUrlBuilder_initWithNSString_withNSString_withNSString_(host_, key_, image);
}

- (void)dealloc {
  RELEASE_(host_);
  RELEASE_(key_);
  [super dealloc];
}

@end

PXRThumbor *PXRThumbor_createWithNSString_(NSString *host) {
  PXRThumbor_initialize();
  return create_PXRThumbor_initWithNSString_withNSString_(host, nil);
}

PXRThumbor *PXRThumbor_createWithNSString_withNSString_(NSString *host, NSString *key) {
  PXRThumbor_initialize();
  if (key == nil || [key java_length] == 0) {
    @throw create_JavaLangIllegalArgumentException_initWithNSString_(@"Key must not be blank.");
  }
  return create_PXRThumbor_initWithNSString_withNSString_(host, key);
}

void PXRThumbor_initWithNSString_withNSString_(PXRThumbor *self, NSString *host, NSString *key) {
  NSObject_init(self);
  if (host == nil || [host java_length] == 0) {
    @throw create_JavaLangIllegalArgumentException_initWithNSString_(@"Host must not be blank.");
  }
  if (![host java_hasSuffix:@"/"]) {
    JreStrAppend(&host, "$", @"/");
  }
  JreStrongAssign(&self->host_, host);
  JreStrongAssign(&self->key_, key);
}

PXRThumbor *new_PXRThumbor_initWithNSString_withNSString_(NSString *host, NSString *key) {
  J2OBJC_NEW_IMPL(PXRThumbor, initWithNSString_withNSString_, host, key)
}

PXRThumbor *create_PXRThumbor_initWithNSString_withNSString_(NSString *host, NSString *key) {
  J2OBJC_CREATE_IMPL(PXRThumbor, initWithNSString_withNSString_, host, key)
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(PXRThumbor)
