add_library(pac-opentherm INTERFACE)

target_sources(pac-opentherm INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-opentherm/src/opentherm.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-opentherm/src/opentherm.h"
)

target_include_directories(pac-opentherm INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-opentherm/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-opentherm INTERFACE
    arduino-compat
)
