//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/HambroPerks/3rdParty/pollexor/src/main/java/com/squareup/pollexor/ThumborUrlBuilder.java
//

#ifndef _PXRThumborUrlBuilder_H_
#define _PXRThumborUrlBuilder_H_

@class IOSObjectArray;
@class JavaLangStringBuilder;
@class PXRThumborUrlBuilder_HorizontalAlignEnum;
@class PXRThumborUrlBuilder_ImageFormatEnum;
@class PXRThumborUrlBuilder_TrimPixelColorEnum;
@class PXRThumborUrlBuilder_VerticalAlignEnum;
@protocol JavaUtilList;

#include "J2ObjC_header.h"
#include "java/lang/Enum.h"

#define PXRThumborUrlBuilder_ORIGINAL_SIZE ((jint) 0x80000000)

/**
 @brief Fluent interface to build a Thumbor URL.
 */
@interface PXRThumborUrlBuilder : NSObject {
 @public
  NSString *image_;
  NSString *host_;
  NSString *key_;
  jboolean hasCrop_;
  jboolean hasResize_;
  jboolean isSmart_;
  jboolean isTrim_;
  jboolean flipHorizontally__;
  jboolean flipVertically__;
  jboolean fitIn__;
  jint resizeWidth_;
  jint resizeHeight_;
  jint cropTop_;
  jint cropLeft_;
  jint cropBottom_;
  jint cropRight_;
  jint trimColorTolerance_;
  PXRThumborUrlBuilder_HorizontalAlignEnum *cropHorizontalAlign_;
  PXRThumborUrlBuilder_VerticalAlignEnum *cropVerticalAlign_;
  PXRThumborUrlBuilder_TrimPixelColorEnum *trimPixelColor_;
  id<JavaUtilList> filters_;
}

#pragma mark Public

/**
 @brief Set the horizontal alignment for the image when image gets cropped by resizing.
 @param align Horizontal alignment.
 @throws IllegalStateException if image has not been marked for resize.
 */
- (PXRThumborUrlBuilder *)alignWithPXRThumborUrlBuilder_HorizontalAlignEnum:(PXRThumborUrlBuilder_HorizontalAlignEnum *)align;

/**
 @brief Set the vertical alignment for the image when image gets cropped by resizing.
 @param align Vertical alignment.
 @throws IllegalStateException if image has not been marked for resize.
 */
- (PXRThumborUrlBuilder *)alignWithPXRThumborUrlBuilder_VerticalAlignEnum:(PXRThumborUrlBuilder_VerticalAlignEnum *)align;

/**
 @brief Set the horizontal and vertical alignment for the image when image gets cropped by resizing.
 @param valign Vertical alignment.
 @param halign Horizontal alignment.
 @throws IllegalStateException if image has not been marked for resize.
 */
- (PXRThumborUrlBuilder *)alignWithPXRThumborUrlBuilder_VerticalAlignEnum:(PXRThumborUrlBuilder_VerticalAlignEnum *)valign
                             withPXRThumborUrlBuilder_HorizontalAlignEnum:(PXRThumborUrlBuilder_HorizontalAlignEnum *)halign;

/**
 @brief This filter adds a blur effect to the image using the specified radius and a default sigma (equal to the radius).
 @param radius Radius used in the gaussian function to generate a matrix, maximum value is 150. The bigger the radius more blurred will be the image.
 */
+ (NSString *)blurWithInt:(jint)radius;

/**
 @brief This filter adds a blur effect to the image using the specified radius and sigma.
 @param radius Radius used in the gaussian function to generate a matrix, maximum value is 150. The bigger the radius more blurred will be the image.
 @param sigma Sigma used in the gaussian function.
 */
+ (NSString *)blurWithInt:(jint)radius
                  withInt:(jint)sigma;

/**
 @brief This filter increases or decreases the image brightness.
 @param amount -100 to 100 - The amount (in %) to change the image brightness. Positive numbers make the image brighter and negative numbers make the image darker.
 @throws IllegalArgumentException if <code>amount</code> outside bounds.
 */
+ (NSString *)brightnessWithInt:(jint)amount;

/**
 @brief The filter increases or decreases the image contrast.
 @param amount -100 to 100 - The amount (in %) to change the image contrast. Positive numbers increase contrast and negative numbers decrease contrast.
 @throws IllegalArgumentException if <code>amount</code> outside bounds.
 */
