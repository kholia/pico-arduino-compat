add_library(pac-opentherm-library INTERFACE)

target_sources(pac-opentherm-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/opentherm_library/src/OpenTherm.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/opentherm_library/src/OpenTherm.h"
)

target_include_directories(pac-opentherm-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/opentherm_library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-opentherm-library INTERFACE
    arduino-compat
)
