/*
 * Fancier: Unified Java, JNI and OpenCL Integration High-Performance GPGPU API.
 * Copyright (C) 2021 Universidad de La Laguna.
 *
 * Fancier is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Fancier is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Fancier.  If not, see <https://www.gnu.org/licenses/>.
 */

#include <fancier/exception.h>
#include <fancier/image.h>
#include <fancier/java.h>

#include <fancier/internal/snippets.inc>

#include <string.h>


//
// Global Java References
//

jclass fcRGBAImage_class = NULL;
jmethodID fcRGBAImage_constructor = NULL;

//
// Global Java Initialization / Destruction
//

jint fcImage_initJNI(JNIEnv* env) {
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/image/RGBAImage", fcRGBAImage_class,
                    "fcImage_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcRGBAImage_constructor, fcRGBAImage_class, "J", "fcImage_initJNI",
                      FC_EXCEPTION_METHOD_NOT_FOUND);

  return FC_EXCEPTION_SUCCESS;
}

void fcImage_releaseJNI(JNIEnv* env) {
  FC_FREE_CLASS_REF(env, fcRGBAImage_class);
  fcRGBAImage_constructor = NULL;
}


//
// fcRGBAImage
//

FC_JAVA_INSTANCE_HANDLERS(fcRGBAImage);

//
// Java Interface Implementation
//

JNIEXPORT void JNICALL Java_es_ull_pcg_hpc_fancier_image_RGBAImage_initNative__L(JNIEnv* env,
                                                                                 jobject obj,
                                                                                 jlong nativePtr) {
  fcRGBAImage_setJava(env, obj, nativePtr);
}

JNIEXPORT void JNICALL Java_es_ull_pcg_hpc_fancier_image_RGBAImage_initNative__II(JNIEnv* env,
                                                                                  jobject obj,
                                                                                  jint width,
                                                                                  jint height) {
  // Allocate instance
  fcRGBAImage* self = fcRGBAImage_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcRGBAImage_allocJava",
                           FC_VOID_EXPR);

  // Initialize image
  jint err = fcRGBAImage_initSize(self, width, height);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcRGBAImage_initSize", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL Java_es_ull_pcg_hpc_fancier_image_RGBAImage_initNative___3II(
    JNIEnv* env, jobject obj, jintArray pixels, jint width) {
  // Allocate instance
  fcRGBAImage* self = fcRGBAImage_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcRGBAImage_allocJava",
                           FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, pixels, FC_EXCEPTION_BAD_PARAMETER,
                           "RGBAImage_initNative__[II:pixels", FC_VOID_EXPR);

  // Initialize image
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, pixels);
  if (__tmp_len % width != 0)
    FC_EXCEPTION_HANDLE_ERROR(env, FC_EXCEPTION_BAD_PARAMETER,
                              "RGBAImage_initNative__[II:pixels,width", FC_VOID_EXPR);

  jint* __tmp_elems_pixels = FC_JNI_CALL(env, GetIntArrayElements, pixels, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_pixels, FC_EXCEPTION_ARRAY_GET_ELEMENTS,
                           "RGBAImage_initNative__[II:pixels", FC_VOID_EXPR);

  jint err = fcRGBAImage_initPixels(self, width, __tmp_len / width, __tmp_elems_pixels);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseIntArrayElements, pixels, __tmp_elems_pixels, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcRGBAImage_initPixels", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_image_RGBAImage_initNative__Les_ull_pcg_hpc_fancier_image_RGBAImage_2(
    JNIEnv* env, jobject obj, jobject image) {
  // Allocate instance
  fcRGBAImage* self = fcRGBAImage_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcRGBAImage_allocJava",
                           FC_VOID_EXPR);

  // Initialize image
  fcRGBAImage* __tmp_image = fcRGBAImage_getJava(env, image);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_image, FC_EXCEPTION_BAD_PARAMETER,
                           "fcRGBAImage_getJava:image", FC_VOID_EXPR);

  jint err = fcRGBAImage_initCopy(self, __tmp_image);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcRGBAImage_initCopy", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL Java_es_ull_pcg_hpc_fancier_image_RGBAImage_releaseNative(JNIEnv* env,
                                                                                 jobject obj) {
  fcRGBAImage* self = fcRGBAImage_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcRGBAImage_getJava",
                           FC_VOID_EXPR);

  // Release memory buffers and decrease the reference count to the instance object
  jint err = fcRGBAImage_release(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcRGBAImage_release", FC_VOID_EXPR);

  fcRGBAImage_setJava(env, obj, 0L);
}

