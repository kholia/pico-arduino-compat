add_library(pac-simple-web-serial INTERFACE)

target_sources(pac-simple-web-serial INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/simplewebserial-arduino-library/src/SimpleWebSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/simplewebserial-arduino-library/src/SimpleWebSerial.h"
)

target_include_directories(pac-simple-web-serial INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/simplewebserial-arduino-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-simple-web-serial INTERFACE
    arduino-compat
)
