add_library(pac-smooththermistor INTERFACE)

target_sources(pac-smooththermistor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SmoothThermistor/src/SmoothThermistor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SmoothThermistor/src/SmoothThermistor.h"
)

target_include_directories(pac-smooththermistor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SmoothThermistor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-smooththermistor INTERFACE
    arduino-compat
)
