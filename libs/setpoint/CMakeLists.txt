add_library(setpoint INTERFACE)

target_sources(setpoint INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SetPoint/src/SetPoint.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SetPoint/src/SetPoint.h"
)

target_include_directories(setpoint INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SetPoint/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(setpoint INTERFACE
    arduino-compat
)