+ (NSString *)contrastWithInt:(jint)amount;

/**
 @brief Crop the image between two points.
 @param top Top bound.
 @param left Left bound.
 @param bottom Bottom bound.
 @param right Right bound.
 @throws IllegalArgumentException if <code>top</code> or <code>left</code> are less than zero or <code>bottom</code> or <code>right</code> are less than one or less than <code>top</code> or <code>left</code> , respectively.
 */
- (PXRThumborUrlBuilder *)cropWithInt:(jint)top
                              withInt:(jint)left
                              withInt:(jint)bottom
                              withInt:(jint)right;

/**
 @brief This filter equalizes the color distribution in the image.
 */
+ (NSString *)equalize;

/**
 @brief This filter permit to return an image sized exactly as requested wherever is its ratio by filling with chosen color the missing parts.
 Usually used with "fit-in" or "adaptive-fit-in"
 @param color integer representation of color.
 */
+ (NSString *)fillWithInt:(jint)color;

/**
 @brief Add one or more filters to the image.
 <p> If you have custom filters you can supply them as a string. (e.g. <code>"my_filter(1,2,3)</code>").
 @param filters Filter strings.
 @throws IllegalArgumentException if no arguments supplied or an argument is <code>null</code> .
 */
- (PXRThumborUrlBuilder *)filterWithNSStringArray:(IOSObjectArray *)filters;

/**
 @brief Contrain the image size inside the resized box, scaling as needed.
 @throws IllegalStateException if image has not been marked for resize.
 */
- (PXRThumborUrlBuilder *)fitIn;

/**
 @brief Flip the image horizontally.
 @throws IllegalStateException if image has not been marked for resize.
 */
- (PXRThumborUrlBuilder *)flipHorizontally;

/**
 @brief Flip the image vertically.
 @throws IllegalStateException if image has not been marked for resize.
 */
- (PXRThumborUrlBuilder *)flipVertically;

/**
 @brief Specify the output format of the image.
 */
+ (NSString *)formatWithPXRThumborUrlBuilder_ImageFormatEnum:(PXRThumborUrlBuilder_ImageFormatEnum *)format;

/**
 @brief This filter uses a 9-patch to overlay the image.
 @param imageUrl Watermark image URL. It is very important to understand that the same image loader that Thumbor uses will be used here.
 */
+ (NSString *)frameWithNSString:(NSString *)imageUrl;

/**
 @brief This filter changes the image to grayscale.
 */
+ (NSString *)grayscale;

/**
 @brief This filter adds noise to the image.
 @param amount 0 to 100 - The amount (in %) of noise to add to the image.
 @throws IllegalArgumentException if <code>amount</code> outside bounds.
 */
+ (NSString *)noiseWithInt:(jint)amount;

/**
 @brief This filter tells thumbor not to upscale your images.
 */
+ (NSString *)noUpscale;

/**
 @brief This filter changes the overall quality of the JPEG image (does nothing for PNGs or GIFs).
 @param amount 0 to 100 - The quality level (in %) that the end image will feature.
 @throws IllegalArgumentException if <code>amount</code> outside bounds.
 */
+ (NSString *)qualityWithInt:(jint)amount;

/**
 @brief Resize picture to desired size.
 @param width Desired width.
 @param height Desired height.
 @throws IllegalArgumentException if <code>width</code> or <code>height</code> is less than 0 or both are 0.
 */
- (PXRThumborUrlBuilder *)resizeWithInt:(jint)width
                                withInt:(jint)height;

/**
 @brief This filter changes the amount of color in each of the three channels.
 @param r The amount of redness in the picture. Can range from -100 to 100 in percentage.
 @param g The amount of greenness in the picture. Can range from -100 to 100 in percentage.
 @param b The amount of blueness in the picture. Can range from -100 to 100 in percentage.
 @throws IllegalArgumentException if <code>r</code> , <code>g</code> , or <code>b</code> are outside of bounds.
 */
+ (NSString *)rgbWithInt:(jint)r
                 withInt:(jint)g
                 withInt:(jint)b;

/**
 @brief This filter rotates the given image according to the angle passed.
 @param angle The angle of rotation. Values can be either 0°, 90°, 180° or 270° – multiples of 90°. Angles equal to or greater than 360° will be replaced by their coterminal angle of rotation.
 */
