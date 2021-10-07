add_library(pac-grove-temper-humidity-th02 INTERFACE)

target_sources(pac-grove-temper-humidity-th02 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Grove_Temper_Humidity_TH02/TH06_dev.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_Temper_Humidity_TH02/TH02_dev.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_Temper_Humidity_TH02/THSensor_base.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_Temper_Humidity_TH02/TH06_dev.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_Temper_Humidity_TH02/TH02_dev.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_Temper_Humidity_TH02/THSensor_base.h"
)

target_include_directories(pac-grove-temper-humidity-th02 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Grove_Temper_Humidity_TH02"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-grove-temper-humidity-th02 INTERFACE
    arduino-compat
)
