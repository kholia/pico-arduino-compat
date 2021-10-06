add_library(opt3101 INTERFACE)

target_sources(opt3101 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/opt3101-arduino/OPT3101.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/opt3101-arduino/OPT3101.h"
)

target_include_directories(opt3101 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/opt3101-arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(opt3101 INTERFACE
    arduino-compat
)
