add_library(pac-kangaroo-motion-controller INTERFACE)

target_sources(pac-kangaroo-motion-controller INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Kangaroo_Arduino_Library/KangarooChannel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Kangaroo_Arduino_Library/KangarooCRC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Kangaroo_Arduino_Library/KangarooSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Kangaroo_Arduino_Library/KangarooReplyReader.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Kangaroo_Arduino_Library/KangarooStatus.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Kangaroo_Arduino_Library/KangarooCommandWriter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Kangaroo_Arduino_Library/KangarooMonitor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Kangaroo_Arduino_Library/KangarooTimeout.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Kangaroo_Arduino_Library/KangarooReplyReceiver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Kangaroo_Arduino_Library/Kangaroo.h"
)

target_include_directories(pac-kangaroo-motion-controller INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Kangaroo_Arduino_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-kangaroo-motion-controller INTERFACE
    arduino-compat
)
