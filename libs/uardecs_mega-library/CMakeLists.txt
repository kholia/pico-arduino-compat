add_library(uardecs_mega-library INTERFACE)

target_sources(uardecs_mega-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/UARDECS_MEGA/src/Uardecs_mega.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UARDECS_MEGA/examples/Sensor_TempHumid_SHT3x/sht3x.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UARDECS_MEGA/src/Uardecs_mega.h"
  "${CMAKE_CURRENT_LIST_DIR}/UARDECS_MEGA/examples/Sensor_TempHumid_SHT3x/sht3x.h"
)

target_include_directories(uardecs_mega-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/UARDECS_MEGA/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(uardecs_mega-library INTERFACE
    arduino-compat
)
