add_library(pac-gdxlib INTERFACE)

target_sources(pac-gdxlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GDXLib/src/GDXLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GDXLib/src/GDXLib.h"
)

target_include_directories(pac-gdxlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GDXLib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-gdxlib INTERFACE
    arduino-compat
)
