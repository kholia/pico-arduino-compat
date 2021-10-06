add_library(lx16a-servo INTERFACE)

target_sources(lx16a-servo INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/lx16a-servo/src/lx16a-servo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lx16a-servo/src/lx16a-servo.h"
)

target_include_directories(lx16a-servo INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/lx16a-servo/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(lx16a-servo INTERFACE
    arduino-compat
)
