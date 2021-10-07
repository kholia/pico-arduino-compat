add_library(pac-autopid INTERFACE)

target_sources(pac-autopid INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AutoPID/AutoPID.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AutoPID/AutoPID.h"
)

target_include_directories(pac-autopid INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AutoPID"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-autopid INTERFACE
    arduino-compat
)
