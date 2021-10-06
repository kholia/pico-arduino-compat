add_library(qc2control INTERFACE)

target_sources(qc2control INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/QC2Control/src/QC2Control.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/QC2Control/src/QC2Control.h"
)

target_include_directories(qc2control INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/QC2Control/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(qc2control INTERFACE
    arduino-compat
)
