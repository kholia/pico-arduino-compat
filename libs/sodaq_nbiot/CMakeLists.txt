add_library(pac-sodaq_nbiot INTERFACE)

target_sources(pac-sodaq_nbiot INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Sodaq_nbIOT/src/Sodaq_nbIOT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Sodaq_nbIOT/src/Sodaq_AT_Device.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Sodaq_nbIOT/src/Sodaq_nbIOT.h"
  "${CMAKE_CURRENT_LIST_DIR}/Sodaq_nbIOT/src/Sodaq_AT_Device.h"
  "${CMAKE_CURRENT_LIST_DIR}/Sodaq_nbIOT/src/Sodaq_OnOffBee.h"
)

target_include_directories(pac-sodaq_nbiot INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Sodaq_nbIOT/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sodaq_nbiot INTERFACE
    arduino-compat
)
