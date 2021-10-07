add_library(pac-fserial INTERFACE)

target_sources(pac-fserial INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FSerial/FSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FSerial/FSerial.h"
)

target_include_directories(pac-fserial INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FSerial"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-fserial INTERFACE
    arduino-compat
)
