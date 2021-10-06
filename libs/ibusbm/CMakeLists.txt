add_library(ibusbm INTERFACE)

target_sources(ibusbm INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/IBusBM/src/IBusBM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IBusBM/src/IBusBM.h"
)

target_include_directories(ibusbm INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/IBusBM/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ibusbm INTERFACE
    arduino-compat
)
