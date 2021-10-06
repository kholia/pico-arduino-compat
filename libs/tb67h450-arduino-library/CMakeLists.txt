add_library(tb67h450-arduino-library INTERFACE)

target_sources(tb67h450-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TB67H450-arduino-library/src/TB67H450.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TB67H450-arduino-library/src/TB67H450.h"
)

target_include_directories(tb67h450-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TB67H450-arduino-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tb67h450-arduino-library INTERFACE
    arduino-compat
)
