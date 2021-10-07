add_library(pac-setpoint INTERFACE)

target_sources(pac-setpoint INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SetPoint/src/SetPoint.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SetPoint/src/SetPoint.h"
)

target_include_directories(pac-setpoint INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SetPoint/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-setpoint INTERFACE
    arduino-compat
)
