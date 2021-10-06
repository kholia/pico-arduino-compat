add_library(someserial INTERFACE)

target_sources(someserial INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SomeSerial/src/SomeSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SomeSerial/src/SomeSerial.h"
)

target_include_directories(someserial INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SomeSerial/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(someserial INTERFACE
    arduino-compat
)
