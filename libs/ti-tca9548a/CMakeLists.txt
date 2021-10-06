add_library(ti-tca9548a INTERFACE)

target_sources(ti-tca9548a INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TI_TCA9548A/src/TwoWireMux.h"
  "${CMAKE_CURRENT_LIST_DIR}/TI_TCA9548A/src/TI_TCA9548A.h"
)

target_include_directories(ti-tca9548a INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TI_TCA9548A/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ti-tca9548a INTERFACE
    arduino-compat
)
