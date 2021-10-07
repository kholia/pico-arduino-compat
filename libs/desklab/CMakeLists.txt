add_library(pac-desklab INTERFACE)

target_sources(pac-desklab INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/desklab-arduino-lib/test/test_native_pm_measurement_methods.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/desklab-arduino-lib/test/test_native_pm_measurement_range.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/desklab-arduino-lib/src/desklab.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/desklab-arduino-lib/src/desklab.h"
)

target_include_directories(pac-desklab INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/desklab-arduino-lib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-desklab INTERFACE
    arduino-compat
)
