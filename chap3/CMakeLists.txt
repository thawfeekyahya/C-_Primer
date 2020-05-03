set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src )
set(HDR_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)

file(GLOB SRCS "${SRC_DIR}/*.cpp")
file(GLOB HRDS CONFIGURE_DEPENDS "${HRD_DIR}/*.h")

add_library(chap3 ${SRCS})


target_include_directories(chap3 PUBLIC ${HDR_DIR})


#message("Strating to execute custom command-------------------------------------------------------------------------")

#add_custom_command(OUTPUT ${CMAKE_BINARY_DIR}/Test.txt
#                   COMMAND touch Test.txt
#                   COMMAND cd ${PROJECT_SOURCE_DIR}/folder
#                   COMMAND /bin/bash script.sh ARGS param1 param2
#                   )

#add_custom_target(Test DEPENDS  ${CMAKE_BINARY_DIR}/Test.txt)

#add_dependencies(chap3 Test)

source_group(TREE ${HDR_DIR} PREFIX "Header Files " FILES ${HDRS})


