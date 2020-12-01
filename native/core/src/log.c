#include <fancier/log.h>

#include <stdarg.h>
#ifndef __ANDROID__
#include <stdio.h>
#endif

#ifdef __ANDROID__

void __fcinternal_log_fmt(fcLogLevels log_level, const char* log_tag, const char* format, ...) {
  va_list args;
  va_start(args, format);
  __android_log_vprint(log_level, log_tag, format, args);
  va_end(args);
}

void __fcinternal_log(fcLogLevels log_level, const char* log_tag, const char* message) {
  __android_log_write(log_level, log_tag, message);
}

#else

void __fcinternal_log_fmt(fcLogLevels log_level, const char* log_tag, const char* format, ...) {
  va_list args;
  char buffer[1024];

  va_start(args, format);
  vsprintf(buffer, format, args);
  va_end(args);

  __fcinternal_log(log_level, log_tag, buffer);
}

void __fcinternal_log(fcLogLevels log_level, const char* log_tag, const char* message) {
  const char* level = "UNK";
  switch (log_level) {
  case FC_LOG_VERBOSE:
    level = "VERBOSE";
    break;
  case FC_LOG_DEBUG:
    level = "DEBUG";
    break;
  case FC_LOG_INFO:
    level = "INFO";
    break;
  case FC_LOG_WARN:
    level = "WARN";
    break;
  case FC_LOG_ERROR:
    level = "ERROR";
    break;
  case FC_LOG_FATAL:
    level = "FATAL";
    break;
  }

  fprintf(stderr, "[%s] %s: %s\n", log_tag, level, message);
}

#endif  // __ANDROID__
