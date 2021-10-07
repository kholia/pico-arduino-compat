add_library(pac-max31328rtc INTERFACE)

target_sources(pac-max31328rtc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MAX31328-Arduino-Driver/src/max31328.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MAX31328-Arduino-Driver/src/max31328.h"
)

target_include_directories(pac-max31328rtc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MAX31328-Arduino-Driver/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-max31328rtc INTERFACE
    arduino-compat
)
