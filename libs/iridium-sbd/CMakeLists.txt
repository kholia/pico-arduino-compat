add_library(pac-iridium-sbd INTERFACE)

target_sources(pac-iridium-sbd INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/IridiumSBD/src/IridiumSBD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IridiumSBD/src/IridiumSBD.h"
)

target_include_directories(pac-iridium-sbd INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/IridiumSBD/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-iridium-sbd INTERFACE
    arduino-compat
)
