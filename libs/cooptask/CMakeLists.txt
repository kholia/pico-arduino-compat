add_library(pac-cooptask INTERFACE)

target_sources(pac-cooptask INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CoopTask/src/CoopSemaphore.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CoopTask/src/CoopTaskBase.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CoopTask/src/BasicCoopTask.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CoopTask/examples/portable/portable.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CoopTask/src/CoopTask.h"
  "${CMAKE_CURRENT_LIST_DIR}/CoopTask/src/CoopTaskBase.h"
  "${CMAKE_CURRENT_LIST_DIR}/CoopTask/src/CoopMutex.h"
  "${CMAKE_CURRENT_LIST_DIR}/CoopTask/src/BasicCoopTask.h"
  "${CMAKE_CURRENT_LIST_DIR}/CoopTask/src/CoopSemaphore.h"
  "${CMAKE_CURRENT_LIST_DIR}/CoopTask/src/circular_queue/Delegate.h"
  "${CMAKE_CURRENT_LIST_DIR}/CoopTask/src/circular_queue/circular_queue_mp.h"
  "${CMAKE_CURRENT_LIST_DIR}/CoopTask/src/circular_queue/ghostl.h"
  "${CMAKE_CURRENT_LIST_DIR}/CoopTask/src/circular_queue/circular_queue.h"
  "${CMAKE_CURRENT_LIST_DIR}/CoopTask/src/circular_queue/MultiDelegate.h"
)

target_include_directories(pac-cooptask INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CoopTask/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-cooptask INTERFACE
    arduino-compat
)
