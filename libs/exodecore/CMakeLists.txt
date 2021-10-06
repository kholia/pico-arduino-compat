add_library(exodecore INTERFACE)

target_sources(exodecore INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ExodeCore/src/Exode.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ExodeCore/src/InstructionSet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ExodeCore/src/utility/ExodeThread.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ExodeCore/src/utility/Thread.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ExodeCore/src/utility/ThreadController.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ExodeCore/src/utility/AccelStepper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ExodeCore/src/InstructionSet.h"
  "${CMAKE_CURRENT_LIST_DIR}/ExodeCore/src/Exode.h"
  "${CMAKE_CURRENT_LIST_DIR}/ExodeCore/src/exode_set.h"
  "${CMAKE_CURRENT_LIST_DIR}/ExodeCore/src/utility/Thread.h"
  "${CMAKE_CURRENT_LIST_DIR}/ExodeCore/src/utility/AccelStepper.h"
  "${CMAKE_CURRENT_LIST_DIR}/ExodeCore/src/utility/ThreadController.h"
  "${CMAKE_CURRENT_LIST_DIR}/ExodeCore/src/utility/ExodeThread.h"
)

target_include_directories(exodecore INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ExodeCore/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(exodecore INTERFACE
    arduino-compat
)
