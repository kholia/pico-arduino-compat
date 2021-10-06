add_library(pmsensor-hpma115 INTERFACE)

target_sources(pmsensor-hpma115 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PMSensor-HPMA115/src/HPMA115_Compact.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PMSensor-HPMA115/src/fake/FakeStream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PMSensor-HPMA115/src/aqi/aqi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PMSensor-HPMA115/src/HPMA115_Compact.h"
  "${CMAKE_CURRENT_LIST_DIR}/PMSensor-HPMA115/src/hpm/HPMA115_Common.h"
  "${CMAKE_CURRENT_LIST_DIR}/PMSensor-HPMA115/src/fake/FakeStream.h"
  "${CMAKE_CURRENT_LIST_DIR}/PMSensor-HPMA115/src/aqi/aqi.h"
)

target_include_directories(pmsensor-hpma115 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PMSensor-HPMA115/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pmsensor-hpma115 INTERFACE
    arduino-compat
)
