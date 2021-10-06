add_library(uardecs-library INTERFACE)

target_sources(uardecs-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/UARDECS/src/Uardecs.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UARDECS/examples/Sensor_TempHumid_SHT3x/sht3x.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UARDECS/src/Uardecs.h"
  "${CMAKE_CURRENT_LIST_DIR}/UARDECS/examples/Sensor_TempHumid_SHT3x/sht3x.h"
)

target_include_directories(uardecs-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/UARDECS/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(uardecs-library INTERFACE
    arduino-compat
)
