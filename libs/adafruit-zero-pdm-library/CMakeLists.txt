add_library(pac-adafruit-zero-pdm-library INTERFACE)

target_sources(pac-adafruit-zero-pdm-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ZeroPDM/Adafruit_ZeroPDM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ZeroPDM/Adafruit_ZeroPDMSPI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ZeroPDM/Adafruit_ZeroPDMSPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ZeroPDM/Adafruit_ZeroPDM.h"
)

target_include_directories(pac-adafruit-zero-pdm-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ZeroPDM"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adafruit-zero-pdm-library INTERFACE
    arduino-compat
)
