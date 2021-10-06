add_library(pololuqik INTERFACE)

target_sources(pololuqik INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/qik-arduino/PololuQik.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/qik-arduino/PololuQik.h"
)

target_include_directories(pololuqik INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/qik-arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pololuqik INTERFACE
    arduino-compat
)
