#include <fancier/image.h>

#include <fancier/exception.h>
#include <fancier/java.h>

#include <fancier/internal/snippets.inc>


//
// Global Java References
//

jclass fcARGBImage_class = NULL;
jmethodID fcARGBImage_constructor = NULL;

//
// Global Java Initialization / Destruction
//

jint fcImage_initJNI(JNIEnv* env) {
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/image/ARGBImage", fcARGBImage_class, "fcImage_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fcARGBImage_constructor, fcARGBImage_class, "J", "fcImage_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);

  return FC_EXCEPTION_SUCCESS;
}

void fcImage_releaseJNI(JNIEnv* env) {
  FC_FREE_CLASS_REF(env, fcARGBImage_class);
  fcARGBImage_constructor = NULL;
}


//
// fcARGBImage
//

FC_JAVA_INSTANCE_HANDLERS(fcARGBImage);

//
// Java Interface Implementation
//

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_image_ARGBImage_initNative__L (JNIEnv* env, jobject obj, jlong nativePtr) {
  fcARGBImage_setJava(env, obj, nativePtr);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_image_ARGBImage_initNative__II (JNIEnv* env, jobject obj, jint width, jint height) {
  // Allocate instance
  fcARGBImage* self = fcARGBImage_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcARGBImage_allocJava", FC_VOID_EXPR);

  // Initialize image
  jint err = fcARGBImage_initSize(self, width, height);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcARGBImage_initSize", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_image_ARGBImage_initNative___3II (JNIEnv* env, jobject obj, jintArray pixels, jint width) {
  // Allocate instance
  fcARGBImage* self = fcARGBImage_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcARGBImage_allocJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, pixels, FC_EXCEPTION_BAD_PARAMETER, "ARGBImage_initNative__[II:pixels", FC_VOID_EXPR);

  // Initialize image
  jsize __tmp_len = FC_JNI_CALL(env, GetArrayLength, pixels);
  if (__tmp_len % width != 0)
    FC_EXCEPTION_HANDLE_ERROR(env, FC_EXCEPTION_BAD_PARAMETER, "ARGBImage_initNative__[II:pixels,width", FC_VOID_EXPR);

  jint* __tmp_elems_pixels = FC_JNI_CALL(env, GetIntArrayElements, pixels, NULL);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_elems_pixels, FC_EXCEPTION_ARRAY_GET_ELEMENTS, "ARGBImage_initNative__[II:pixels", FC_VOID_EXPR);

  jint err = fcARGBImage_initPixels(self, __tmp_elems_pixels, width, __tmp_len / width);

  // Free temporary native array reference
  FC_JNI_CALL(env, ReleaseIntArrayElements, pixels, __tmp_elems_pixels, JNI_ABORT);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcARGBImage_initPixels", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_image_ARGBImage_initNative__Les_ull_pcg_hpc_fancier_ARGBImage_2 (JNIEnv* env, jobject obj, jobject image) {
  // Allocate instance
  fcARGBImage* self = fcARGBImage_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcARGBImage_allocJava", FC_VOID_EXPR);

  // Initialize image
  fcARGBImage* __tmp_image = fcARGBImage_getJava(env, image);
  FC_EXCEPTION_HANDLE_NULL(env, __tmp_image, FC_EXCEPTION_BAD_PARAMETER, "fcARGBImage_getJava:image", FC_VOID_EXPR);

  jint err = fcARGBImage_initCopy(self, __tmp_image);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcARGBImage_initCopy", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_image_ARGBImage_releaseNative (JNIEnv* env, jobject obj) {
  fcARGBImage* self = fcARGBImage_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcARGBImage_getJava", FC_VOID_EXPR);

  // Release memory buffers and decrease the reference count to the instance object
  jint err = fcARGBImage_release(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcARGBImage_release", FC_VOID_EXPR);

  fcARGBImage_setJava(env, obj, 0L);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_image_ARGBImage_releaseNativeRef (JNIEnv* env, jobject obj) {
  fcARGBImage* self = fcARGBImage_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcARGBImage_getJava", FC_VOID_EXPR);

  // Release the reference to the instance object and only release the buffers in it as well if this was the
  // only remaining reference to that object
  jint err = fcARGBImage_releaseRef(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcARGBImage_releaseRef", FC_VOID_EXPR);

  fcARGBImage_setJava(env, obj, 0L);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_image_ARGBImage_get__II (JNIEnv* env, jobject obj, jint x, jint y) {
  fcARGBImage* self = fcARGBImage_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcARGBImage_getJava", NULL);

  jint err;
  fcByte4 __tmp_ret = fcARGBImage_get(self, x, y, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcARGBImage_get", NULL);

  return fcByte4_wrap(env, __tmp_ret);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_image_ARGBImage_set__IILes_ull_pcg_hpc_fancier_vector_Byte4_2 (JNIEnv* env, jobject obj, jint x, jint y, jobject argb) {
  fcARGBImage* self = fcARGBImage_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcARGBImage_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, argb, FC_EXCEPTION_BAD_PARAMETER, "ARGBImage_set__IILes_ull_pcg_hpc_fancier_vector_Byte4;:argb", FC_VOID_EXPR);

  jint err;
  fcByte4 __tmp_argb = fcByte4_unwrap(env, argb, &err);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcByte4_unwrap", FC_VOID_EXPR);

  err = fcARGBImage_set(self, x, y, __tmp_argb);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcARGBImage_set", FC_VOID_EXPR);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_image_ARGBImage_getPixels (JNIEnv* env, jobject obj) {
  fcARGBImage* self = fcARGBImage_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcARGBImage_getJava", NULL);

  FC_EXCEPTION_HANDLE_NULL(env, self->pixels, FC_EXCEPTION_INVALID_STATE, "ARGBImage_getPixels:pixels", NULL);
  return FC_JNI_CALL(env, NewObject, fcByte4Array_class, fcByte4Array_constructor, (jlong) self->pixels);
}

JNIEXPORT jobject JNICALL
Java_es_ull_pcg_hpc_fancier_image_ARGBImage_getDims (JNIEnv* env, jobject obj) {
  fcARGBImage* self = fcARGBImage_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcARGBImage_getJava", NULL);

  return fcInt2_wrap(env, self->dims);
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_image_ARGBImage_getWidth (JNIEnv* env, jobject obj) {
  fcARGBImage* self = fcARGBImage_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcARGBImage_getJava", 0);

  return self->dims.x;
}

JNIEXPORT jint JNICALL
Java_es_ull_pcg_hpc_fancier_image_ARGBImage_getHeight (JNIEnv* env, jobject obj) {
  fcARGBImage* self = fcARGBImage_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcARGBImage_getJava", 0);

  return self->dims.y;
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_image_ARGBImage_syncToNative (JNIEnv* env, jobject obj) {
  fcARGBImage* self = fcARGBImage_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcARGBImage_getJava", FC_VOID_EXPR);

  jint err = fcARGBImage_syncToNative(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcARGBImage_syncToNative", FC_VOID_EXPR);
}

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_image_ARGBImage_syncToOCL (JNIEnv* env, jobject obj) {
  fcARGBImage* self = fcARGBImage_getJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcARGBImage_getJava", FC_VOID_EXPR);

  jint err = fcARGBImage_syncToOCL(self);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcARGBImage_syncToOCL", FC_VOID_EXPR);
}

#ifdef __ANDROID__

JNIEXPORT void JNICALL
Java_es_ull_pcg_hpc_fancier_image_ARGBImage_initNative__Landroid_graphics_Bitmap_2 (JNIEnv* env, jobject obj, jobject bmp) {
  jint err = FC_EXCEPTION_SUCCESS;

  // Allocate instance
  fcARGBImage* self = fcARGBImage_allocJava(env, obj);
  FC_EXCEPTION_HANDLE_NULL(env, self, FC_EXCEPTION_INVALID_THIS, "fcARGBImage_getJava", FC_VOID_EXPR);

  FC_EXCEPTION_HANDLE_NULL(env, bmp, FC_EXCEPTION_BAD_PARAMETER, "ARGBImage_initNative__Landroid_graphics_Bitmap;:bmp", FC_VOID_EXPR);

  // Initialize image
  AndroidBitmapInfo __tmp_info;
  if (AndroidBitmap_getInfo(env, bmp, &__tmp_info))
    err = FC_EXCEPTION_BITMAP_INFO;

  FC_EXCEPTION_HANDLE_ERROR(env, err, "AndroidBitmap_getInfo", FC_VOID_EXPR);

  void* __tmp_pixels;
  if (AndroidBitmap_lockPixels(env, bmp, &__tmp_pixels))
    err = FC_EXCEPTION_BITMAP_LOCK_PIXELS;

  FC_EXCEPTION_HANDLE_ERROR(env, err, "AndroidBitmap_lockPixels", FC_VOID_EXPR);

  err = fcARGBImage_initBitmap(self, __tmp_info, __tmp_pixels);
  FC_EXCEPTION_HANDLE_ERROR(env, err, "fcARGBImage_initBitmap", FC_VOID_EXPR);

  // Free temporary native array reference
  if (AndroidBitmap_unlockPixels(env, bmp))
    err = FC_EXCEPTION_BITMAP_UNLOCK_PIXELS;

  FC_EXCEPTION_HANDLE_ERROR(env, err, "AndroidBitmap_unlockPixels", FC_VOID_EXPR);
}

#endif // __ANDROID__

//
// Native Interface Implementation
//

int fcARGBImage_createRef (fcARGBImage* img) {
  if (img == NULL || img->pixels == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  ++img->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

int fcARGBImage_releaseRef (fcARGBImage* img) {
  if (img == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  if (img->ref_count <= 1)
    return fcARGBImage_release(img);

  --img->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

int fcARGBImage_init (fcARGBImage* self) {
  if (self->pixels != NULL)
    return FC_EXCEPTION_INVALID_STATE;

  ++self->ref_count;
  return FC_EXCEPTION_SUCCESS;
}

int fcARGBImage_initDims (fcARGBImage* self, fcInt2 dims) {
  return fcARGBImage_initSize(self, dims.x, dims.y);
}

int fcARGBImage_initSize (fcARGBImage* self, int width, int height) {
  int err;

  // Check parameters
  if (width <= 0 || height <= 0)
    return FC_EXCEPTION_BITMAP_BAD_DIMENSIONS;

  err = fcARGBImage_init(self);
  if (err) return err;

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

int fcARGBImage_initPixels (fcARGBImage* self, jint* pixels, int width, int height) {
  int err;

  // Check parameters
  if (pixels == NULL)
    return FC_EXCEPTION_BAD_PARAMETER;

  if (width <= 0 || height <= 0)
    return FC_EXCEPTION_BITMAP_BAD_DIMENSIONS;

  err = fcARGBImage_init(self);
  if (err) return err;

  // Initialize dimensions
  self->dims.x = width;
  self->dims.y = height;

  // Allocate array
  self->pixels = calloc(1, sizeof(fcByte4Array));
  err = fcByte4Array_initArray(self->pixels, self->dims.x * self->dims.y * 4, (jbyte*) pixels);
  if (err) {
    fcByte4Array_release(self->pixels);
    self->pixels = NULL;
    return err;
  }

  return FC_EXCEPTION_SUCCESS;
}

int fcARGBImage_initCopy (fcARGBImage* self, const fcARGBImage* other) {
  int err;

  // Check parameters
  if (other == NULL || other->pixels == NULL || !fcByte4Array_valid(other->pixels))
    return FC_EXCEPTION_BAD_PARAMETER;

  err = fcARGBImage_init(self);
  if (err) return err;

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

int fcARGBImage_release (fcARGBImage* self) {
  --self->ref_count;
  if (self->pixels != NULL) {
    int err = fcByte4Array_release(self->pixels);
    if (err) {
      ++self->ref_count; // Release did not succeed, so restore the ref count
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

fcByte4 fcARGBImage_getCoords (fcARGBImage* self, fcInt2 coords, int* err) {
  return fcARGBImage_get(self, coords.x, coords.y, err);
}

fcByte4 fcARGBImage_get (fcARGBImage* self, int x, int y, int* err) {
  int __tmp_err;
  if (err == NULL) err = &__tmp_err;

  fcByte4 __tmp_ret = {.s = {0}};
  if (!fcARGBImage_valid(self)) {
    *err = FC_EXCEPTION_INVALID_STATE;
    return __tmp_ret;
  }

  if (x < 0 || y < 0 || x >= self->dims.x || y >= self->dims.y) {
    *err = FC_EXCEPTION_BAD_PARAMETER;
    return __tmp_ret;
  }

  return fcByte4Array_get(self->pixels, y * self->dims.x + x, err);
}

int fcARGBImage_setCoords (fcARGBImage* self, fcInt2 coords, fcByte4 argb) {
  return fcARGBImage_set(self, coords.x, coords.y, argb);
}

int fcARGBImage_set (fcARGBImage* self, int x, int y, fcByte4 argb) {
  if (!fcARGBImage_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  if (x < 0 || y < 0 || x >= self->dims.x || y >= self->dims.y)
    return FC_EXCEPTION_BAD_PARAMETER;

  return fcByte4Array_set(self->pixels, y * self->dims.x + x, argb);
}

int fcARGBImage_syncToNative (fcARGBImage* self) {
  if (!fcARGBImage_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  return fcByte4Array_syncToNative(self->pixels);
}

int fcARGBImage_syncToOCL (fcARGBImage* self) {
  if (!fcARGBImage_valid(self))
    return FC_EXCEPTION_INVALID_STATE;

  return fcByte4Array_syncToOCL(self->pixels);
}

jboolean fcARGBImage_valid (const fcARGBImage* self) {
  return self->dims.x > 0 && self->dims.y > 0 &&
         self->pixels != NULL && fcByte4Array_valid(self->pixels);
}

#ifdef __ANDROID__

int fcARGBImage_initBitmap (fcARGBImage* self, AndroidBitmapInfo info, const void* pixels) {
  // Check parameters
  if (info.format != ANDROID_BITMAP_FORMAT_RGBA_8888)
    return FC_EXCEPTION_BITMAP_UNSUPPORTED_FORMAT;

  // TODO info.stride?
  return fcARGBImage_initPixels(self, (jint*) pixels, info.width, info.height);
}

#endif // __ANDROID__
