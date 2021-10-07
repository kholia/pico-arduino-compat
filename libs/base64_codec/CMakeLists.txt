add_library(pac-base64_codec INTERFACE)

target_sources(pac-base64_codec INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino_base64/src/base64.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_base64/src/base64.hpp"
)

target_include_directories(pac-base64_codec INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino_base64/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-base64_codec INTERFACE
    arduino-compat
)