+ (NSString *)rotateWithInt:(jint)angle;

/**
 @brief This filter adds rounded corners to the image using the white as the background.
 @param radius amount of pixels to use as radius.
 */
+ (NSString *)roundCornerWithInt:(jint)radius;

/**
 @brief This filter adds rounded corners to the image using the specified color as the background.
 @param radius amount of pixels to use as radius.
 @param color fill color for clipped region.
 */
+ (NSString *)roundCornerWithInt:(jint)radius
                         withInt:(jint)color;

/**
 @brief This filter adds rounded corners to the image using the specified color as the background.
 @param radiusInner amount of pixels to use as radius.
 @param radiusOuter specifies the second value for the ellipse used for the radius. Use 0 for no value.
 @param color fill color for clipped region.
 */
+ (NSString *)roundCornerWithInt:(jint)radiusInner
                         withInt:(jint)radiusOuter
                         withInt:(jint)color;

/**
 @brief This filter enhances apparent sharpness of the image.
 It's heavily based on Marco Rossini's excellent Wavelet sharpen GIMP plugin. Check http://registry.gimp.org/node/9836 for details about how it work.
 @param amount Sharpen amount. Typical values are between 0.0 and 10.0.
 @param radius Sharpen radius. Typical values are between 0.0 and 2.0.
 @param luminanceOnly Sharpen only luminance channel.
 */
+ (NSString *)sharpenWithFloat:(jfloat)amount
                     withFloat:(jfloat)radius
                   withBoolean:(jboolean)luminanceOnly;

/**
 @brief Use smart cropping for determining the important portion of an image.
 @throws IllegalStateException if image has not been marked for resize.
 */
- (PXRThumborUrlBuilder *)smart;

/**
 @brief This filter strips the ICC profile from the image.
 */
+ (NSString *)stripicc;

/**
 @brief Build the metadata URL.
 This will either call #toMetaSafe() or #toMetaUnsafe() depending on whether a key was set.
 */
- (NSString *)toMeta;

/**
 @brief Build a safe version of the metadata URL.
 Requires a non- <code>null</code> key.
 */
- (NSString *)toMetaSafe;

/**
 @brief Build an unsafe version of the metadata URL.
 */
- (NSString *)toMetaUnsafe;

- (NSString *)description;

/**
 @brief Build the URL.
 This will either call #toUrlSafe() or #toUrlUnsafe() depending on whether a key was set.
 */
- (NSString *)toUrl;

/**
 @brief Build a safe version of the URL.
 Requires a non- <code>null</code> key.
 */
- (NSString *)toUrlSafe;

/**
 @brief Build an unsafe version of the URL.
 */
- (NSString *)toUrlUnsafe;

/**
 @brief Removing surrounding space in image.
 */
- (PXRThumborUrlBuilder *)trim;

/**
 @brief Removing surrounding space in image.
 Get trim color from specified pixel.
 @param value orientation from where to get the pixel color.
 */
- (PXRThumborUrlBuilder *)trimWithPXRThumborUrlBuilder_TrimPixelColorEnum:(PXRThumborUrlBuilder_TrimPixelColorEnum *)value;

/**
 @brief Removing surrounding space in image.
 Get trim color from specified pixel.
 @param value orientation from where to get the pixel color.
 @param colorTolerance 0 - 442. This is the euclidian distance between the colors of the reference pixel and the surrounding pixels is used. If the distance is within the tolerance they'll get trimmed.
 */
- (PXRThumborUrlBuilder *)trimWithPXRThumborUrlBuilder_TrimPixelColorEnum:(PXRThumborUrlBuilder_TrimPixelColorEnum *)value
                                                                  withInt:(jint)colorTolerance;

/**
 @brief This filter adds a watermark to the image at (0, 0).
 @param imageUrl Watermark image URL. It is very important to understand that the same image loader that Thumbor uses will be used here.
 @throws IllegalArgumentException if <code>image</code> is blank.
 */
+ (NSString *)watermarkWithNSString:(NSString *)imageUrl;

/**
 @brief This filter adds a watermark to the image.
 @param imageUrl Watermark image URL. It is very important to understand that the same image loader that Thumbor uses will be used here.
 @param x Horizontal position that the watermark will be in. Positive numbers indicate position from the left and negative numbers indicate position from the right.
 @param y Vertical position that the watermark will be in. Positive numbers indicate position from the top and negative numbers indicate position from the bottom.
 @throws IllegalArgumentException if <code>image</code> is blank.
 */
