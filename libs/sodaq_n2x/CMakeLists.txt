add_library(sodaq_n2x INTERFACE)

target_sources(sodaq_n2x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Sodaq_N2X/src/Sodaq_N2X.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Sodaq_N2X/src/Sodaq_N2X.h"
)

target_include_directories(sodaq_n2x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Sodaq_N2X/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sodaq_n2x INTERFACE
    arduino-compat
)
