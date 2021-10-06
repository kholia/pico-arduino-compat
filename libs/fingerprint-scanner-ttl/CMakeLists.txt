add_library(fingerprint-scanner-ttl INTERFACE)

target_sources(fingerprint-scanner-ttl INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Fingerprint_Scanner-TTL/src/FPS_GT511C3.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Fingerprint_Scanner-TTL/src/FPS_GT511C3.h"
)

target_include_directories(fingerprint-scanner-ttl INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Fingerprint_Scanner-TTL/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(fingerprint-scanner-ttl INTERFACE
    arduino-compat
)
