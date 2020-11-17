#include <fancier/java.h>

#include <fancier/exception.h>


jfieldID fcJava_getNativePtrFieldID (JNIEnv* env, jclass currentClass) {
  jfieldID field = FC_JNI_CALL(env, GetFieldID, currentClass, "nativeInstancePtr", "J");
  FC_EXCEPTION_HANDLE_PENDING(env, field == NULL, "fcJava_getNativePtrFieldID", NULL);
  return field;
}