JNIEXPORT void JNICALL Java_es_ull_pcg_hpc_fancier_image_RGBAImage_releaseNativeRef(JNIEnv* env,
                                                                                    jobject obj) {
  fcRGBAImage* self = fcRGBAImage_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcRGBAImage_getJava",
                           FC_VOID_EXPR);

  // Release the reference to the instance object and only release the buffers in it as well if this
  // was the only remaining reference to that object
  jint err = fcRGBAImage_releaseRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcRGBAImage_releaseRef", FC_VOID_EXPR);

  fcRGBAImage_setJava(env, obj, 0L);
}

JNIEXPORT jobject JNICALL Java_es_ull_pcg_hpc_fancier_image_RGBAImage_get__II(JNIEnv* env,
                                                                              jobject obj, jint x,
                                                                              jint y) {
  fcRGBAImage* self = fcRGBAImage_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcRGBAImage_getJava", NULL);

  jint err;
  fcByte4 __tmp_ret = fcRGBAImage_get(self, x, y, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcRGBAImage_get", NULL);

  return fcByte4_wrap(env, __tmp_ret);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_image_RGBAImage_set__IILes_ull_pcg_hpc_fancier_vector_Byte4_2(
    JNIEnv* env, jobject obj, jint x, jint y, jobject rgba) {
  fcRGBAImage* self = fcRGBAImage_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcRGBAImage_getJava",
                           FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, rgba, FC_EXCEPTION_BAD_PARAMETER,
                           "RGBAImage_set__IILes_ull_pcg_hpc_fancier_vector_Byte4;:rgba",
                           FC_VOID_EXPR);

  jint err;
  fcByte4 __tmp_argb = fcByte4_unwrap(env, rgba, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte4_unwrap", FC_VOID_EXPR);

  err = fcRGBAImage_set(self, x, y, __tmp_argb);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcRGBAImage_set", FC_VOID_EXPR);
}

JNIEXPORT jobject JNICALL Java_es_ull_pcg_hpc_fancier_image_RGBAImage_getPixels(JNIEnv* env,
                                                                                jobject obj) {
  fcRGBAImage* self = fcRGBAImage_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcRGBAImage_getJava", NULL);

  FC_EXCEPTION_HANDLE_NULL(env, self->pixels, FC_EXCEPTION_INVALID_STATE,
                           "RGBAImage_getPixels:pixels", NULL);
  return FC_JNI_CALL(env, NewObject, fcByte4Array_class, fcByte4Array_constructor,
                     (jlong) self->pixels);
}

JNIEXPORT void JNICALL Java_es_ull_pcg_hpc_fancier_image_RGBAImage_setPixels__3II(JNIEnv* env,
                                                                                  jobject obj,
                                                                                  jintArray pixels,
                                                                                  jint width) {
  fcRGBAImage* self = fcRGBAImage_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcRGBAImage_getJava",
                           FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, self->pixels, FC_EXCEPTION_INVALID_STATE,
                           "RGBAImage_setPixels:pixels", FC_VOID_EXPR);

  // Initialize image
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, pixels);
  if (__tmp_len % width != 0)
    FC_EXCEPTION_HANDLE_ERROR(env, FC_EXCEPTION_BAD_PARAMETER, "RGBAImage_setPixels:pixels,width",
                              FC_VOID_EXPR);

  jint* __tmp_elems_pixels = FC_JNI_CALL(env, GetIntArrayElements, pixels, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_pixels, FC_EXCEPTION_ARRAY_GET_ELEMENTS,
                           "RGBAImage_setPixels:pixels", FC_VOID_EXPR);

  jint err = fcRGBAImage_setPixels(self, width, __tmp_len / width, __tmp_elems_pixels);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseIntArrayElements, pixels, __tmp_elems_pixels, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcRGBAImage_setPixels", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_image_RGBAImage_setPixels__Les_ull_pcg_hpc_fancier_image_RGBAImage_2(
    JNIEnv* env, jobject obj, jobject image) {
  fcRGBAImage* self = fcRGBAImage_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcRGBAImage_getJava",
                           FC_VOID_EXPR);

  // Initialize image
  fcRGBAImage* __tmp_image = fcRGBAImage_getJava(env, image);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_image, FC_EXCEPTION_BAD_PARAMETER,
                           "fcRGBAImage_getJava:image", FC_VOID_EXPR);

  jint err = fcRGBAImage_setPixelsCopy(self, __tmp_image);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcRGBAImage_initCopy", FC_VOID_EXPR);
}

