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
  int ref_count;
  fcInt2 dims;
  fcByte4Array* pixels;
} fcRGBAImage;


FANCIER_API jint fcImage_initJNI(JNIEnv* env);
FANCIER_API void fcImage_releaseJNI(JNIEnv* env);

FANCIER_API fcRGBAImage* fcRGBAImage_getJava(JNIEnv* env, jobject obj);
FANCIER_API int fcRGBAImage_createRef(fcRGBAImage* self);
FANCIER_API int fcRGBAImage_releaseRef(fcRGBAImage* self);

FANCIER_API int fcRGBAImage_init(fcRGBAImage* self);
FANCIER_API int fcRGBAImage_initDims(fcRGBAImage* self, fcInt2 dims);
FANCIER_API int fcRGBAImage_initSize(fcRGBAImage* self, int width, int height);
FANCIER_API int fcRGBAImage_initPixels(fcRGBAImage* self, int width, int height,
                                       const jint* pixels);
FANCIER_API int fcRGBAImage_initCopy(fcRGBAImage* self, const fcRGBAImage* image);
FANCIER_API int fcRGBAImage_release(fcRGBAImage* self);

FANCIER_API fcByte4 fcRGBAImage_getCoords(fcRGBAImage* self, fcInt2 coords, int* err);
FANCIER_API fcByte4 fcRGBAImage_get(fcRGBAImage* self, int x, int y, int* err);
FANCIER_API int fcRGBAImage_setCoords(fcRGBAImage* self, fcInt2 coords, fcByte4 argb);
FANCIER_API int fcRGBAImage_set(fcRGBAImage* self, int x, int y, fcByte4 argb);

FANCIER_API int fcRGBAImage_setPixels(fcRGBAImage* self, int width, int height, const jint* pixels);
FANCIER_API int fcRGBAImage_setPixelsCopy(fcRGBAImage* self, const fcRGBAImage* image);

FANCIER_API int fcRGBAImage_syncToNative(fcRGBAImage* self);
FANCIER_API int fcRGBAImage_syncToOCL(fcRGBAImage* self);
FANCIER_API jboolean fcRGBAImage_valid(const fcRGBAImage* self);

#ifdef __ANDROID__
FANCIER_API int fcRGBAImage_initBitmap(fcRGBAImage* self, AndroidBitmapInfo info,
                                       const void* pixels);

FANCIER_API int fcRGBAImage_setPixelsBitmap(fcRGBAImage* self, AndroidBitmapInfo info,
                                            const void* pixels);

FANCIER_API int fcRGBAImage_updateBitmap(fcRGBAImage* self, AndroidBitmapInfo info, void* pixels);
#endif  // __ANDROID__

#endif  // _FANCIER_IMAGE_H_
