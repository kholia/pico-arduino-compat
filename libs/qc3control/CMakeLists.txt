add_library(pac-qc3control INTERFACE)

target_sources(pac-qc3control INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/QC3Control/src/QC3Control.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/QC3Control/src/QC3Control.h"
)

target_include_directories(pac-qc3control INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/QC3Control/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-qc3control INTERFACE
    arduino-compat
)
