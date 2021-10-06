add_library(nova-fitness-sds-dust-sensors-library INTERFACE)

target_sources(nova-fitness-sds-dust-sensors-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/sds-dust-sensors-arduino-library/src/SdsDustSensorResults.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/sds-dust-sensors-arduino-library/src/SdsDustSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/sds-dust-sensors-arduino-library/src/SdsDustSensorResults.h"
  "${CMAKE_CURRENT_LIST_DIR}/sds-dust-sensors-arduino-library/src/SdsDustSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/sds-dust-sensors-arduino-library/src/Serials.h"
  "${CMAKE_CURRENT_LIST_DIR}/sds-dust-sensors-arduino-library/src/SdsDustSensorCommands.h"
)

target_include_directories(nova-fitness-sds-dust-sensors-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/sds-dust-sensors-arduino-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(nova-fitness-sds-dust-sensors-library INTERFACE
    arduino-compat
)
