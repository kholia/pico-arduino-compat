add_library(base64 INTERFACE)

target_sources(base64 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Base64/src/Base64.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Base64/src/Base64.h"
)

target_include_directories(base64 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Base64/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(base64 INTERFACE
    arduino-compat
)
