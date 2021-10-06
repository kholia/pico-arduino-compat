add_library(arduino-sht INTERFACE)

target_sources(arduino-sht INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sht/SHTSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sht/SHTSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sht/arduino-sht.h"
)

target_include_directories(arduino-sht INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-sht"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arduino-sht INTERFACE
    arduino-compat
)
