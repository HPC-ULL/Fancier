cmake_minimum_required(VERSION 3.10.2)


# Paths

set ( libs-dir
      "${CMAKE_SOURCE_DIR}/jni-libs/core" )

set ( root-dir
      "${CMAKE_SOURCE_DIR}/src/main/jni" )

set ( sources-dir
      "${root-dir}/src" )

set ( include-dir
      "${root-dir}/include" )


# Android prebuilt libs

find_library( android-lib
              android )

find_library( log-lib
              log )

find_library( jnigraphics-lib
              jnigraphics )


# Fancier prebuilt libs and non-standard system libraries

add_library( OpenCL SHARED IMPORTED )
set_target_properties( OpenCL
        PROPERTIES IMPORTED_LOCATION
        "${libs-dir}/${ANDROID_ABI}/libOpenCL.so" )

add_library( fancier-lib SHARED IMPORTED )
set_target_properties( fancier-lib
        PROPERTIES IMPORTED_LOCATION
        "${libs-dir}/${ANDROID_ABI}/libfancier.so" )


# Application

include_directories( "${include-dir}"
                     "${include-dir}/thirdparty" )

add_library( test-lib
             SHARED
             "${sources-dir}/array_test.c"
             "${sources-dir}/math_test.c"
             "${sources-dir}/vector_test.c"
             "${sources-dir}/vector_array_test.c" )

target_link_libraries(test-lib
                      ${android-lib} ${log-lib} ${jnigraphics-lib}
                      fancier-lib OpenCL)
