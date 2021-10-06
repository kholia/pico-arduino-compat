add_library(sodaq_r4x INTERFACE)

target_sources(sodaq_r4x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Sodaq_R4X/src/Sodaq_R4X.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Sodaq_R4X/src/Sodaq_Ublox.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Sodaq_R4X/src/Sodaq_Ublox.h"
  "${CMAKE_CURRENT_LIST_DIR}/Sodaq_R4X/src/Sodaq_R4X.h"
)

target_include_directories(sodaq_r4x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Sodaq_R4X/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sodaq_r4x INTERFACE
    arduino-compat
)
