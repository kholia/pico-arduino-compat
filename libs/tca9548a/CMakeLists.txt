add_library(pac-tca9548a INTERFACE)

target_sources(pac-tca9548a INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TCA9548A/src/TCA9548A.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TCA9548A/src/TCA9548A.h"
)

target_include_directories(pac-tca9548a INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TCA9548A/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tca9548a INTERFACE
    arduino-compat
)
