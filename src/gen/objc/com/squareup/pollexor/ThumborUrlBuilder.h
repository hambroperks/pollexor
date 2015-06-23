//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/marcussmith/HambroPerks/3rdParty/pollexor/src/main/java/com/squareup/pollexor/ThumborUrlBuilder.java
//

#ifndef _ComSquareupPollexorThumborUrlBuilder_H_
#define _ComSquareupPollexorThumborUrlBuilder_H_

@class ComSquareupPollexorThumborUrlBuilder_HorizontalAlignEnum;
@class ComSquareupPollexorThumborUrlBuilder_ImageFormatEnum;
@class ComSquareupPollexorThumborUrlBuilder_TrimPixelColorEnum;
@class ComSquareupPollexorThumborUrlBuilder_VerticalAlignEnum;
@class IOSObjectArray;
@class JavaLangStringBuilder;
@protocol JavaUtilList;

#include "J2ObjC_header.h"
#include "java/lang/Enum.h"

#define ComSquareupPollexorThumborUrlBuilder_ORIGINAL_SIZE ((jint) 0x80000000)

/**
 @brief Fluent interface to build a Thumbor URL.
 */
@interface ComSquareupPollexorThumborUrlBuilder : NSObject {
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
  ComSquareupPollexorThumborUrlBuilder_HorizontalAlignEnum *cropHorizontalAlign_;
  ComSquareupPollexorThumborUrlBuilder_VerticalAlignEnum *cropVerticalAlign_;
  ComSquareupPollexorThumborUrlBuilder_TrimPixelColorEnum *trimPixelColor_;
  id<JavaUtilList> filters_;
}

#pragma mark Public

/**
 @brief Set the horizontal alignment for the image when image gets cropped by resizing.
 @param align Horizontal alignment.
 @throws IllegalStateException if image has not been marked for resize.
 */
- (ComSquareupPollexorThumborUrlBuilder *)alignWithComSquareupPollexorThumborUrlBuilder_HorizontalAlignEnum:(ComSquareupPollexorThumborUrlBuilder_HorizontalAlignEnum *)align;

/**
 @brief Set the vertical alignment for the image when image gets cropped by resizing.
 @param align Vertical alignment.
 @throws IllegalStateException if image has not been marked for resize.
 */
- (ComSquareupPollexorThumborUrlBuilder *)alignWithComSquareupPollexorThumborUrlBuilder_VerticalAlignEnum:(ComSquareupPollexorThumborUrlBuilder_VerticalAlignEnum *)align;

/**
 @brief Set the horizontal and vertical alignment for the image when image gets cropped by resizing.
 @param valign Vertical alignment.
 @param halign Horizontal alignment.
 @throws IllegalStateException if image has not been marked for resize.
 */
- (ComSquareupPollexorThumborUrlBuilder *)alignWithComSquareupPollexorThumborUrlBuilder_VerticalAlignEnum:(ComSquareupPollexorThumborUrlBuilder_VerticalAlignEnum *)valign
                                             withComSquareupPollexorThumborUrlBuilder_HorizontalAlignEnum:(ComSquareupPollexorThumborUrlBuilder_HorizontalAlignEnum *)halign;

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
- (ComSquareupPollexorThumborUrlBuilder *)cropWithInt:(jint)top
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
- (ComSquareupPollexorThumborUrlBuilder *)filterWithNSStringArray:(IOSObjectArray *)filters;

/**
 @brief Contrain the image size inside the resized box, scaling as needed.
 @throws IllegalStateException if image has not been marked for resize.
 */
- (ComSquareupPollexorThumborUrlBuilder *)fitIn;

/**
 @brief Flip the image horizontally.
 @throws IllegalStateException if image has not been marked for resize.
 */
- (ComSquareupPollexorThumborUrlBuilder *)flipHorizontally;

/**
 @brief Flip the image vertically.
 @throws IllegalStateException if image has not been marked for resize.
 */
- (ComSquareupPollexorThumborUrlBuilder *)flipVertically;

/**
 @brief Specify the output format of the image.
 */
