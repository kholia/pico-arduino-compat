add_library(pac-tsydmaspi INTERFACE)

target_sources(pac-tsydmaspi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TsyDMASPI/TsyDMASPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/TsyDMASPI/TsyDMASPI/Constants.h"
  "${CMAKE_CURRENT_LIST_DIR}/TsyDMASPI/TsyDMASPI/MasterT40.h"
  "${CMAKE_CURRENT_LIST_DIR}/TsyDMASPI/TsyDMASPI/MasterT32.h"
  "${CMAKE_CURRENT_LIST_DIR}/TsyDMASPI/TsyDMASPI/MasterBase.h"
  "${CMAKE_CURRENT_LIST_DIR}/TsyDMASPI/TsyDMASPI/MasterT36.h"
  "${CMAKE_CURRENT_LIST_DIR}/TsyDMASPI/TsyDMASPI/MasterTLC.h"
  "${CMAKE_CURRENT_LIST_DIR}/TsyDMASPI/TsyDMASPI/util/TeensyDirtySTLErrorSolution/TeensyDirtySTLErrorSolution.h"
)

target_include_directories(pac-tsydmaspi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TsyDMASPI"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tsydmaspi INTERFACE
    arduino-compat
)
