add_library(sx8634 INTERFACE)

target_sources(sx8634 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-SX8634/src/SX8634.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-SX8634/src/SX8634.h"
)

target_include_directories(sx8634 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-SX8634/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sx8634 INTERFACE
    arduino-compat
)
