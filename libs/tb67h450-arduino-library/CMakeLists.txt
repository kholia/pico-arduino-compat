add_library(pac-tb67h450-arduino-library INTERFACE)

target_sources(pac-tb67h450-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TB67H450-arduino-library/src/TB67H450.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TB67H450-arduino-library/src/TB67H450.h"
)

target_include_directories(pac-tb67h450-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TB67H450-arduino-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tb67h450-arduino-library INTERFACE
    arduino-compat
)
