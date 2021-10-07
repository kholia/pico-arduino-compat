add_library(pac-softpwm INTERFACE)

target_sources(pac-softpwm INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SoftPWM/SoftPWM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SoftPWM/SoftPWM_timer.h"
  "${CMAKE_CURRENT_LIST_DIR}/SoftPWM/SoftPWM.h"
)

target_include_directories(pac-softpwm INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SoftPWM"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-softpwm INTERFACE
    arduino-compat
)
