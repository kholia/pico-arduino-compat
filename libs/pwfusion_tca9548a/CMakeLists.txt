add_library(pwfusion_tca9548a INTERFACE)

target_sources(pwfusion_tca9548a INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PWFusion_TCA9548A/src/PWFusion_TCA9548A.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PWFusion_TCA9548A/src/PWFusion_TCA9548A.h"
)

target_include_directories(pwfusion_tca9548a INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PWFusion_TCA9548A/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pwfusion_tca9548a INTERFACE
    arduino-compat
)
