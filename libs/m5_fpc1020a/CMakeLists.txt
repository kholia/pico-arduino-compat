add_library(pac-m5_fpc1020a INTERFACE)

target_sources(pac-m5_fpc1020a INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/M5_FPC1020A/src/M5_Finger.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5_FPC1020A/src/M5_FPC1020A.h"
)

target_include_directories(pac-m5_fpc1020a INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/M5_FPC1020A/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-m5_fpc1020a INTERFACE
    arduino-compat
)
