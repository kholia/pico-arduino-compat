add_library(sodaq_rn2483 INTERFACE)

target_sources(sodaq_rn2483 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Sodaq_RN2483/src/Sodaq_RN2483.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Sodaq_RN2483/src/Sodaq_RN2483_internal.h"
  "${CMAKE_CURRENT_LIST_DIR}/Sodaq_RN2483/src/Utils.h"
  "${CMAKE_CURRENT_LIST_DIR}/Sodaq_RN2483/src/Sodaq_RN2483.h"
)

target_include_directories(sodaq_rn2483 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Sodaq_RN2483/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sodaq_rn2483 INTERFACE
    arduino-compat
)
