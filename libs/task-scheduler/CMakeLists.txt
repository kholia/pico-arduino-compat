add_library(pac-task-scheduler INTERFACE)

target_sources(pac-task-scheduler INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Tasks/src/Tasks.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Tasks/examples/Class_methods/Test_Class.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Tasks/examples/Class_methods_2/Test_Class.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Tasks/src/Tasks.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tasks/examples/Class_methods/Test_Class.h"
  "${CMAKE_CURRENT_LIST_DIR}/Tasks/examples/Class_methods_2/Test_Class.h"
)

target_include_directories(pac-task-scheduler INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Tasks/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-task-scheduler INTERFACE
    arduino-compat
)
