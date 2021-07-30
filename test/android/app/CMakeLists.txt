# Fancier: Unified Java, JNI and OpenCL Integration High-Performance GPGPU API.
# Copyright (C) 2021 Universidad de La Laguna.
#
# Fancier is free software: you can redistribute it and/or modify
# it under the terms of the GNU Lesser General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# Fancier is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public License
# along with Fancier.  If not, see <https://www.gnu.org/licenses/>.

cmake_minimum_required( VERSION 3.10.2 )


# Paths

set( libs-dir
     "${CMAKE_SOURCE_DIR}/jni-libs/core" )

set( root-dir
     "${CMAKE_SOURCE_DIR}/src/main/jni" )

set( source-dir
     "${root-dir}/src" )

set( include-dir
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

include_directories( "${include-dir}/common"
                     "${include-dir}/thirdparty" )

add_library( test-lib
             SHARED
             "${source-dir}/test/array_test.c"
             "${source-dir}/test/math_test.c"
             "${source-dir}/test/vector_test.c"
             "${source-dir}/test/vector_array_test.c"
             "${source-dir}/test/quick_test.c" )

add_library( filters-lib
             SHARED
             "${source-dir}/filter/native_filter.c" )

add_library( rancid
             SHARED
             "${source-dir}/rancid/rancid.c" )

target_include_directories( test-lib
                            PUBLIC
                            "${include-dir}/test" )

target_include_directories( filters-lib
                            PUBLIC
                            "${include-dir}/filter" )

target_include_directories( rancid
                            PUBLIC
                            "${include-dir}/rancid" )

target_link_libraries( test-lib
                       ${android-lib} ${log-lib} ${jnigraphics-lib}
                       fancier-lib OpenCL )

target_link_libraries( filters-lib
                       ${android-lib} ${log-lib} ${jnigraphics-lib}
                       fancier-lib OpenCL )

target_link_libraries( rancid
                       ${jnigraphics-lib}
                       OpenCL )
