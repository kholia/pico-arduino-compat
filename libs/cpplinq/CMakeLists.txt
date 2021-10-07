add_library(pac-cpplinq INTERFACE)

target_sources(pac-cpplinq INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoLinq/src/ArduinoLinq.hpp"
)

target_include_directories(pac-cpplinq INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoLinq/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-cpplinq INTERFACE
    arduino-compat
)
