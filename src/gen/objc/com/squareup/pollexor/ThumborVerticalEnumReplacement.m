//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/HambroPerks/3rdParty/pollexor/src/main/java/com/squareup/pollexor/ThumborVerticalEnumReplacement.java
//


#include "J2ObjC_source.h"
#include "com/squareup/pollexor/ThumborVerticalEnumReplacement.h"

@interface PXRThumborVerticalEnumReplacement () {
 @public
  NSString *value_;
}
@end

J2OBJC_FIELD_SETTER(PXRThumborVerticalEnumReplacement, value_, NSString *)

@implementation PXRThumborVerticalEnumReplacement

- (instancetype)initWithNSString:(NSString *)value {
  PXRThumborVerticalEnumReplacement_initWithNSString_(self, value);
  return self;
}

- (NSString *)getValue {
  return value_;
}

- (void)dealloc {
  RELEASE_(value_);
  [super dealloc];
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "initWithNSString:", "ThumborVerticalEnumReplacement", NULL, 0x1, NULL, NULL },
    { "getValue", NULL, "Ljava.lang.String;", 0x1, NULL, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "value_", NULL, 0x12, "Ljava.lang.String;", NULL, NULL,  },
  };
  static const J2ObjcClassInfo _PXRThumborVerticalEnumReplacement = { 2, "ThumborVerticalEnumReplacement", "com.squareup.pollexor", NULL, 0x1, 2, methods, 1, fields, 0, NULL, 0, NULL, NULL, NULL };
  return &_PXRThumborVerticalEnumReplacement;
}

@end

void PXRThumborVerticalEnumReplacement_initWithNSString_(PXRThumborVerticalEnumReplacement *self, NSString *value) {
  NSObject_init(self);
  PXRThumborVerticalEnumReplacement_set_value_(self, value);
}

PXRThumborVerticalEnumReplacement *new_PXRThumborVerticalEnumReplacement_initWithNSString_(NSString *value) {
  PXRThumborVerticalEnumReplacement *self = [PXRThumborVerticalEnumReplacement alloc];
  PXRThumborVerticalEnumReplacement_initWithNSString_(self, value);
  return self;
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(PXRThumborVerticalEnumReplacement)
