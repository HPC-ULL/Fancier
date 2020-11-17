#ifndef _FANCIER_IMAGE_H_
#define _FANCIER_IMAGE_H_

#include <jni.h>

#include <fancier/platform.h>
#include <fancier/vector.h>
#include <fancier/vector_array.h>

#ifdef __ANDROID__
#include <android/bitmap.h>
#endif // __ANDROID__

extern jclass fcARGBImage_class;
extern jmethodID fcARGBImage_constructor;

typedef struct {
  int ref_count;
  fcInt2 dims;
  fcByte4Array* pixels;
} fcARGBImage;


FANCIER_API jint fcImage_initJNI(JNIEnv* env);
FANCIER_API void fcImage_releaseJNI(JNIEnv* env);

FANCIER_API fcARGBImage* fcARGBImage_getJava (JNIEnv* env, jobject obj);
FANCIER_API int          fcARGBImage_createRef (fcARGBImage* self);
FANCIER_API int          fcARGBImage_releaseRef (fcARGBImage* self);
FANCIER_API int          fcARGBImage_init (fcARGBImage* self);
FANCIER_API int          fcARGBImage_initDims (fcARGBImage* self, fcInt2 dims);
FANCIER_API int          fcARGBImage_initSize (fcARGBImage* self, int width, int height);
FANCIER_API int          fcARGBImage_initPixels (fcARGBImage* self, jint* pixels, int width,
                                                 int height);
FANCIER_API int          fcARGBImage_initCopy (fcARGBImage* self, const fcARGBImage* image);
FANCIER_API int          fcARGBImage_release (fcARGBImage* self);
FANCIER_API fcByte4      fcARGBImage_getCoords (fcARGBImage* self, fcInt2 coords, int* err);
FANCIER_API fcByte4      fcARGBImage_get (fcARGBImage* self, int x, int y, int* err);
FANCIER_API int          fcARGBImage_setCoords (fcARGBImage* self, fcInt2 coords, fcByte4 argb);
FANCIER_API int          fcARGBImage_set (fcARGBImage* self, int x, int y, fcByte4 argb);
FANCIER_API int          fcARGBImage_syncToNative (fcARGBImage* self);
FANCIER_API int          fcARGBImage_syncToOCL (fcARGBImage* self);
FANCIER_API jboolean     fcARGBImage_valid (const fcARGBImage* self);

#ifdef __ANDROID__
FANCIER_API int        fcARGBImage_initBitmap (fcARGBImage* self, AndroidBitmapInfo info, const void* pixels);
#endif // __ANDROID__

#endif // _FANCIER_IMAGE_H_
