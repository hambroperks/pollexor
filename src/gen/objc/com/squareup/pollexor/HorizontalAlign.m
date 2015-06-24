//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/HambroPerks/3rdParty/pollexor/src/main/java/com/squareup/pollexor/HorizontalAlign.java
//

#include "IOSClass.h"
#include "J2ObjC_source.h"
#include "com/squareup/pollexor/HorizontalAlign.h"
#include "java/lang/IllegalArgumentException.h"

@interface PXRHorizontalAlignEnum ()
- (instancetype)initWithNSString:(NSString *)value
                    withNSString:(NSString *)__name
                         withInt:(jint)__ordinal;
@end

BOOL PXRHorizontalAlignEnum_initialized = NO;

PXRHorizontalAlignEnum *PXRHorizontalAlignEnum_values_[3];

@implementation PXRHorizontalAlignEnum

- (instancetype)initWithNSString:(NSString *)value
                    withNSString:(NSString *)__name
                         withInt:(jint)__ordinal {
  if (self = [super initWithNSString:__name withInt:__ordinal]) {
    PXRHorizontalAlignEnum_set_value_(self, value);
  }
  return self;
}

IOSObjectArray *PXRHorizontalAlignEnum_values() {
  PXRHorizontalAlignEnum_init();
  return [IOSObjectArray arrayWithObjects:PXRHorizontalAlignEnum_values_ count:3 type:PXRHorizontalAlignEnum_class_()];
}
+ (IOSObjectArray *)values {
  return PXRHorizontalAlignEnum_values();
}

+ (PXRHorizontalAlignEnum *)valueOfWithNSString:(NSString *)name {
  return PXRHorizontalAlignEnum_valueOfWithNSString_(name);
}

PXRHorizontalAlignEnum *PXRHorizontalAlignEnum_valueOfWithNSString_(NSString *name) {
  PXRHorizontalAlignEnum_init();
  for (int i = 0; i < 3; i++) {
    PXRHorizontalAlignEnum *e = PXRHorizontalAlignEnum_values_[i];
    if ([name isEqual:[e name]]) {
      return e;
    }
  }
  @throw [[[JavaLangIllegalArgumentException alloc] initWithNSString:name] autorelease];
  return nil;
}

- (id)copyWithZone:(NSZone *)zone {
  return [self retain];
}

+ (void)initialize {
  if (self == [PXRHorizontalAlignEnum class]) {
    PXRHorizontalAlignEnum_LEFT = [[PXRHorizontalAlignEnum alloc] initWithNSString:@"left" withNSString:@"LEFT" withInt:0];
    PXRHorizontalAlignEnum_CENTER = [[PXRHorizontalAlignEnum alloc] initWithNSString:@"center" withNSString:@"CENTER" withInt:1];
    PXRHorizontalAlignEnum_RIGHT = [[PXRHorizontalAlignEnum alloc] initWithNSString:@"right" withNSString:@"RIGHT" withInt:2];
    J2OBJC_SET_INITIALIZED(PXRHorizontalAlignEnum)
  }
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "initWithNSString:withNSString:withInt:", "HorizontalAlign", NULL, 0x2, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "LEFT", "LEFT", 0x4019, "Lcom.squareup.pollexor.HorizontalAlign;", &PXRHorizontalAlignEnum_LEFT,  },
    { "CENTER", "CENTER", 0x4019, "Lcom.squareup.pollexor.HorizontalAlign;", &PXRHorizontalAlignEnum_CENTER,  },
    { "RIGHT", "RIGHT", 0x4019, "Lcom.squareup.pollexor.HorizontalAlign;", &PXRHorizontalAlignEnum_RIGHT,  },
    { "value_", NULL, 0x10, "Ljava.lang.String;", NULL,  },
  };
  static const char *superclass_type_args[] = {"Lcom.squareup.pollexor.HorizontalAlign;"};
  static const J2ObjcClassInfo _PXRHorizontalAlignEnum = { 1, "HorizontalAlign", "com.squareup.pollexor", NULL, 0x4011, 1, methods, 4, fields, 1, superclass_type_args};
  return &_PXRHorizontalAlignEnum;
}

@end

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(PXRHorizontalAlignEnum)