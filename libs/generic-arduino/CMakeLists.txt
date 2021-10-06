add_library(generic-arduino INTERFACE)

target_sources(generic-arduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/generic-Arduino/src/SPIAbstraction.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/generic-Arduino/src/generic-Arduino.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/generic-Arduino/src/SPIAbstraction.hpp"
)

target_include_directories(generic-arduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/generic-Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(generic-arduino INTERFACE
    arduino-compat
)
