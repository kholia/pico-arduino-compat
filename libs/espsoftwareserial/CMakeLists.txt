add_library(pac-espsoftwareserial INTERFACE)

target_sources(pac-espsoftwareserial INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/espsoftwareserial/src/SoftwareSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/espsoftwareserial/src/SoftwareSerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/espsoftwareserial/src/circular_queue/Delegate.h"
  "${CMAKE_CURRENT_LIST_DIR}/espsoftwareserial/src/circular_queue/circular_queue_mp.h"
  "${CMAKE_CURRENT_LIST_DIR}/espsoftwareserial/src/circular_queue/ghostl.h"
  "${CMAKE_CURRENT_LIST_DIR}/espsoftwareserial/src/circular_queue/circular_queue.h"
  "${CMAKE_CURRENT_LIST_DIR}/espsoftwareserial/src/circular_queue/MultiDelegate.h"
)

target_include_directories(pac-espsoftwareserial INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/espsoftwareserial/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-espsoftwareserial INTERFACE
    arduino-compat
)
