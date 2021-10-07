add_library(pac-mkrgsm1400iot INTERFACE)

target_sources(pac-mkrgsm1400iot INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MkrGsm1400IoT/src/MkrGsm1400IoT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MkrGsm1400IoT/src/MkrGsm1400IoT.h"
  "${CMAKE_CURRENT_LIST_DIR}/MkrGsm1400IoT/examples/storeAndReadSimData/arduino_secrets.h"
)

target_include_directories(pac-mkrgsm1400iot INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MkrGsm1400IoT/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mkrgsm1400iot INTERFACE
    arduino-compat
)
