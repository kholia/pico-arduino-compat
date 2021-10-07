add_library(pac-softwarewire INTERFACE)

target_sources(pac-softwarewire INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SoftwareWire/SoftwareWire.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SoftwareWire/SoftwareWire.h"
)

target_include_directories(pac-softwarewire INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SoftwareWire"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-softwarewire INTERFACE
    arduino-compat
)
