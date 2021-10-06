add_library(jpegenc INTERFACE)

target_sources(jpegenc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/JPEGENC/linux/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/JPEGENC/src/JPEGENC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/JPEGENC/src/JPEGENC.h"
)

target_include_directories(jpegenc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/JPEGENC/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(jpegenc INTERFACE
    arduino-compat
)
