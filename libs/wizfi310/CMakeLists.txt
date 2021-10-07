add_library(pac-wizfi310 INTERFACE)

target_sources(pac-wizfi310 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WizFi310_arduino_library/src/WizFi310Client.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WizFi310_arduino_library/src/WizFi310.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WizFi310_arduino_library/src/WizFi310Server.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WizFi310_arduino_library/src/WizFi310Udp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WizFi310_arduino_library/src/utility/WizFiRingBuffer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WizFi310_arduino_library/src/utility/general_parse.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WizFi310_arduino_library/src/utility/WizFi310Drv.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WizFi310_arduino_library/src/utility/backup/WizFi310RingBuffer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WizFi310_arduino_library/src/WizFi310_definitions.h"
  "${CMAKE_CURRENT_LIST_DIR}/WizFi310_arduino_library/src/WizFi310Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/WizFi310_arduino_library/src/WizFi310Server.h"
  "${CMAKE_CURRENT_LIST_DIR}/WizFi310_arduino_library/src/WizFi310Client.h"
  "${CMAKE_CURRENT_LIST_DIR}/WizFi310_arduino_library/src/WizFi310.h"
  "${CMAKE_CURRENT_LIST_DIR}/WizFi310_arduino_library/src/utility/WizFiRingBuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/WizFi310_arduino_library/src/utility/WizFi310Drv.h"
  "${CMAKE_CURRENT_LIST_DIR}/WizFi310_arduino_library/src/utility/general_parse.h"
  "${CMAKE_CURRENT_LIST_DIR}/WizFi310_arduino_library/src/utility/debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/WizFi310_arduino_library/src/utility/backup/WizFi310RingBuffer.h"
)

target_include_directories(pac-wizfi310 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WizFi310_arduino_library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-wizfi310 INTERFACE
    arduino-compat
)