+ (NSString *)formatWithComSquareupPollexorThumborUrlBuilder_ImageFormatEnum:(ComSquareupPollexorThumborUrlBuilder_ImageFormatEnum *)format;

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
- (ComSquareupPollexorThumborUrlBuilder *)resizeWithInt:(jint)width
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
- (ComSquareupPollexorThumborUrlBuilder *)smart;

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
- (ComSquareupPollexorThumborUrlBuilder *)trim;

/**
 @brief Removing surrounding space in image.
 Get trim color from specified pixel.
 @param value orientation from where to get the pixel color.
 */
- (ComSquareupPollexorThumborUrlBuilder *)trimWithComSquareupPollexorThumborUrlBuilder_TrimPixelColorEnum:(ComSquareupPollexorThumborUrlBuilder_TrimPixelColorEnum *)value;

/**
 @brief Removing surrounding space in image.
 Get trim color from specified pixel.
 @param value orientation from where to get the pixel color.
 @param colorTolerance 0 - 442. This is the euclidian distance between the colors of the reference pixel and the surrounding pixels is used. If the distance is within the tolerance they'll get trimmed.
 */
- (ComSquareupPollexorThumborUrlBuilder *)trimWithComSquareupPollexorThumborUrlBuilder_TrimPixelColorEnum:(ComSquareupPollexorThumborUrlBuilder_TrimPixelColorEnum *)value
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
+ (NSString *)watermarkWithComSquareupPollexorThumborUrlBuilder:(ComSquareupPollexorThumborUrlBuilder *)image;

/**
 @brief This filter adds a watermark to the image.
 @param image Watermark image URL. It is very important to understand that the same image loader that Thumbor uses will be used here.
 @param x Horizontal position that the watermark will be in. Positive numbers indicate position from the left and negative numbers indicate position from the right.
 @param y Vertical position that the watermark will be in. Positive numbers indicate position from the top and negative numbers indicate position from the bottom.
 @throws IllegalArgumentException if <code>image</code> is null.
 */
+ (NSString *)watermarkWithComSquareupPollexorThumborUrlBuilder:(ComSquareupPollexorThumborUrlBuilder *)image
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
+ (NSString *)watermarkWithComSquareupPollexorThumborUrlBuilder:(ComSquareupPollexorThumborUrlBuilder *)image
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

J2OBJC_EMPTY_STATIC_INIT(ComSquareupPollexorThumborUrlBuilder)

J2OBJC_FIELD_SETTER(ComSquareupPollexorThumborUrlBuilder, image_, NSString *)
J2OBJC_FIELD_SETTER(ComSquareupPollexorThumborUrlBuilder, host_, NSString *)
J2OBJC_FIELD_SETTER(ComSquareupPollexorThumborUrlBuilder, key_, NSString *)
J2OBJC_FIELD_SETTER(ComSquareupPollexorThumborUrlBuilder, cropHorizontalAlign_, ComSquareupPollexorThumborUrlBuilder_HorizontalAlignEnum *)
J2OBJC_FIELD_SETTER(ComSquareupPollexorThumborUrlBuilder, cropVerticalAlign_, ComSquareupPollexorThumborUrlBuilder_VerticalAlignEnum *)
J2OBJC_FIELD_SETTER(ComSquareupPollexorThumborUrlBuilder, trimPixelColor_, ComSquareupPollexorThumborUrlBuilder_TrimPixelColorEnum *)
J2OBJC_FIELD_SETTER(ComSquareupPollexorThumborUrlBuilder, filters_, id<JavaUtilList>)

J2OBJC_STATIC_FIELD_GETTER(ComSquareupPollexorThumborUrlBuilder, ORIGINAL_SIZE, jint)

FOUNDATION_EXPORT void ComSquareupPollexorThumborUrlBuilder_initWithNSString_withNSString_withNSString_(ComSquareupPollexorThumborUrlBuilder *self, NSString *host, NSString *key, NSString *image);

FOUNDATION_EXPORT ComSquareupPollexorThumborUrlBuilder *new_ComSquareupPollexorThumborUrlBuilder_initWithNSString_withNSString_withNSString_(NSString *host, NSString *key, NSString *image) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT NSString *ComSquareupPollexorThumborUrlBuilder_brightnessWithInt_(jint amount);

