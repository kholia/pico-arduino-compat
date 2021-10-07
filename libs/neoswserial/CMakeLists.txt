add_library(pac-neoswserial INTERFACE)

target_sources(pac-neoswserial INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NeoSWSerial/src/NeoSWSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NeoSWSerial/src/NeoSWSerial.h"
)

target_include_directories(pac-neoswserial INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NeoSWSerial/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-neoswserial INTERFACE
    arduino-compat
)
