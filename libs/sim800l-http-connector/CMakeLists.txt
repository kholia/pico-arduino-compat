add_library(pac-sim800l-http-connector INTERFACE)

target_sources(pac-sim800l-http-connector INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-SIM800L-driver/src/SIM800L.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-SIM800L-driver/src/SIM800L.h"
)

target_include_directories(pac-sim800l-http-connector INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-SIM800L-driver/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sim800l-http-connector INTERFACE
    arduino-compat
)
