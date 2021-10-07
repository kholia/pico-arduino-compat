add_library(pac-softwire INTERFACE)

target_sources(pac-softwire INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SoftWire/src/SoftWire.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SoftWire/src/SoftWire.h"
)

target_include_directories(pac-softwire INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SoftWire/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-softwire INTERFACE
    arduino-compat
)
