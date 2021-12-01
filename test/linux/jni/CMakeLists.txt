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
project(fancier-test-linux)

set(CMAKE_C_FLAGS "-std=gnu11")

# Paths

set( libs-dir
     "${CMAKE_SOURCE_DIR}/libs" )

set( root-dir
     "${CMAKE_SOURCE_DIR}" )

set( source-dir
     "${root-dir}/src" )

set( include-dir
     "${root-dir}/include" )


# Android prebuilt libs

find_library( OpenCL
              OpenCL )
              

# Fancier prebuilt libs and non-standard system libraries

#add_library( fancier-lib SHARED IMPORTED )
#set_target_properties( fancier-lib
#                       PROPERTIES IMPORTED_LOCATION
#                       "${libs-dir}/libfancier.so" )

find_library( fancier fancier PATHS "${libs-dir}" REQUIRED )

link_directories( BEFORE "${libs-dir}" )


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

add_library( jni
	     SHARED
	     "${source-dir}/hello.c" )


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
                       fancier OpenCL )

target_link_libraries( filters-lib
                       fancier OpenCL )

target_link_libraries( rancid 
                       OpenCL )

target_link_libraries( jni
                       fancier OpenCL )


#target_link_libraries( test-lib
#                       -L{libs-dir} OpenCL )

#target_link_libraries( filters-lib
#                       fancier-lib OpenCL )

#target_link_libraries( rancid 
#                       OpenCL )

#target_link_libraries( jni
#                       fancier-lib OpenCL )



#target_link_libraries( jni
#                       -L${libs-dir} OpenCL )
