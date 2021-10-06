add_library(tlv493d-a1b6 INTERFACE)

target_sources(tlv493d-a1b6 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TLV493D-A1B6-3DMagnetic-Sensor/src/Tlv493d.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLV493D-A1B6-3DMagnetic-Sensor/src/util/RegMask.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLV493D-A1B6-3DMagnetic-Sensor/src/util/BusInterface.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLV493D-A1B6-3DMagnetic-Sensor/src/Tlv493d.h"
  "${CMAKE_CURRENT_LIST_DIR}/TLV493D-A1B6-3DMagnetic-Sensor/src/util/Tlv493d_conf.h"
  "${CMAKE_CURRENT_LIST_DIR}/TLV493D-A1B6-3DMagnetic-Sensor/src/util/BusInterface.h"
  "${CMAKE_CURRENT_LIST_DIR}/TLV493D-A1B6-3DMagnetic-Sensor/src/util/BusInterface2.h"
  "${CMAKE_CURRENT_LIST_DIR}/TLV493D-A1B6-3DMagnetic-Sensor/src/util/RegMask.h"
)

target_include_directories(tlv493d-a1b6 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TLV493D-A1B6-3DMagnetic-Sensor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tlv493d-a1b6 INTERFACE
    arduino-compat
)