FOUNDATION_EXPORT NSString *ComSquareupPollexorThumborUrlBuilder_contrastWithInt_(jint amount);

FOUNDATION_EXPORT NSString *ComSquareupPollexorThumborUrlBuilder_noiseWithInt_(jint amount);

FOUNDATION_EXPORT NSString *ComSquareupPollexorThumborUrlBuilder_qualityWithInt_(jint amount);

FOUNDATION_EXPORT NSString *ComSquareupPollexorThumborUrlBuilder_rgbWithInt_withInt_withInt_(jint r, jint g, jint b);

FOUNDATION_EXPORT NSString *ComSquareupPollexorThumborUrlBuilder_roundCornerWithInt_(jint radius);

FOUNDATION_EXPORT NSString *ComSquareupPollexorThumborUrlBuilder_roundCornerWithInt_withInt_(jint radius, jint color);

FOUNDATION_EXPORT NSString *ComSquareupPollexorThumborUrlBuilder_roundCornerWithInt_withInt_withInt_(jint radiusInner, jint radiusOuter, jint color);

FOUNDATION_EXPORT NSString *ComSquareupPollexorThumborUrlBuilder_watermarkWithNSString_(NSString *imageUrl);

FOUNDATION_EXPORT NSString *ComSquareupPollexorThumborUrlBuilder_watermarkWithComSquareupPollexorThumborUrlBuilder_(ComSquareupPollexorThumborUrlBuilder *image);

FOUNDATION_EXPORT NSString *ComSquareupPollexorThumborUrlBuilder_watermarkWithNSString_withInt_withInt_(NSString *imageUrl, jint x, jint y);

FOUNDATION_EXPORT NSString *ComSquareupPollexorThumborUrlBuilder_watermarkWithComSquareupPollexorThumborUrlBuilder_withInt_withInt_(ComSquareupPollexorThumborUrlBuilder *image, jint x, jint y);

FOUNDATION_EXPORT NSString *ComSquareupPollexorThumborUrlBuilder_watermarkWithNSString_withInt_withInt_withInt_(NSString *imageUrl, jint x, jint y, jint transparency);

FOUNDATION_EXPORT NSString *ComSquareupPollexorThumborUrlBuilder_watermarkWithComSquareupPollexorThumborUrlBuilder_withInt_withInt_withInt_(ComSquareupPollexorThumborUrlBuilder *image, jint x, jint y, jint transparency);

FOUNDATION_EXPORT NSString *ComSquareupPollexorThumborUrlBuilder_sharpenWithFloat_withFloat_withBoolean_(jfloat amount, jfloat radius, jboolean luminanceOnly);

FOUNDATION_EXPORT NSString *ComSquareupPollexorThumborUrlBuilder_fillWithInt_(jint color);

FOUNDATION_EXPORT NSString *ComSquareupPollexorThumborUrlBuilder_formatWithComSquareupPollexorThumborUrlBuilder_ImageFormatEnum_(ComSquareupPollexorThumborUrlBuilder_ImageFormatEnum *format);

FOUNDATION_EXPORT NSString *ComSquareupPollexorThumborUrlBuilder_frameWithNSString_(NSString *imageUrl);

FOUNDATION_EXPORT NSString *ComSquareupPollexorThumborUrlBuilder_stripicc();

FOUNDATION_EXPORT NSString *ComSquareupPollexorThumborUrlBuilder_grayscale();

FOUNDATION_EXPORT NSString *ComSquareupPollexorThumborUrlBuilder_equalize();

FOUNDATION_EXPORT NSString *ComSquareupPollexorThumborUrlBuilder_blurWithInt_(jint radius);

FOUNDATION_EXPORT NSString *ComSquareupPollexorThumborUrlBuilder_blurWithInt_withInt_(jint radius, jint sigma);

FOUNDATION_EXPORT NSString *ComSquareupPollexorThumborUrlBuilder_noUpscale();

FOUNDATION_EXPORT NSString *ComSquareupPollexorThumborUrlBuilder_rotateWithInt_(jint angle);

J2OBJC_TYPE_LITERAL_HEADER(ComSquareupPollexorThumborUrlBuilder)

