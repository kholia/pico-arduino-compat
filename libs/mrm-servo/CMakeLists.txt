add_library(pac-mrm-servo INTERFACE)

target_sources(pac-mrm-servo INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mrm-servo/src/mrm-servo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-servo/src/mrm-servo.h"
)

target_include_directories(pac-mrm-servo INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mrm-servo/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mrm-servo INTERFACE
    arduino-compat
)