JNIEXPORT jobject JNICALL Java_es_ull_pcg_hpc_fancier_image_RGBAImage_getDims(JNIEnv* env,
                                                                              jobject obj) {
  fcRGBAImage* self = fcRGBAImage_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcRGBAImage_getJava", NULL);

  return fcInt2_wrap(env, self->dims);
}

JNIEXPORT jint JNICALL Java_es_ull_pcg_hpc_fancier_image_RGBAImage_getWidth(JNIEnv* env,
                                                                            jobject obj) {
  fcRGBAImage* self = fcRGBAImage_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcRGBAImage_getJava", 0);

  return self->dims.x;
}

JNIEXPORT jint JNICALL Java_es_ull_pcg_hpc_fancier_image_RGBAImage_getHeight(JNIEnv* env,
                                                                             jobject obj) {
  fcRGBAImage* self = fcRGBAImage_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcRGBAImage_getJava", 0);

  return self->dims.y;
}

JNIEXPORT void JNICALL Java_es_ull_pcg_hpc_fancier_image_RGBAImage_syncToNative(JNIEnv* env,
                                                                                jobject obj) {
  fcRGBAImage* self = fcRGBAImage_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcRGBAImage_getJava",
                           FC_VOID_EXPR);

  jint err = fcRGBAImage_syncToNative(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcRGBAImage_syncToNative", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL Java_es_ull_pcg_hpc_fancier_image_RGBAImage_syncToOCL(JNIEnv* env,
                                                                             jobject obj) {
  fcRGBAImage* self = fcRGBAImage_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcRGBAImage_getJava",
                           FC_VOID_EXPR);

  jint err = fcRGBAImage_syncToOCL(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcRGBAImage_syncToOCL", FC_VOID_EXPR);
}

#ifdef __ANDROID__

static fcError readBitmap(JNIEnv* env, jobject bmp, AndroidBitmapInfo* info, void** pixels) {
  if (AndroidBitmap_getInfo(env, bmp, info))
    return FC_EXCEPTION_BITMAP_INFO;

  if (AndroidBitmap_lockPixels(env, bmp, pixels))
    return FC_EXCEPTION_BITMAP_LOCK_PIXELS;

  return FC_EXCEPTION_SUCCESS;
}

static fcError freeBitmap(JNIEnv* env, jobject bmp) {
  if (AndroidBitmap_unlockPixels(env, bmp))
    return FC_EXCEPTION_BITMAP_UNLOCK_PIXELS;

  return FC_EXCEPTION_SUCCESS;
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_image_RGBAImage_initNative__Landroid_graphics_Bitmap_2(JNIEnv* env,
                                                                                   jobject obj,
                                                                                   jobject bmp) {
  jint err;

  // Allocate instance
  fcRGBAImage* self = fcRGBAImage_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcRGBAImage_allocJava",
                           FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, bmp, FC_EXCEPTION_BAD_PARAMETER,
                           "RGBAImage_initNative__Landroid_graphics_Bitmap;:bmp", FC_VOID_EXPR);

  // Initialize image
  AndroidBitmapInfo __tmp_info;
  void* __tmp_pixels;

  err = readBitmap(env, bmp, &__tmp_info, &__tmp_pixels);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "readBitmap", FC_VOID_EXPR);

  err = fcRGBAImage_initBitmap(self, __tmp_info, __tmp_pixels);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcRGBAImage_initBitmap", FC_VOID_EXPR);

  // Free temporary native array reference
  err = freeBitmap(env, bmp);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "freeBitmap", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_image_RGBAImage_setPixels__Landroid_graphics_Bitmap_2(JNIEnv* env,
                                                                                  jobject obj,
                                                                                  jobject bmp) {
  jint err;

  // Get instance
  fcRGBAImage* self = fcRGBAImage_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcRGBAImage_getJava",
                           FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, bmp, FC_EXCEPTION_BAD_PARAMETER,
                           "RGBAImage_setPixels__Landroid_graphics_Bitmap;:bmp", FC_VOID_EXPR);

  // Obtain Bitmap pixels
  AndroidBitmapInfo __tmp_info;
  void* __tmp_pixels;

  err = readBitmap(env, bmp, &__tmp_info, &__tmp_pixels);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "readBitmap", FC_VOID_EXPR);

  err = fcRGBAImage_setPixelsBitmap(self, __tmp_info, __tmp_pixels);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcRGBAImage_setPixelsBitmap", FC_VOID_EXPR);

  // Free temporary native array reference
  err = freeBitmap(env, bmp);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "freeBitmap", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_image_RGBAImage_updateBitmap__Landroid_graphics_Bitmap_2(JNIEnv* env,
                                                                                     jobject obj,
                                                                                     jobject bmp) {
  jint err;

  // Get instance
  fcRGBAImage* self = fcRGBAImage_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcRGBAImage_getJava",
                           FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, bmp, FC_EXCEPTION_BAD_PARAMETER,
                           "RGBAImage_setPixels__Landroid_graphics_Bitmap;:bmp", FC_VOID_EXPR);

  // Obtain Bitmap pixels
  AndroidBitmapInfo __tmp_info;
  void* __tmp_pixels;

  err = readBitmap(env, bmp, &__tmp_info, &__tmp_pixels);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "readBitmap", FC_VOID_EXPR);

  err = fcRGBAImage_updateBitmap(self, __tmp_info, __tmp_pixels);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcRGBAImage_updateBitmap", FC_VOID_EXPR);

  // Free temporary native array reference
  err = freeBitmap(env, bmp);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "freeBitmap", FC_VOID_EXPR);
}

