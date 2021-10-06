add_library(geekble_liedetector INTERFACE)

target_sources(geekble_liedetector INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Geekble_LieDetector/src/Geekble_LieDetector.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Geekble_LieDetector/src/Geekble_LieDetector.h"
)

target_include_directories(geekble_liedetector INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Geekble_LieDetector/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(geekble_liedetector INTERFACE
    arduino-compat
)
