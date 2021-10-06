add_library(sodaq_bmp085 INTERFACE)

target_sources(sodaq_bmp085 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Sodaq_BMP085/src/Sodaq_BMP085.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Sodaq_BMP085/src/Sodaq_BMP085.h"
)

target_include_directories(sodaq_bmp085 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Sodaq_BMP085/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sodaq_bmp085 INTERFACE
    arduino-compat
)
