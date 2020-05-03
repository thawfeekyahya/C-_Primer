set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(HDR_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include )

file(GLOB SRCS "${SRC_DIR}/*.cpp")
file(GLOB HDRS "${HDR_DIR}/*.h" )

add_library(tests ${SRCS})

target_include_directories(tests PUBLIC ${HDR_DIR})

source_group(TREE ${HDR_DIR} PREFIX "header files for tests" FILES ${HDRS}) 