+ (NSString *)watermarkWithNSString:(NSString *)imageUrl
                            withInt:(jint)x
                            withInt:(jint)y;

/**
 @brief This filter adds a watermark to the image.
 @param imageUrl Watermark image URL. It is very important to understand that the same image loader that Thumbor uses will be used here.
 @param x Horizontal position that the watermark will be in. Positive numbers indicate position from the left and negative numbers indicate position from the right.
 @param y Vertical position that the watermark will be in. Positive numbers indicate position from the top and negative numbers indicate position from the bottom.
 @param transparency Watermark image transparency. Should be a number between 0 (fully opaque) and 100 (fully transparent).
 @throws IllegalArgumentException if <code>image</code> is blank or <code>transparency</code> is outside bounds.
 */
+ (NSString *)watermarkWithNSString:(NSString *)imageUrl
                            withInt:(jint)x
                            withInt:(jint)y
                            withInt:(jint)transparency;

/**
 @brief This filter adds a watermark to the image at (0, 0).
 @param image Watermark image URL. It is very important to understand that the same image loader that Thumbor uses will be used here.
 @throws IllegalArgumentException if <code>image</code> is null.
 */
+ (NSString *)watermarkWithPXRThumborUrlBuilder:(PXRThumborUrlBuilder *)image;

/**
 @brief This filter adds a watermark to the image.
 @param image Watermark image URL. It is very important to understand that the same image loader that Thumbor uses will be used here.
 @param x Horizontal position that the watermark will be in. Positive numbers indicate position from the left and negative numbers indicate position from the right.
 @param y Vertical position that the watermark will be in. Positive numbers indicate position from the top and negative numbers indicate position from the bottom.
 @throws IllegalArgumentException if <code>image</code> is null.
 */
+ (NSString *)watermarkWithPXRThumborUrlBuilder:(PXRThumborUrlBuilder *)image
                                        withInt:(jint)x
                                        withInt:(jint)y;

/**
 @brief This filter adds a watermark to the image.
 @param image Watermark image URL. It is very important to understand that the same image loader that Thumbor uses will be used here.
 @param x Horizontal position that the watermark will be in. Positive numbers indicate position from the left and negative numbers indicate position from the right.
 @param y Vertical position that the watermark will be in. Positive numbers indicate position from the top and negative numbers indicate position from the bottom.
 @param transparency Watermark image transparency. Should be a number between 0 (fully opaque) and 100 (fully transparent).
 @throws IllegalArgumentException if <code>image</code> is null.
 */
+ (NSString *)watermarkWithPXRThumborUrlBuilder:(PXRThumborUrlBuilder *)image
                                        withInt:(jint)x
                                        withInt:(jint)y
                                        withInt:(jint)transparency;

#pragma mark Package-Private

- (instancetype)initWithNSString:(NSString *)host
                    withNSString:(NSString *)key
                    withNSString:(NSString *)image;

/**
 @brief Assemble the configuration section of the URL.
 */
- (JavaLangStringBuilder *)assembleConfigWithBoolean:(jboolean)meta;

@end

J2OBJC_EMPTY_STATIC_INIT(PXRThumborUrlBuilder)

J2OBJC_FIELD_SETTER(PXRThumborUrlBuilder, image_, NSString *)
J2OBJC_FIELD_SETTER(PXRThumborUrlBuilder, host_, NSString *)
J2OBJC_FIELD_SETTER(PXRThumborUrlBuilder, key_, NSString *)
J2OBJC_FIELD_SETTER(PXRThumborUrlBuilder, cropHorizontalAlign_, PXRThumborUrlBuilder_HorizontalAlignEnum *)
J2OBJC_FIELD_SETTER(PXRThumborUrlBuilder, cropVerticalAlign_, PXRThumborUrlBuilder_VerticalAlignEnum *)
J2OBJC_FIELD_SETTER(PXRThumborUrlBuilder, trimPixelColor_, PXRThumborUrlBuilder_TrimPixelColorEnum *)
J2OBJC_FIELD_SETTER(PXRThumborUrlBuilder, filters_, id<JavaUtilList>)

J2OBJC_STATIC_FIELD_GETTER(PXRThumborUrlBuilder, ORIGINAL_SIZE, jint)

