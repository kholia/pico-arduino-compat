add_library(pac-neohwserial INTERFACE)

target_sources(pac-neohwserial INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NeoHWSerial/src/NeoHWSerial0.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NeoHWSerial/src/NeoHWSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NeoHWSerial/src/NeoHWSerial1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NeoHWSerial/src/NeoHWSerial2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NeoHWSerial/src/NeoHWSerial3.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NeoHWSerial/src/NeoHWSerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/NeoHWSerial/src/NeoHWSerial_private.h"
)

target_include_directories(pac-neohwserial INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NeoHWSerial/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-neohwserial INTERFACE
    arduino-compat
)
