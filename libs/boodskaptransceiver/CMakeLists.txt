add_library(pac-boodskaptransceiver INTERFACE)

target_sources(pac-boodskaptransceiver INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BoodskapTransceiver/src/BoodskapUdpCommunicator.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BoodskapTransceiver/src/ESP8266Storage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BoodskapTransceiver/src/BoodskapTransceiver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BoodskapTransceiver/Storage.h"
  "${CMAKE_CURRENT_LIST_DIR}/BoodskapTransceiver/BoodskapTransceiver.h"
  "${CMAKE_CURRENT_LIST_DIR}/BoodskapTransceiver/src/BoodskapUdpCommunicator.h"
  "${CMAKE_CURRENT_LIST_DIR}/BoodskapTransceiver/src/Storage.h"
  "${CMAKE_CURRENT_LIST_DIR}/BoodskapTransceiver/src/BoodskapCommunicator.h"
  "${CMAKE_CURRENT_LIST_DIR}/BoodskapTransceiver/src/BoodskapTransceiver.h"
)

target_include_directories(pac-boodskaptransceiver INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BoodskapTransceiver/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-boodskaptransceiver INTERFACE
    arduino-compat
)
