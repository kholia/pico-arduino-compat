add_library(pac-iottweetsiemens_simatic INTERFACE)

target_sources(pac-iottweetsiemens_simatic INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/IoTtweetSIEMENS_SIMATIC/src/IoTtweetSIEMENS_SIMATIC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoTtweetSIEMENS_SIMATIC/src/AIS_NB_BC95_IOT2020.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IoTtweetSIEMENS_SIMATIC/src/AIS_NB_BC95_IOT2020.h"
  "${CMAKE_CURRENT_LIST_DIR}/IoTtweetSIEMENS_SIMATIC/src/IoTtweetSIEMENS_SIMATIC.h"
)

target_include_directories(pac-iottweetsiemens_simatic INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/IoTtweetSIEMENS_SIMATIC/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-iottweetsiemens_simatic INTERFACE
    arduino-compat
)