FOUNDATION_EXPORT void PXRThumborUrlBuilder_initWithNSString_withNSString_withNSString_(PXRThumborUrlBuilder *self, NSString *host, NSString *key, NSString *image);

FOUNDATION_EXPORT PXRThumborUrlBuilder *new_PXRThumborUrlBuilder_initWithNSString_withNSString_withNSString_(NSString *host, NSString *key, NSString *image) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_brightnessWithInt_(jint amount);

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_contrastWithInt_(jint amount);

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_noiseWithInt_(jint amount);

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_qualityWithInt_(jint amount);

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_rgbWithInt_withInt_withInt_(jint r, jint g, jint b);

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_roundCornerWithInt_(jint radius);

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_roundCornerWithInt_withInt_(jint radius, jint color);

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_roundCornerWithInt_withInt_withInt_(jint radiusInner, jint radiusOuter, jint color);

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_watermarkWithNSString_(NSString *imageUrl);

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_watermarkWithPXRThumborUrlBuilder_(PXRThumborUrlBuilder *image);

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_watermarkWithNSString_withInt_withInt_(NSString *imageUrl, jint x, jint y);

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_watermarkWithPXRThumborUrlBuilder_withInt_withInt_(PXRThumborUrlBuilder *image, jint x, jint y);

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_watermarkWithNSString_withInt_withInt_withInt_(NSString *imageUrl, jint x, jint y, jint transparency);

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_watermarkWithPXRThumborUrlBuilder_withInt_withInt_withInt_(PXRThumborUrlBuilder *image, jint x, jint y, jint transparency);

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_sharpenWithFloat_withFloat_withBoolean_(jfloat amount, jfloat radius, jboolean luminanceOnly);

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_fillWithInt_(jint color);

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_formatWithPXRThumborUrlBuilder_ImageFormatEnum_(PXRThumborUrlBuilder_ImageFormatEnum *format);

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_frameWithNSString_(NSString *imageUrl);

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_stripicc();

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_grayscale();

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_equalize();

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_blurWithInt_(jint radius);

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_blurWithInt_withInt_(jint radius, jint sigma);

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_noUpscale();

FOUNDATION_EXPORT NSString *PXRThumborUrlBuilder_rotateWithInt_(jint angle);

J2OBJC_TYPE_LITERAL_HEADER(PXRThumborUrlBuilder)

typedef PXRThumborUrlBuilder ComSquareupPollexorThumborUrlBuilder;

typedef NS_ENUM(NSUInteger, PXRThumborUrlBuilder_HorizontalAlign) {
  PXRThumborUrlBuilder_HorizontalAlign_LEFT = 0,
  PXRThumborUrlBuilder_HorizontalAlign_CENTER = 1,
  PXRThumborUrlBuilder_HorizontalAlign_RIGHT = 2,
};

/**
 @brief Horizontal alignment for crop positioning.
 */
@interface PXRThumborUrlBuilder_HorizontalAlignEnum : JavaLangEnum < NSCopying > {
 @public
  NSString *value_;
}

#pragma mark Package-Private

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *PXRThumborUrlBuilder_HorizontalAlignEnum_values();

+ (PXRThumborUrlBuilder_HorizontalAlignEnum *)valueOfWithNSString:(NSString *)name;

FOUNDATION_EXPORT PXRThumborUrlBuilder_HorizontalAlignEnum *PXRThumborUrlBuilder_HorizontalAlignEnum_valueOfWithNSString_(NSString *name);
- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(PXRThumborUrlBuilder_HorizontalAlignEnum)

FOUNDATION_EXPORT PXRThumborUrlBuilder_HorizontalAlignEnum *PXRThumborUrlBuilder_HorizontalAlignEnum_values_[];

#define PXRThumborUrlBuilder_HorizontalAlignEnum_LEFT PXRThumborUrlBuilder_HorizontalAlignEnum_values_[PXRThumborUrlBuilder_HorizontalAlign_LEFT]
J2OBJC_ENUM_CONSTANT_GETTER(PXRThumborUrlBuilder_HorizontalAlignEnum, LEFT)

#define PXRThumborUrlBuilder_HorizontalAlignEnum_CENTER PXRThumborUrlBuilder_HorizontalAlignEnum_values_[PXRThumborUrlBuilder_HorizontalAlign_CENTER]
J2OBJC_ENUM_CONSTANT_GETTER(PXRThumborUrlBuilder_HorizontalAlignEnum, CENTER)

