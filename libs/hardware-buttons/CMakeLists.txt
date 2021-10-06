add_library(hardware-buttons INTERFACE)

target_sources(hardware-buttons INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HardwareButton/Button.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HardwareButton/Button.h"
)

target_include_directories(hardware-buttons INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HardwareButton"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(hardware-buttons INTERFACE
    arduino-compat
)
