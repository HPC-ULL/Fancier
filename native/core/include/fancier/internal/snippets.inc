#define FC_INIT_CLASS_REF(_env, _pkg_cls, _result, _func, _ret)\
  do {\
    jclass cls = FC_JNI_CALL(_env, FindClass, _pkg_cls);\
    FC_EXCEPTION_HANDLE_PENDING(_env, !cls, _func, _ret);\
    _result = (jclass) FC_JNI_CALL(_env, NewGlobalRef, cls);\
    FC_EXCEPTION_HANDLE_PENDING(env, !_result, _func, _ret);\
  } while (0)

#define FC_FREE_CLASS_REF(_env, _ref)\
  if (_ref) {\
    FC_JNI_CALL(_env, DeleteGlobalRef, _ref);\
    _ref = NULL;\
  } else ((void) 0)

#define FC_INIT_CONSTRUCTOR(_env, _result, _cls, _signature, _func, _ret)\
  do {\
    _result = FC_JNI_CALL(_env, GetMethodID, _cls, "<init>", "(" _signature ")V");\
    FC_EXCEPTION_HANDLE_PENDING(_env, !_result, _func, _ret);\
  } while (0)
