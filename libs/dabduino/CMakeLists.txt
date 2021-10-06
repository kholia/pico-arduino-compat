add_library(dabduino INTERFACE)

target_sources(dabduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DABDUINO/src/DABDUINO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DABDUINO/src/DABDUINO.h"
)

target_include_directories(dabduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DABDUINO/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dabduino INTERFACE
    arduino-compat
)
