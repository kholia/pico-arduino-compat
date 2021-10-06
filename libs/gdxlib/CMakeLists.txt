add_library(gdxlib INTERFACE)

target_sources(gdxlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GDXLib/src/GDXLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GDXLib/src/GDXLib.h"
)

target_include_directories(gdxlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GDXLib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(gdxlib INTERFACE
    arduino-compat
)
