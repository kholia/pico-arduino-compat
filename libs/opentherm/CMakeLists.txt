add_library(opentherm INTERFACE)

target_sources(opentherm INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-opentherm/src/opentherm.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-opentherm/src/opentherm.h"
)

target_include_directories(opentherm INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-opentherm/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(opentherm INTERFACE
    arduino-compat
)
