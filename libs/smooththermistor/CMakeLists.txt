add_library(smooththermistor INTERFACE)

target_sources(smooththermistor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SmoothThermistor/src/SmoothThermistor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SmoothThermistor/src/SmoothThermistor.h"
)

target_include_directories(smooththermistor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SmoothThermistor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(smooththermistor INTERFACE
    arduino-compat
)
