add_library(adafruit-hmc5883-unified INTERFACE)

target_sources(adafruit-hmc5883-unified INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_HMC5883_Unified/Adafruit_HMC5883_U.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_HMC5883_Unified/Adafruit_HMC5883_U.h"
)

target_include_directories(adafruit-hmc5883-unified INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_HMC5883_Unified"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adafruit-hmc5883-unified INTERFACE
    arduino-compat
)
