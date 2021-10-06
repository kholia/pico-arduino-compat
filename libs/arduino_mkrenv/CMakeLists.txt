add_library(arduino_mkrenv INTERFACE)

target_sources(arduino_mkrenv INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MKRENV/src/MKRENV.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MKRENV/src/MKRENV.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MKRENV/src/Arduino_MKRENV.h"
)

target_include_directories(arduino_mkrenv INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_MKRENV/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arduino_mkrenv INTERFACE
    arduino-compat
)
