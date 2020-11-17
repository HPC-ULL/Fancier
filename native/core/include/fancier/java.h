#ifndef _FANCIER_JAVA_H_
#define _FANCIER_JAVA_H_

#include <fancier/platform.h>

#include <stdlib.h>


#define FC_JAVA_INSTANCE_HANDLERS(_classname)\
  static jfieldID _classname##_nativePtrField = NULL;\
  _classname* _classname##_allocJava (JNIEnv* env, jobject obj) {\
    if (_classname##_nativePtrField == NULL) {\
      _classname##_nativePtrField = fcJava_getNativePtrFieldID(env, _classname##_class);\
      if (_classname##_nativePtrField == NULL) return NULL;\
    }\
    _classname* self = calloc(1, sizeof(_classname));\
    FC_JNI_CALL(env, SetLongField, obj, _classname##_nativePtrField, (long) self);\
    return self;\
  }\
  _classname* _classname##_getJava (JNIEnv* env, jobject obj) {\
    if (_classname##_nativePtrField == NULL) {\
      _classname##_nativePtrField = fcJava_getNativePtrFieldID(env, _classname##_class);\
      if (_classname##_nativePtrField == NULL) return NULL;\
    }\
    return (_classname*) FC_JNI_CALL(env, GetLongField, obj, _classname##_nativePtrField);\
  }\
  void _classname##_setJava (JNIEnv* env, jobject obj, jlong nativePtr) {\
    if (_classname##_nativePtrField == NULL) {\
      _classname##_nativePtrField = fcJava_getNativePtrFieldID(env, _classname##_class);\
      if (_classname##_nativePtrField == NULL) return;\
    }\
    FC_JNI_CALL(env, SetLongField, obj, _classname##_nativePtrField, nativePtr);\
  }\
  void _classname##_freeJava (JNIEnv* env, jobject obj) {\
    if (_classname##_nativePtrField == NULL) {\
      _classname##_nativePtrField = fcJava_getNativePtrFieldID(env, _classname##_class);\
      if (_classname##_nativePtrField == NULL) return;\
    }\
    _classname* self = (_classname*) FC_JNI_CALL(env, GetLongField, obj, _classname##_nativePtrField);\
    FC_JNI_CALL(env, SetLongField, obj, _classname##_nativePtrField, 0L);\
    if (self != NULL) free(self);\
  }


/**
 * Obtains the class field that should contain the pointer to the native
 * instance data.
 * It will try to find a field named \c nativeInstancePtr of type \c long in
 * the specified class.
 * @param env The JNI interface pointer.
 * @param currentClass A reference to the class in which to find this field.
 *        Auto-generated native classes contain this field.
 * @return The field ID of the native instance data pointer or NULL if it
 *         couldn't be found.
 * @throw If the field ID couldn't be found, it will throw a
 *        \c NativeException.
 */
FANCIER_API jfieldID fcJava_getNativePtrFieldID(JNIEnv* env, jclass currentClass);

#endif // _FANCIER_JAVA_H_
