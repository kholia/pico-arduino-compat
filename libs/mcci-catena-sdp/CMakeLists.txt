add_library(pac-mcci-catena-sdp INTERFACE)

target_sources(pac-mcci-catena-sdp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MCCI_Catena_SDP/extra/message-port1-format-1f-test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MCCI_Catena_SDP/src/MCCI_Catena_SDP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MCCI_Catena_SDP/examples/sdp_lorawan/cMeasurementLoop.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MCCI_Catena_SDP/src/MCCI_Catena_SDP.h"
  "${CMAKE_CURRENT_LIST_DIR}/MCCI_Catena_SDP/examples/sdp_lorawan/cMeasurementLoop.h"
  "${CMAKE_CURRENT_LIST_DIR}/MCCI_Catena_SDP/examples/sdp_lorawan/sdp_lorawan.h"
)

target_include_directories(pac-mcci-catena-sdp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MCCI_Catena_SDP/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mcci-catena-sdp INTERFACE
    arduino-compat
)
