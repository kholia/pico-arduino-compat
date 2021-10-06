add_library(millamilla-ds7505-library INTERFACE)

target_sources(millamilla-ds7505-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MillaMilla_DS7505_Library/src/MillaMilla_DS7505.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MillaMilla_DS7505_Library/src/MillaMilla_DS7505.h"
)

target_include_directories(millamilla-ds7505-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MillaMilla_DS7505_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(millamilla-ds7505-library INTERFACE
    arduino-compat
)
