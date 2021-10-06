add_library(thinsat-program-tslpb-library INTERFACE)

target_sources(thinsat-program-tslpb-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TSLPB/src/TSLPB.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TSLPB/src/VCSFA_ThinSat_DataPacket.h"
  "${CMAKE_CURRENT_LIST_DIR}/TSLPB/src/MPU9250_REGS.h"
  "${CMAKE_CURRENT_LIST_DIR}/TSLPB/src/TSLPB.h"
  "${CMAKE_CURRENT_LIST_DIR}/TSLPB/src/NSL_ThinSat.h"
  "${CMAKE_CURRENT_LIST_DIR}/TSLPB/src/ThinSat_DataPacket_generic.h"
)

target_include_directories(thinsat-program-tslpb-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TSLPB/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(thinsat-program-tslpb-library INTERFACE
    arduino-compat
)
