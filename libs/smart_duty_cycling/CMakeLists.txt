add_library(pac-smart_duty_cycling INTERFACE)

target_sources(pac-smart_duty_cycling INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Smart-Duty-Cycling-Arduino/smart_duty_cycling.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Smart-Duty-Cycling-Arduino/smart_duty_cycling.h"
)

target_include_directories(pac-smart_duty_cycling INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Smart-Duty-Cycling-Arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-smart_duty_cycling INTERFACE
    arduino-compat
)