typedef NS_ENUM(NSUInteger, ComSquareupPollexorThumborUrlBuilder_HorizontalAlign) {
  ComSquareupPollexorThumborUrlBuilder_HorizontalAlign_LEFT = 0,
  ComSquareupPollexorThumborUrlBuilder_HorizontalAlign_CENTER = 1,
  ComSquareupPollexorThumborUrlBuilder_HorizontalAlign_RIGHT = 2,
};

/**
 @brief Horizontal alignment for crop positioning.
 */
@interface ComSquareupPollexorThumborUrlBuilder_HorizontalAlignEnum : JavaLangEnum < NSCopying > {
 @public
  NSString *value_;
}

#pragma mark Package-Private

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *ComSquareupPollexorThumborUrlBuilder_HorizontalAlignEnum_values();

+ (ComSquareupPollexorThumborUrlBuilder_HorizontalAlignEnum *)valueOfWithNSString:(NSString *)name;

FOUNDATION_EXPORT ComSquareupPollexorThumborUrlBuilder_HorizontalAlignEnum *ComSquareupPollexorThumborUrlBuilder_HorizontalAlignEnum_valueOfWithNSString_(NSString *name);
- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(ComSquareupPollexorThumborUrlBuilder_HorizontalAlignEnum)

FOUNDATION_EXPORT ComSquareupPollexorThumborUrlBuilder_HorizontalAlignEnum *ComSquareupPollexorThumborUrlBuilder_HorizontalAlignEnum_values_[];

#define ComSquareupPollexorThumborUrlBuilder_HorizontalAlignEnum_LEFT ComSquareupPollexorThumborUrlBuilder_HorizontalAlignEnum_values_[ComSquareupPollexorThumborUrlBuilder_HorizontalAlign_LEFT]
J2OBJC_ENUM_CONSTANT_GETTER(ComSquareupPollexorThumborUrlBuilder_HorizontalAlignEnum, LEFT)

#define ComSquareupPollexorThumborUrlBuilder_HorizontalAlignEnum_CENTER ComSquareupPollexorThumborUrlBuilder_HorizontalAlignEnum_values_[ComSquareupPollexorThumborUrlBuilder_HorizontalAlign_CENTER]
J2OBJC_ENUM_CONSTANT_GETTER(ComSquareupPollexorThumborUrlBuilder_HorizontalAlignEnum, CENTER)

#define ComSquareupPollexorThumborUrlBuilder_HorizontalAlignEnum_RIGHT ComSquareupPollexorThumborUrlBuilder_HorizontalAlignEnum_values_[ComSquareupPollexorThumborUrlBuilder_HorizontalAlign_RIGHT]
J2OBJC_ENUM_CONSTANT_GETTER(ComSquareupPollexorThumborUrlBuilder_HorizontalAlignEnum, RIGHT)

J2OBJC_FIELD_SETTER(ComSquareupPollexorThumborUrlBuilder_HorizontalAlignEnum, value_, NSString *)

J2OBJC_TYPE_LITERAL_HEADER(ComSquareupPollexorThumborUrlBuilder_HorizontalAlignEnum)

typedef NS_ENUM(NSUInteger, ComSquareupPollexorThumborUrlBuilder_VerticalAlign) {
  ComSquareupPollexorThumborUrlBuilder_VerticalAlign_TOP = 0,
  ComSquareupPollexorThumborUrlBuilder_VerticalAlign_MIDDLE = 1,
  ComSquareupPollexorThumborUrlBuilder_VerticalAlign_BOTTOM = 2,
};

/**
 @brief Vertical alignment for crop positioning.
 */
@interface ComSquareupPollexorThumborUrlBuilder_VerticalAlignEnum : JavaLangEnum < NSCopying > {
 @public
  NSString *value_;
}

#pragma mark Package-Private

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *ComSquareupPollexorThumborUrlBuilder_VerticalAlignEnum_values();

+ (ComSquareupPollexorThumborUrlBuilder_VerticalAlignEnum *)valueOfWithNSString:(NSString *)name;

