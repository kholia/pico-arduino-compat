add_library(pac-seeeduino-gprs INTERFACE)

target_sources(pac-seeeduino-gprs INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Seeeduino_GPRS/gprs.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeeduino_GPRS/bluetooth.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeeduino_GPRS/fm.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeeduino_GPRS/sim800.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeeduino_GPRS/fm.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeeduino_GPRS/sim800.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeeduino_GPRS/gprs.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeeduino_GPRS/bluetooth.h"
)

target_include_directories(pac-seeeduino-gprs INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Seeeduino_GPRS"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-seeeduino-gprs INTERFACE
    arduino-compat
)
