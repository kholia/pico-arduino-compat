add_library(madgwick INTERFACE)

target_sources(madgwick INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MadgwickAHRS/src/MadgwickAHRS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MadgwickAHRS/src/MadgwickAHRS.h"
)

target_include_directories(madgwick INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MadgwickAHRS/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(madgwick INTERFACE
    arduino-compat
)