FOUNDATION_EXPORT ComSquareupPollexorThumborUrlBuilder_VerticalAlignEnum *ComSquareupPollexorThumborUrlBuilder_VerticalAlignEnum_valueOfWithNSString_(NSString *name);
- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(ComSquareupPollexorThumborUrlBuilder_VerticalAlignEnum)

FOUNDATION_EXPORT ComSquareupPollexorThumborUrlBuilder_VerticalAlignEnum *ComSquareupPollexorThumborUrlBuilder_VerticalAlignEnum_values_[];

#define ComSquareupPollexorThumborUrlBuilder_VerticalAlignEnum_TOP ComSquareupPollexorThumborUrlBuilder_VerticalAlignEnum_values_[ComSquareupPollexorThumborUrlBuilder_VerticalAlign_TOP]
J2OBJC_ENUM_CONSTANT_GETTER(ComSquareupPollexorThumborUrlBuilder_VerticalAlignEnum, TOP)

#define ComSquareupPollexorThumborUrlBuilder_VerticalAlignEnum_MIDDLE ComSquareupPollexorThumborUrlBuilder_VerticalAlignEnum_values_[ComSquareupPollexorThumborUrlBuilder_VerticalAlign_MIDDLE]
J2OBJC_ENUM_CONSTANT_GETTER(ComSquareupPollexorThumborUrlBuilder_VerticalAlignEnum, MIDDLE)

#define ComSquareupPollexorThumborUrlBuilder_VerticalAlignEnum_BOTTOM ComSquareupPollexorThumborUrlBuilder_VerticalAlignEnum_values_[ComSquareupPollexorThumborUrlBuilder_VerticalAlign_BOTTOM]
J2OBJC_ENUM_CONSTANT_GETTER(ComSquareupPollexorThumborUrlBuilder_VerticalAlignEnum, BOTTOM)

J2OBJC_FIELD_SETTER(ComSquareupPollexorThumborUrlBuilder_VerticalAlignEnum, value_, NSString *)

J2OBJC_TYPE_LITERAL_HEADER(ComSquareupPollexorThumborUrlBuilder_VerticalAlignEnum)

typedef NS_ENUM(NSUInteger, ComSquareupPollexorThumborUrlBuilder_TrimPixelColor) {
  ComSquareupPollexorThumborUrlBuilder_TrimPixelColor_TOP_LEFT = 0,
  ComSquareupPollexorThumborUrlBuilder_TrimPixelColor_BOTTOM_RIGHT = 1,
};

/**
 @brief Orientation from where to get the pixel color for trim.
 */
@interface ComSquareupPollexorThumborUrlBuilder_TrimPixelColorEnum : JavaLangEnum < NSCopying > {
 @public
  NSString *value_;
}

#pragma mark Package-Private

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *ComSquareupPollexorThumborUrlBuilder_TrimPixelColorEnum_values();

+ (ComSquareupPollexorThumborUrlBuilder_TrimPixelColorEnum *)valueOfWithNSString:(NSString *)name;

FOUNDATION_EXPORT ComSquareupPollexorThumborUrlBuilder_TrimPixelColorEnum *ComSquareupPollexorThumborUrlBuilder_TrimPixelColorEnum_valueOfWithNSString_(NSString *name);
- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(ComSquareupPollexorThumborUrlBuilder_TrimPixelColorEnum)

FOUNDATION_EXPORT ComSquareupPollexorThumborUrlBuilder_TrimPixelColorEnum *ComSquareupPollexorThumborUrlBuilder_TrimPixelColorEnum_values_[];

#define ComSquareupPollexorThumborUrlBuilder_TrimPixelColorEnum_TOP_LEFT ComSquareupPollexorThumborUrlBuilder_TrimPixelColorEnum_values_[ComSquareupPollexorThumborUrlBuilder_TrimPixelColor_TOP_LEFT]
J2OBJC_ENUM_CONSTANT_GETTER(ComSquareupPollexorThumborUrlBuilder_TrimPixelColorEnum, TOP_LEFT)

#define ComSquareupPollexorThumborUrlBuilder_TrimPixelColorEnum_BOTTOM_RIGHT ComSquareupPollexorThumborUrlBuilder_TrimPixelColorEnum_values_[ComSquareupPollexorThumborUrlBuilder_TrimPixelColor_BOTTOM_RIGHT]
J2OBJC_ENUM_CONSTANT_GETTER(ComSquareupPollexorThumborUrlBuilder_TrimPixelColorEnum, BOTTOM_RIGHT)

