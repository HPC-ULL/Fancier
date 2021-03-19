<%!
  vfields = vfields[:4] + [f's{i}' for i in range(4, vlens[-1])]
%>\
#include <fancier/vector.h>

#include <fancier/exception.h>

#include <fancier/internal/snippets.inc>


#define INIT_FIELD(_env, _result, _cls, _field, _signature, _func, _ret)\
  if (!_result) {\
    _result = FC_JNI_CALL(_env, GetFieldID, _cls, #_field, _signature);\
    if (!_result || FC_JNI_CALL(_env, ExceptionCheck)) {\
      fcException_throwWrappedNative(_env, __FILE__, __LINE__, _func, FC_JNI_CALL(_env, ExceptionOccurred));\
      *err = _ret;\
      return result;\
    }\
  } else ((void) 0)


//
// Global Java References
//

% for type in types:
% for vlen in vlens:
jclass fc${type|c}${vlen}_class = NULL;
jmethodID fc${type|c}${vlen}_constructor = NULL;
% endfor
% endfor

//
// Global Java Initialization / Destruction
//

jint fcVector_initJNI(JNIEnv* env) {
% for type in types:
% for vlen in vlens:
  FC_INIT_CLASS_REF(env, "es/ull/pcg/hpc/fancier/vector/${type|c}${vlen}", fc${type|c}${vlen}_class,
                    "fcVector_initJNI", FC_EXCEPTION_OTHER);
  FC_INIT_CONSTRUCTOR(env, fc${type|c}${vlen}_constructor, fc${type|c}${vlen}_class, "${f'{signatures[type.lower()]}' * vlen}",
                      "fcVector_initJNI", FC_EXCEPTION_METHOD_NOT_FOUND);
% endfor

% endfor
  return FC_EXCEPTION_SUCCESS;
}

void fcVector_releaseJNI(JNIEnv* env) {
% for type in types:
% for vlen in vlens:
  FC_FREE_CLASS_REF(env, fc${type|c}${vlen}_class);
  fc${type|c}${vlen}_constructor = NULL;
% endfor

% endfor
}

//
// Java Interface
//

% for type in types:
% for vlen in vlens:
//
// fc${type|c}${vlen}
//

jobject fc${type|c}${vlen}_wrap(JNIEnv* env, fc${type|c}${vlen} vec) {
  return FC_JNI_CALL(env, NewObject, fc${type|c}${vlen}_class, fc${type|c}${vlen}_constructor, ${', '.join([f'vec.{field}' for field in vfields[:vlen]])});
}

fc${type|c}${vlen} fc${type|c}${vlen}_unwrap(JNIEnv* env, jobject vec, int* err) {
  int __tmp_err;
  if (!err) err = &__tmp_err;

  fc${type|c}${vlen} result = {.s = {${defaults[type]}}};

% for field in vfields[:min(vlen, 4)]:
  static jfieldID field_${field} = NULL;
  INIT_FIELD(env, field_${field}, fc${type|c}${vlen}_class, ${field}, "${signatures[type.lower()]}", "fc${type|c}${vlen}_unwrap", FC_EXCEPTION_INVALID_STATE);
  j${type|l} ${field} = FC_JNI_CALL(env, Get${type|c}Field, vec, field_${field});

% endfor
% if vlen > 4:
  static jfieldID field_s = NULL;
  INIT_FIELD(env, field_s, fc${type|c}${vlen}_class, s, "[${signatures[type.lower()]}", "fc${type|c}${vlen}_unwrap", FC_EXCEPTION_INVALID_STATE);

  jobject s_obj = FC_JNI_CALL(env, GetObjectField, vec, field_s);
  if (!s_obj) {
    *err = FC_EXCEPTION_FIELD_NOT_FOUND;
    return result;
  }

  j${type|l}Array* s_arr = (j${type|l}Array*) &s_obj;
  j${type|l}* s = FC_JNI_CALL(env, Get${type|c}ArrayElements, *s_arr, NULL);
  if (!s) {
    *err = FC_EXCEPTION_ARRAY_GET_ELEMENTS;
    return result;
  }

% endif
% for field in vfields[:min(vlen, 4)]:
  result.${field} = ${field};
% endfor
% for index in range(4, vlen):
  result.${vfields[index]} = s[${index-4}];
% endfor

% if vlen > 4:
  FC_JNI_CALL(env, Release${type|c}ArrayElements, *s_arr, s, JNI_ABORT);
% endif
  *err = FC_EXCEPTION_SUCCESS;
  return result;
}

% endfor
% endfor
