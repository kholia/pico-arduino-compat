add_library(mkrgsm1400iot INTERFACE)

target_sources(mkrgsm1400iot INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MkrGsm1400IoT/src/MkrGsm1400IoT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MkrGsm1400IoT/src/MkrGsm1400IoT.h"
  "${CMAKE_CURRENT_LIST_DIR}/MkrGsm1400IoT/examples/storeAndReadSimData/arduino_secrets.h"
)

target_include_directories(mkrgsm1400iot INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MkrGsm1400IoT/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mkrgsm1400iot INTERFACE
    arduino-compat
)
