add_library(tli4971-current-sensor INTERFACE)

target_sources(tli4971-current-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TLI4971-Current-Sensor/src/TLI4971.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLI4971-Current-Sensor/src/util/SICI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLI4971-Current-Sensor/src/TLI4971.h"
  "${CMAKE_CURRENT_LIST_DIR}/TLI4971-Current-Sensor/src/util/SICI.h"
)

target_include_directories(tli4971-current-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TLI4971-Current-Sensor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tli4971-current-sensor INTERFACE
    arduino-compat
)
