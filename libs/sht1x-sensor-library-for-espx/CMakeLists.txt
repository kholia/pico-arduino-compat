add_library(sht1x-sensor-library-for-espx INTERFACE)

target_sources(sht1x-sensor-library-for-espx INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SHT1x-ESP/SHT1x-ESP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SHT1x-ESP/SHT1x-ESP.h"
)

target_include_directories(sht1x-sensor-library-for-espx INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SHT1x-ESP"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sht1x-sensor-library-for-espx INTERFACE
    arduino-compat
)