#define PXRThumborUrlBuilder_HorizontalAlignEnum_RIGHT PXRThumborUrlBuilder_HorizontalAlignEnum_values_[PXRThumborUrlBuilder_HorizontalAlign_RIGHT]
J2OBJC_ENUM_CONSTANT_GETTER(PXRThumborUrlBuilder_HorizontalAlignEnum, RIGHT)

J2OBJC_FIELD_SETTER(PXRThumborUrlBuilder_HorizontalAlignEnum, value_, NSString *)

J2OBJC_TYPE_LITERAL_HEADER(PXRThumborUrlBuilder_HorizontalAlignEnum)

typedef NS_ENUM(NSUInteger, PXRThumborUrlBuilder_VerticalAlign) {
  PXRThumborUrlBuilder_VerticalAlign_TOP = 0,
  PXRThumborUrlBuilder_VerticalAlign_MIDDLE = 1,
  PXRThumborUrlBuilder_VerticalAlign_BOTTOM = 2,
};

/**
 @brief Vertical alignment for crop positioning.
 */
@interface PXRThumborUrlBuilder_VerticalAlignEnum : JavaLangEnum < NSCopying > {
 @public
  NSString *value_;
}

#pragma mark Package-Private

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *PXRThumborUrlBuilder_VerticalAlignEnum_values();

+ (PXRThumborUrlBuilder_VerticalAlignEnum *)valueOfWithNSString:(NSString *)name;

FOUNDATION_EXPORT PXRThumborUrlBuilder_VerticalAlignEnum *PXRThumborUrlBuilder_VerticalAlignEnum_valueOfWithNSString_(NSString *name);
- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(PXRThumborUrlBuilder_VerticalAlignEnum)

FOUNDATION_EXPORT PXRThumborUrlBuilder_VerticalAlignEnum *PXRThumborUrlBuilder_VerticalAlignEnum_values_[];

#define PXRThumborUrlBuilder_VerticalAlignEnum_TOP PXRThumborUrlBuilder_VerticalAlignEnum_values_[PXRThumborUrlBuilder_VerticalAlign_TOP]
J2OBJC_ENUM_CONSTANT_GETTER(PXRThumborUrlBuilder_VerticalAlignEnum, TOP)

#define PXRThumborUrlBuilder_VerticalAlignEnum_MIDDLE PXRThumborUrlBuilder_VerticalAlignEnum_values_[PXRThumborUrlBuilder_VerticalAlign_MIDDLE]
J2OBJC_ENUM_CONSTANT_GETTER(PXRThumborUrlBuilder_VerticalAlignEnum, MIDDLE)

#define PXRThumborUrlBuilder_VerticalAlignEnum_BOTTOM PXRThumborUrlBuilder_VerticalAlignEnum_values_[PXRThumborUrlBuilder_VerticalAlign_BOTTOM]
J2OBJC_ENUM_CONSTANT_GETTER(PXRThumborUrlBuilder_VerticalAlignEnum, BOTTOM)

J2OBJC_FIELD_SETTER(PXRThumborUrlBuilder_VerticalAlignEnum, value_, NSString *)

J2OBJC_TYPE_LITERAL_HEADER(PXRThumborUrlBuilder_VerticalAlignEnum)

typedef NS_ENUM(NSUInteger, PXRThumborUrlBuilder_TrimPixelColor) {
  PXRThumborUrlBuilder_TrimPixelColor_TOP_LEFT = 0,
  PXRThumborUrlBuilder_TrimPixelColor_BOTTOM_RIGHT = 1,
};

/**
 @brief Orientation from where to get the pixel color for trim.
 */
@interface PXRThumborUrlBuilder_TrimPixelColorEnum : JavaLangEnum < NSCopying > {
 @public
  NSString *value_;
}

#pragma mark Package-Private

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *PXRThumborUrlBuilder_TrimPixelColorEnum_values();

+ (PXRThumborUrlBuilder_TrimPixelColorEnum *)valueOfWithNSString:(NSString *)name;

FOUNDATION_EXPORT PXRThumborUrlBuilder_TrimPixelColorEnum *PXRThumborUrlBuilder_TrimPixelColorEnum_valueOfWithNSString_(NSString *name);
- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(PXRThumborUrlBuilder_TrimPixelColorEnum)

