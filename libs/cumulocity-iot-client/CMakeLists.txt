add_library(pac-cumulocity-iot-client INTERFACE)

target_sources(pac-cumulocity-iot-client INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CumulocityClient/src/CumulocityClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CumulocityClient/src/CumulocityClient.h"
)

target_include_directories(pac-cumulocity-iot-client INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CumulocityClient/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-cumulocity-iot-client INTERFACE
    arduino-compat
)
