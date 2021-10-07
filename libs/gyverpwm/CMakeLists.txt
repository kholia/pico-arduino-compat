add_library(pac-gyverpwm INTERFACE)

target_sources(pac-gyverpwm INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GyverPWM/src/GyverPWM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GyverPWM/src/GyverPWM.h"
)

target_include_directories(pac-gyverpwm INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GyverPWM/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-gyverpwm INTERFACE
    arduino-compat
)
