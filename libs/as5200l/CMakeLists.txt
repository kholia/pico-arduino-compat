add_library(as5200l INTERFACE)

target_sources(as5200l INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/as5200l-arduino/src/AS5200L.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/as5200l-arduino/src/AS5200L.h"
)

target_include_directories(as5200l INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/as5200l-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(as5200l INTERFACE
    arduino-compat
)
