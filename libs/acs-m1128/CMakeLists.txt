add_library(pac-acs-m1128 INTERFACE)

target_sources(pac-acs-m1128 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ACS-M1128/M1128.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ACS-M1128/PubSubClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ACS-M1128/PubSubClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/ACS-M1128/SPIFFSReadServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/ACS-M1128/M1128.h"
)

target_include_directories(pac-acs-m1128 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ACS-M1128"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-acs-m1128 INTERFACE
    arduino-compat
)
