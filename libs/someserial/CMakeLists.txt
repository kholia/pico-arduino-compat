add_library(pac-someserial INTERFACE)

target_sources(pac-someserial INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SomeSerial/src/SomeSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SomeSerial/src/SomeSerial.h"
)

target_include_directories(pac-someserial INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SomeSerial/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-someserial INTERFACE
    arduino-compat
)
