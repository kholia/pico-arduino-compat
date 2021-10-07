add_library(pac-schedtask INTERFACE)

target_sources(pac-schedtask INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SchedTask/src/SchedBase.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SchedTask/src/SchedTask.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SchedTask/src/SchedBase.h"
  "${CMAKE_CURRENT_LIST_DIR}/SchedTask/src/SchedTask.h"
  "${CMAKE_CURRENT_LIST_DIR}/SchedTask/src/ExampleConstants.h"
  "${CMAKE_CURRENT_LIST_DIR}/SchedTask/src/SchedTaskT.h"
)

target_include_directories(pac-schedtask INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SchedTask/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-schedtask INTERFACE
    arduino-compat
)
