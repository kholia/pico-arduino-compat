add_library(battery INTERFACE)

target_sources(battery INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Battery/src/Battery.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Battery/src/Battery.h"
)

target_include_directories(battery INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Battery/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(battery INTERFACE
    arduino-compat
)
