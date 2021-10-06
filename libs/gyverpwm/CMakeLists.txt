add_library(gyverpwm INTERFACE)

target_sources(gyverpwm INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GyverPWM/src/GyverPWM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GyverPWM/src/GyverPWM.h"
)

target_include_directories(gyverpwm INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GyverPWM/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(gyverpwm INTERFACE
    arduino-compat
)