FOUNDATION_EXPORT PXRThumborUrlBuilder_TrimPixelColorEnum *PXRThumborUrlBuilder_TrimPixelColorEnum_values_[];

#define PXRThumborUrlBuilder_TrimPixelColorEnum_TOP_LEFT PXRThumborUrlBuilder_TrimPixelColorEnum_values_[PXRThumborUrlBuilder_TrimPixelColor_TOP_LEFT]
J2OBJC_ENUM_CONSTANT_GETTER(PXRThumborUrlBuilder_TrimPixelColorEnum, TOP_LEFT)

#define PXRThumborUrlBuilder_TrimPixelColorEnum_BOTTOM_RIGHT PXRThumborUrlBuilder_TrimPixelColorEnum_values_[PXRThumborUrlBuilder_TrimPixelColor_BOTTOM_RIGHT]
J2OBJC_ENUM_CONSTANT_GETTER(PXRThumborUrlBuilder_TrimPixelColorEnum, BOTTOM_RIGHT)

J2OBJC_FIELD_SETTER(PXRThumborUrlBuilder_TrimPixelColorEnum, value_, NSString *)

J2OBJC_TYPE_LITERAL_HEADER(PXRThumborUrlBuilder_TrimPixelColorEnum)

typedef NS_ENUM(NSUInteger, PXRThumborUrlBuilder_ImageFormat) {
  PXRThumborUrlBuilder_ImageFormat_GIF = 0,
  PXRThumborUrlBuilder_ImageFormat_JPEG = 1,
  PXRThumborUrlBuilder_ImageFormat_PNG = 2,
  PXRThumborUrlBuilder_ImageFormat_WEBP = 3,
};

/**
 @brief Image formats supported by Thumbor.
 */
@interface PXRThumborUrlBuilder_ImageFormatEnum : JavaLangEnum < NSCopying > {
 @public
  NSString *value_;
}

#pragma mark Package-Private

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *PXRThumborUrlBuilder_ImageFormatEnum_values();

+ (PXRThumborUrlBuilder_ImageFormatEnum *)valueOfWithNSString:(NSString *)name;

FOUNDATION_EXPORT PXRThumborUrlBuilder_ImageFormatEnum *PXRThumborUrlBuilder_ImageFormatEnum_valueOfWithNSString_(NSString *name);
- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(PXRThumborUrlBuilder_ImageFormatEnum)

FOUNDATION_EXPORT PXRThumborUrlBuilder_ImageFormatEnum *PXRThumborUrlBuilder_ImageFormatEnum_values_[];

#define PXRThumborUrlBuilder_ImageFormatEnum_GIF PXRThumborUrlBuilder_ImageFormatEnum_values_[PXRThumborUrlBuilder_ImageFormat_GIF]
J2OBJC_ENUM_CONSTANT_GETTER(PXRThumborUrlBuilder_ImageFormatEnum, GIF)

#define PXRThumborUrlBuilder_ImageFormatEnum_JPEG PXRThumborUrlBuilder_ImageFormatEnum_values_[PXRThumborUrlBuilder_ImageFormat_JPEG]
J2OBJC_ENUM_CONSTANT_GETTER(PXRThumborUrlBuilder_ImageFormatEnum, JPEG)

#define PXRThumborUrlBuilder_ImageFormatEnum_PNG PXRThumborUrlBuilder_ImageFormatEnum_values_[PXRThumborUrlBuilder_ImageFormat_PNG]
J2OBJC_ENUM_CONSTANT_GETTER(PXRThumborUrlBuilder_ImageFormatEnum, PNG)

#define PXRThumborUrlBuilder_ImageFormatEnum_WEBP PXRThumborUrlBuilder_ImageFormatEnum_values_[PXRThumborUrlBuilder_ImageFormat_WEBP]
J2OBJC_ENUM_CONSTANT_GETTER(PXRThumborUrlBuilder_ImageFormatEnum, WEBP)

J2OBJC_FIELD_SETTER(PXRThumborUrlBuilder_ImageFormatEnum, value_, NSString *)

J2OBJC_TYPE_LITERAL_HEADER(PXRThumborUrlBuilder_ImageFormatEnum)

#endif // _PXRThumborUrlBuilder_H_
