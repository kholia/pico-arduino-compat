add_library(pac-grove-barometer-hp20x INTERFACE)

target_sources(pac-grove-barometer-hp20x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Grove_Barometer_HP20x/HP20x_dev.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_Barometer_HP20x/KalmanFilter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_Barometer_HP20x/KalmanFilter.h"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_Barometer_HP20x/HP20x_dev.h"
)

target_include_directories(pac-grove-barometer-hp20x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Grove_Barometer_HP20x"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-grove-barometer-hp20x INTERFACE
    arduino-compat
)
