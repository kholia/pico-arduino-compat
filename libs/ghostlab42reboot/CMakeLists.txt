add_library(pac-ghostlab42reboot INTERFACE)

target_sources(pac-ghostlab42reboot INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ghostlab42reboot/GhostLab42Reboot.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ghostlab42reboot/GhostLab42Reboot.h"
)

target_include_directories(pac-ghostlab42reboot INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ghostlab42reboot"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ghostlab42reboot INTERFACE
    arduino-compat
)
