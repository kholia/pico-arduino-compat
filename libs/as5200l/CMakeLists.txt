add_library(pac-as5200l INTERFACE)

target_sources(pac-as5200l INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/as5200l-arduino/src/AS5200L.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/as5200l-arduino/src/AS5200L.h"
)

target_include_directories(pac-as5200l INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/as5200l-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-as5200l INTERFACE
    arduino-compat
)
