add_library(pac-qrcode INTERFACE)

target_sources(pac-qrcode INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/QRCode/tests/QrCode.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/QRCode/tests/run-tests.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/QRCode/tests/QrSegment.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/QRCode/tests/BitBuffer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/QRCode/tests/QrSegment.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/QRCode/tests/BitBuffer.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/QRCode/tests/QrCode.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/QRCode/src/qrcode.c"
  "${CMAKE_CURRENT_LIST_DIR}/QRCode/src/qrcode.h"
)

target_include_directories(pac-qrcode INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/QRCode/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-qrcode INTERFACE
    arduino-compat
)
