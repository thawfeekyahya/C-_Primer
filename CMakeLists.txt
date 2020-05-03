cmake_minimum_required(VERSION 3.16)
include(ExternalProject)
project(CPP_Primer VERSION 1.0 DESCRIPTION "C++ Primer Examples Workout" LANGUAGES CXX)

set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

option(USE_CHAP3 "Use chapter3 " ON)

configure_file(PrimerConfig.h.in PrimerConfig.h)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 14)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}  -Wall -Werror -Wno-error=sign-compare -Wno-error=unused-variable -std=c++14")

set(QT_INCLUDES /opt/Qt5.12.6/5.12.6/gcc_64/include)

find_package(Qt5Core)


add_executable(CPP_Primer main.cpp )

if(USE_CHAP3)
    add_subdirectory(chap3)
    list(APPEND EXTRA_LIBS chap3)
endif()

add_subdirectory(chap4)
add_subdirectory(chap5)
add_subdirectory(tests)

list(APPEND EXTRA_LIBS chap4 chap5 tests)


target_include_directories(CPP_Primer PUBLIC ${QT_INCLUDES} ${PROJECT_BINARY_DIR})

target_link_libraries(CPP_Primer PUBLIC Qt5::Core ${EXTRA_LIBS} )





#CMake Experiments----------------------------------------------------------------------

set(LIST_OF_THINGS
    OBJECTA OBJECTB OBJECTC OBJECTD)

list(LENGTH LIST_OF_THINGS LIST_OF_THINGS_LEN)
message("--------------------------------->",${LIST_OF_THINGS_LEN})
