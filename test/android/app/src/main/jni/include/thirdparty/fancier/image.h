#ifndef _FANCIER_IMAGE_H_
#define _FANCIER_IMAGE_H_

#include <fancier/platform.h>
#include <fancier/vector.h>
#include <fancier/vector_array.h>

#include <jni.h>

#ifdef __ANDROID__
#include <android/bitmap.h>
#endif  // __ANDROID__

extern jclass fcRGBAImage_class;
extern jmethodID fcRGBAImage_constructor;

typedef struct {
  fcInt ref_count;
  fcInt2 dims;
  fcByte4Array* pixels;
} fcRGBAImage;


FANCIER_API jint fcImage_initJNI(JNIEnv* env);
FANCIER_API void fcImage_releaseJNI(JNIEnv* env);

FANCIER_API fcRGBAImage* fcRGBAImage_getJava(JNIEnv* env, jobject obj);
FANCIER_API fcError fcRGBAImage_createRef(fcRGBAImage* self);
FANCIER_API fcError fcRGBAImage_releaseRef(fcRGBAImage* self);

FANCIER_API fcError fcRGBAImage_init(fcRGBAImage* self);
FANCIER_API fcError fcRGBAImage_initDims(fcRGBAImage* self, fcInt2 dims);
FANCIER_API fcError fcRGBAImage_initSize(fcRGBAImage* self, fcInt width, fcInt height);
FANCIER_API fcError fcRGBAImage_initPixels(fcRGBAImage* self, fcInt width, fcInt height,
                                           const fcInt* pixels);
FANCIER_API fcError fcRGBAImage_initCopy(fcRGBAImage* self, const fcRGBAImage* image);
FANCIER_API fcError fcRGBAImage_release(fcRGBAImage* self);

FANCIER_API fcByte4 fcRGBAImage_getCoords(fcRGBAImage* self, fcInt2 coords, fcError* err);
FANCIER_API fcByte4 fcRGBAImage_get(fcRGBAImage* self, fcInt x, fcInt y, fcError* err);
FANCIER_API fcError fcRGBAImage_setCoords(fcRGBAImage* self, fcInt2 coords, fcByte4 argb);
FANCIER_API fcError fcRGBAImage_set(fcRGBAImage* self, fcInt x, fcInt y, fcByte4 argb);

FANCIER_API fcError fcRGBAImage_setPixels(fcRGBAImage* self, fcInt width, fcInt height,
                                          const fcInt* pixels);
FANCIER_API fcError fcRGBAImage_setPixelsCopy(fcRGBAImage* self, const fcRGBAImage* image);

FANCIER_API fcError fcRGBAImage_syncToNative(fcRGBAImage* self);
FANCIER_API fcError fcRGBAImage_syncToOCL(fcRGBAImage* self);
FANCIER_API fcBool fcRGBAImage_valid(const fcRGBAImage* self);

#ifdef __ANDROID__
FANCIER_API fcError fcRGBAImage_initBitmap(fcRGBAImage* self, AndroidBitmapInfo info,
                                           const void* pixels);

FANCIER_API fcError fcRGBAImage_setPixelsBitmap(fcRGBAImage* self, AndroidBitmapInfo info,
                                                const void* pixels);

FANCIER_API fcError fcRGBAImage_updateBitmap(fcRGBAImage* self, AndroidBitmapInfo info,
                                             void* pixels);
#endif  // __ANDROID__

#endif  // _FANCIER_IMAGE_H_
