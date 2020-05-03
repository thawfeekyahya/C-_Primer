set(HDR_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)
set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

file(GLOB HDRS CONFIGURE_DEPENDS "${HDR_DIR}/*.h")
file(GLOB SRCS "${SRC_DIR}/*.cpp")

add_library(chap5 ${SRCS})

target_include_directories(chap5 PUBLIC ${HDR_DIR})

source_group(TREE ${HDR_DIR} PREFIX "Header files chap5" FILES ${HDRS})
