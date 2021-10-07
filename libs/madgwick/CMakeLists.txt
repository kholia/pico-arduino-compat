add_library(pac-madgwick INTERFACE)

target_sources(pac-madgwick INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MadgwickAHRS/src/MadgwickAHRS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MadgwickAHRS/src/MadgwickAHRS.h"
)

target_include_directories(pac-madgwick INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MadgwickAHRS/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-madgwick INTERFACE
    arduino-compat
)
