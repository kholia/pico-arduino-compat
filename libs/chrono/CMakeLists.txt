add_library(chrono INTERFACE)

target_sources(chrono INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Chrono/Chrono.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Chrono/LightChrono.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Chrono/Chrono.h"
  "${CMAKE_CURRENT_LIST_DIR}/Chrono/LightChrono.h"
)

target_include_directories(chrono INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Chrono"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(chrono INTERFACE
    arduino-compat
)
