add_library(mrm-servo INTERFACE)

target_sources(mrm-servo INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mrm-servo/src/mrm-servo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-servo/src/mrm-servo.h"
)

target_include_directories(mrm-servo INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mrm-servo/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mrm-servo INTERFACE
    arduino-compat
)
