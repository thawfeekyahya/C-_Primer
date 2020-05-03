set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(HDR_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)


file(GLOB SRCS "${SRC_DIR}/*cpp")
file(GLOB HDRS CONFIGURE_DEPENDS "${HDR_DIR}/*h") 

add_library(chap4 ${SRCS})

target_include_directories(chap4 PUBLIC ${HDR_DIR})

source_group(TREE ${HDR_DIR} PREFIX "header files chap4" FILES ${HDRS})

