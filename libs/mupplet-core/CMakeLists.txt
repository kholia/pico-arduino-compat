add_library(mupplet-core INTERFACE)

target_sources(mupplet-core INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mupplet-core/src/mup_light.h"
  "${CMAKE_CURRENT_LIST_DIR}/mupplet-core/src/mup_switch.h"
  "${CMAKE_CURRENT_LIST_DIR}/mupplet-core/src/mup_light_pca9685.h"
  "${CMAKE_CURRENT_LIST_DIR}/mupplet-core/src/home_assistant.h"
  "${CMAKE_CURRENT_LIST_DIR}/mupplet-core/src/mup_digital_out.h"
  "${CMAKE_CURRENT_LIST_DIR}/mupplet-core/src/mup_frequency_counter.h"
  "${CMAKE_CURRENT_LIST_DIR}/mupplet-core/src/mupplet_core.h"
  "${CMAKE_CURRENT_LIST_DIR}/mupplet-core/src/helper/light_controller.h"
)

target_include_directories(mupplet-core INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mupplet-core/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mupplet-core INTERFACE
    arduino-compat
)
