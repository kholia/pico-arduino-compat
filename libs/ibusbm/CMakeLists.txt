add_library(pac-ibusbm INTERFACE)

target_sources(pac-ibusbm INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/IBusBM/src/IBusBM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IBusBM/src/IBusBM.h"
)

target_include_directories(pac-ibusbm INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/IBusBM/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ibusbm INTERFACE
    arduino-compat
)