J2OBJC_FIELD_SETTER(ComSquareupPollexorThumborUrlBuilder_TrimPixelColorEnum, value_, NSString *)

J2OBJC_TYPE_LITERAL_HEADER(ComSquareupPollexorThumborUrlBuilder_TrimPixelColorEnum)

typedef NS_ENUM(NSUInteger, ComSquareupPollexorThumborUrlBuilder_ImageFormat) {
  ComSquareupPollexorThumborUrlBuilder_ImageFormat_GIF = 0,
  ComSquareupPollexorThumborUrlBuilder_ImageFormat_JPEG = 1,
  ComSquareupPollexorThumborUrlBuilder_ImageFormat_PNG = 2,
  ComSquareupPollexorThumborUrlBuilder_ImageFormat_WEBP = 3,
};

/**
 @brief Image formats supported by Thumbor.
 */
@interface ComSquareupPollexorThumborUrlBuilder_ImageFormatEnum : JavaLangEnum < NSCopying > {
 @public
  NSString *value_;
}

#pragma mark Package-Private

+ (IOSObjectArray *)values;
FOUNDATION_EXPORT IOSObjectArray *ComSquareupPollexorThumborUrlBuilder_ImageFormatEnum_values();

+ (ComSquareupPollexorThumborUrlBuilder_ImageFormatEnum *)valueOfWithNSString:(NSString *)name;

FOUNDATION_EXPORT ComSquareupPollexorThumborUrlBuilder_ImageFormatEnum *ComSquareupPollexorThumborUrlBuilder_ImageFormatEnum_valueOfWithNSString_(NSString *name);
- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(ComSquareupPollexorThumborUrlBuilder_ImageFormatEnum)

FOUNDATION_EXPORT ComSquareupPollexorThumborUrlBuilder_ImageFormatEnum *ComSquareupPollexorThumborUrlBuilder_ImageFormatEnum_values_[];

#define ComSquareupPollexorThumborUrlBuilder_ImageFormatEnum_GIF ComSquareupPollexorThumborUrlBuilder_ImageFormatEnum_values_[ComSquareupPollexorThumborUrlBuilder_ImageFormat_GIF]
J2OBJC_ENUM_CONSTANT_GETTER(ComSquareupPollexorThumborUrlBuilder_ImageFormatEnum, GIF)

#define ComSquareupPollexorThumborUrlBuilder_ImageFormatEnum_JPEG ComSquareupPollexorThumborUrlBuilder_ImageFormatEnum_values_[ComSquareupPollexorThumborUrlBuilder_ImageFormat_JPEG]
J2OBJC_ENUM_CONSTANT_GETTER(ComSquareupPollexorThumborUrlBuilder_ImageFormatEnum, JPEG)

#define ComSquareupPollexorThumborUrlBuilder_ImageFormatEnum_PNG ComSquareupPollexorThumborUrlBuilder_ImageFormatEnum_values_[ComSquareupPollexorThumborUrlBuilder_ImageFormat_PNG]
J2OBJC_ENUM_CONSTANT_GETTER(ComSquareupPollexorThumborUrlBuilder_ImageFormatEnum, PNG)

#define ComSquareupPollexorThumborUrlBuilder_ImageFormatEnum_WEBP ComSquareupPollexorThumborUrlBuilder_ImageFormatEnum_values_[ComSquareupPollexorThumborUrlBuilder_ImageFormat_WEBP]
J2OBJC_ENUM_CONSTANT_GETTER(ComSquareupPollexorThumborUrlBuilder_ImageFormatEnum, WEBP)

J2OBJC_FIELD_SETTER(ComSquareupPollexorThumborUrlBuilder_ImageFormatEnum, value_, NSString *)

J2OBJC_TYPE_LITERAL_HEADER(ComSquareupPollexorThumborUrlBuilder_ImageFormatEnum)

#endif // _ComSquareupPollexorThumborUrlBuilder_H_
