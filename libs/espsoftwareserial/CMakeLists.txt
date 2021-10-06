add_library(espsoftwareserial INTERFACE)

target_sources(espsoftwareserial INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/espsoftwareserial/src/SoftwareSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/espsoftwareserial/src/SoftwareSerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/espsoftwareserial/src/circular_queue/Delegate.h"
  "${CMAKE_CURRENT_LIST_DIR}/espsoftwareserial/src/circular_queue/circular_queue_mp.h"
  "${CMAKE_CURRENT_LIST_DIR}/espsoftwareserial/src/circular_queue/ghostl.h"
  "${CMAKE_CURRENT_LIST_DIR}/espsoftwareserial/src/circular_queue/circular_queue.h"
  "${CMAKE_CURRENT_LIST_DIR}/espsoftwareserial/src/circular_queue/MultiDelegate.h"
)

target_include_directories(espsoftwareserial INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/espsoftwareserial/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(espsoftwareserial INTERFACE
    arduino-compat
)
