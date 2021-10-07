add_library(pac-base64 INTERFACE)

target_sources(pac-base64 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Base64/src/Base64.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Base64/src/Base64.h"
)

target_include_directories(pac-base64 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Base64/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-base64 INTERFACE
    arduino-compat
)
