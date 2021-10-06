add_library(cumulocity-iot-client INTERFACE)

target_sources(cumulocity-iot-client INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CumulocityClient/src/CumulocityClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CumulocityClient/src/CumulocityClient.h"
)

target_include_directories(cumulocity-iot-client INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CumulocityClient/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(cumulocity-iot-client INTERFACE
    arduino-compat
)
