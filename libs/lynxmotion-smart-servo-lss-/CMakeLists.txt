add_library(pac-lynxmotion-smart-servo-lss- INTERFACE)

target_sources(pac-lynxmotion-smart-servo-lss- INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LSS_Library_Arduino/src/LSS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LSS_Library_Arduino/src/LSS.h"
)

target_include_directories(pac-lynxmotion-smart-servo-lss- INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LSS_Library_Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-lynxmotion-smart-servo-lss- INTERFACE
    arduino-compat
)
