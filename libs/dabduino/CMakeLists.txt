add_library(pac-dabduino INTERFACE)

target_sources(pac-dabduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DABDUINO/src/DABDUINO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DABDUINO/src/DABDUINO.h"
)

target_include_directories(pac-dabduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DABDUINO/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dabduino INTERFACE
    arduino-compat
)
