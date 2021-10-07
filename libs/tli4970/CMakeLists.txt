add_library(pac-tli4970 INTERFACE)

target_sources(pac-tli4970 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TLI4970-D050T4-Current-Sensor/src/Tli4970.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLI4970-D050T4-Current-Sensor/src/util/RegMask.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLI4970-D050T4-Current-Sensor/src/util/SICI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLI4970-D050T4-Current-Sensor/src/Tli4970.h"
  "${CMAKE_CURRENT_LIST_DIR}/TLI4970-D050T4-Current-Sensor/src/util/Tli4970_consts.h"
  "${CMAKE_CURRENT_LIST_DIR}/TLI4970-D050T4-Current-Sensor/src/util/Tli4970_conf.h"
  "${CMAKE_CURRENT_LIST_DIR}/TLI4970-D050T4-Current-Sensor/src/util/SICI.h"
  "${CMAKE_CURRENT_LIST_DIR}/TLI4970-D050T4-Current-Sensor/src/util/RegMask.h"
)

target_include_directories(pac-tli4970 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TLI4970-D050T4-Current-Sensor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tli4970 INTERFACE
    arduino-compat
)
