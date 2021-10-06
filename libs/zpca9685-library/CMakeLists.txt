add_library(zpca9685-library INTERFACE)

target_sources(zpca9685-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ZPCA9685/ZPCA9685.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ZPCA9685/ZPCA9685.h"
)

target_include_directories(zpca9685-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ZPCA9685"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(zpca9685-library INTERFACE
    arduino-compat
)