#endif  // __ANDROID__

//
// Native Interface Implementation
//

fcError fcRGBAImage_createRef(fcRGBAImage* img) {
  if (img == NULL || img->pixels == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  ++img->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcRGBAImage_releaseRef(fcRGBAImage* img) {
  if (img == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  if (img->ref_count <= 1)
    return fcRGBAImage_release(img);

  --img->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcRGBAImage_init(fcRGBAImage* self) {
  if (self->pixels != NULL)
    return FC_EXCEPTION_INVALID_STATE;

  ++self->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

fcError fcRGBAImage_initDims(fcRGBAImage* self, fcInt2 dims) {
  return fcRGBAImage_initSize(self, dims.x, dims.y);
}

fcError fcRGBAImage_initSize(fcRGBAImage* self, fcInt width, fcInt height) {
  fcError err;

  // Check parameters
  if (width <= 0 || height <= 0)
    return FC_EXCEPTION_BITMAP_BAD_DIMENSIONS;

  err = fcRGBAImage_init(self);
  if (err)
    return err;

  // Initialize dimensions
  self->dims.x = width;
  self->dims.y = height;

  // Allocate array
  self->pixels = calloc(1, sizeof(fcByte4Array));
  err = fcByte4Array_initSize(self->pixels, self->dims.x * self->dims.y);
  if (err) {
    fcByte4Array_release(self->pixels);
    self->pixels = NULL;
    return err;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcRGBAImage_initPixels(fcRGBAImage* self, fcInt width, fcInt height, const fcInt* pixels) {
  fcError err;

  // Check parameters
  if (pixels == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  if (width <= 0 || height <= 0)
    return FC_EXCEPTION_BITMAP_BAD_DIMENSIONS;

  err = fcRGBAImage_init(self);
  if (err)
    return err;

  // Initialize dimensions
  self->dims.x = width;
  self->dims.y = height;

  // Allocate array
  self->pixels = calloc(1, sizeof(fcByte4Array));
  err =
      fcByte4Array_initArray(self->pixels, self->dims.x * self->dims.y * 4, (const fcByte*) pixels);
  if (err) {
    fcByte4Array_release(self->pixels);
    self->pixels = NULL;
    return err;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcRGBAImage_initCopy(fcRGBAImage* self, const fcRGBAImage* other) {
  fcError err;

  // Check parameters
  if (other == NULL || other->pixels == NULL || !fcByte4Array_valid(other->pixels))
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcRGBAImage_init(self);
  if (err)
    return err;

  // Initialize dimensions
  self->dims = other->dims;

  // Allocate array
  self->pixels = calloc(1, sizeof(fcByte4Array));
  err = fcByte4Array_initCopy(self->pixels, other->pixels);
  if (err) {
    fcByte4Array_release(self->pixels);
    self->pixels = NULL;
    return err;
  }

  return FC_EXCEPTION_SUCCESS;
}

fcError fcRGBAImage_release(fcRGBAImage* self) {
  --self->ref_count;
  if (self->pixels != NULL) {
    fcError err = fcByte4Array_release(self->pixels);
    if (err) {
      ++self->ref_count;  // Release did not succeed, so restore the ref count
      return err;
    }

    // Mark the object as deleted
    self->pixels = NULL;
  }

  // Release the instance object if there are no other references to it elsewhere
  if (self->ref_count <= 0)
    free(self);

  return FC_EXCEPTION_SUCCESS;
}

fcByte4 fcRGBAImage_getCoords(fcRGBAImage* self, fcInt2 coords, fcError* err) {
  return fcRGBAImage_get(self, coords.x, coords.y, err);
}

fcByte4 fcRGBAImage_get(fcRGBAImage* self, fcInt x, fcInt y, fcError* err) {
  fcError __tmp_err;
  if (err == NULL)
    err = &__tmp_err;

  fcByte4 __tmp_ret = {.s = {0}};
  if (!fcRGBAImage_valid(self)) {
    *err = FC_EXCEPTION_INVALID_STATE;
    return __tmp_ret;
  }

  if (x < 0 || y < 0 || x >= self->dims.x || y >= self->dims.y) {
    *err = FC_EXCEPTION_BAD_PARAMETER;
    return __tmp_ret;
  }

  return fcByte4Array_get(self->pixels, y * self->dims.x + x, err);
}

fcError fcRGBAImage_setCoords(fcRGBAImage* self, fcInt2 coords, fcByte4 rgba) {
  return fcRGBAImage_set(self, coords.x, coords.y, rgba);
}

fcError fcRGBAImage_set(fcRGBAImage* self, fcInt x, fcInt y, fcByte4 rgba) {
  if (!fcRGBAImage_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  if (x < 0 || y < 0 || x >= self->dims.x || y >= self->dims.y)
    return FC_EXCEPTION_BAD_PARAMETER;

  return fcByte4Array_set(self->pixels, y * self->dims.x + x, rgba);
}

fcError fcRGBAImage_setPixels(fcRGBAImage* self, fcInt width, fcInt height, const fcInt* pixels) {
  if (!fcRGBAImage_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  // Check parameters
  if (pixels == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  if (self->dims.x != width || self->dims.y != height)
    return FC_EXCEPTION_BITMAP_BAD_DIMENSIONS;

  // Set data
  return fcByte4Array_setArray(self->pixels, self->dims.x * self->dims.y * 4,
                               (const fcByte*) pixels);
}

fcError fcRGBAImage_setPixelsCopy(fcRGBAImage* self, const fcRGBAImage* image) {
  if (!fcRGBAImage_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  // Check parameters
  if (image == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  if (self->dims.x != image->dims.x || self->dims.y != image->dims.y)
    return FC_EXCEPTION_BITMAP_BAD_DIMENSIONS;

  // Set data
  return fcByte4Array_setCopy(self->pixels, image->pixels);
}

fcError fcRGBAImage_syncToNative(fcRGBAImage* self) {
  if (!fcRGBAImage_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  return fcByte4Array_syncToNative(self->pixels);
}

fcError fcRGBAImage_syncToOCL(fcRGBAImage* self) {
  if (!fcRGBAImage_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  return fcByte4Array_syncToOCL(self->pixels);
}

fcBool fcRGBAImage_valid(const fcRGBAImage* self) {
  return self->dims.x > 0 && self->dims.y > 0 && self->pixels != NULL &&
         fcByte4Array_valid(self->pixels);
}

#ifdef __ANDROID__

fcError fcRGBAImage_initBitmap(fcRGBAImage* self, AndroidBitmapInfo info, const void* pixels) {
  // Check parameters
  if (info.format != ANDROID_BITMAP_FORMAT_RGBA_8888)
    return FC_EXCEPTION_BITMAP_UNSUPPORTED_FORMAT;

  return fcRGBAImage_initPixels(self, info.width, info.height, (const fcInt*) pixels);
}

fcError fcRGBAImage_setPixelsBitmap(fcRGBAImage* self, AndroidBitmapInfo info, const void* pixels) {
  if (!fcRGBAImage_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  // Check parameters
  if (info.format != ANDROID_BITMAP_FORMAT_RGBA_8888)
    return FC_EXCEPTION_BITMAP_UNSUPPORTED_FORMAT;

  return fcRGBAImage_setPixels(self, info.width, info.height, (const fcInt*) pixels);
}

fcError fcRGBAImage_updateBitmap(fcRGBAImage* self, AndroidBitmapInfo info, void* pixels) {
  if (!fcRGBAImage_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  // Check parameters
  if (pixels == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  if (info.format != ANDROID_BITMAP_FORMAT_RGBA_8888)
    return FC_EXCEPTION_BITMAP_UNSUPPORTED_FORMAT;

  if (info.width != self->dims.x || info.height != self->dims.y)
    return FC_EXCEPTION_BITMAP_BAD_DIMENSIONS;

  fcError err = fcByte4Array_syncToNative(self->pixels);
  if (err)
    return err;

  return memcpy(pixels, self->pixels->c, self->pixels->len * sizeof(fcByte4)) ?
             FC_EXCEPTION_SUCCESS :
             FC_EXCEPTION_FAILED_COPY;
}

#endif  // __ANDROID__
