add_library(pac-as6212-temperature-sensor INTERFACE)

target_sources(pac-as6212-temperature-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AS6212-Arduino-Library/src/AS6212.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AS6212-Arduino-Library/src/AS6212.h"
  "${CMAKE_CURRENT_LIST_DIR}/AS6212-Arduino-Library/src/registers/AS6212_Registers.h"
)

target_include_directories(pac-as6212-temperature-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AS6212-Arduino-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-as6212-temperature-sensor INTERFACE
    arduino-compat
)
