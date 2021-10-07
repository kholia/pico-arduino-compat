add_library(pac-hardware-buttons INTERFACE)

target_sources(pac-hardware-buttons INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HardwareButton/Button.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HardwareButton/Button.h"
)

target_include_directories(pac-hardware-buttons INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HardwareButton"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-hardware-buttons INTERFACE
    arduino-compat
)
