add_library(pololumaestro INTERFACE)

target_sources(pololumaestro INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/maestro-arduino/PololuMaestro.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/maestro-arduino/PololuMaestro.h"
)

target_include_directories(pololumaestro INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/maestro-arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pololumaestro INTERFACE
    arduino-compat
)
