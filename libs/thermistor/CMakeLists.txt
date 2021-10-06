add_library(thermistor INTERFACE)

target_sources(thermistor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/thermistor/thermistor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/thermistor/thermistor.h"
)

target_include_directories(thermistor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/thermistor"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(thermistor INTERFACE
    arduino-compat
)
