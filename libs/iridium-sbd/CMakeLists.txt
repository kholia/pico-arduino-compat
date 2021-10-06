add_library(iridium-sbd INTERFACE)

target_sources(iridium-sbd INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/IridiumSBD/src/IridiumSBD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IridiumSBD/src/IridiumSBD.h"
)

target_include_directories(iridium-sbd INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/IridiumSBD/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(iridium-sbd INTERFACE
    arduino-compat
)
