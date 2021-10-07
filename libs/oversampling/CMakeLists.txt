add_library(pac-oversampling INTERFACE)

target_sources(pac-oversampling INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Oversampling/src/Oversampling.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Oversampling/src/Oversampling.h"
)

target_include_directories(pac-oversampling INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Oversampling/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-oversampling INTERFACE
    arduino-compat
)
