add_library(pac-wizfi250 INTERFACE)

target_sources(pac-wizfi250 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WizFi250_arduino_library/src/WizFi250Server.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WizFi250_arduino_library/src/WizFi250Udp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WizFi250_arduino_library/src/WizFi250.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WizFi250_arduino_library/src/WizFi250Client.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WizFi250_arduino_library/src/utility/WizFi250_spi_drv.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WizFi250_arduino_library/src/utility/WizFiRingBuffer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WizFi250_arduino_library/src/utility/general_parse.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WizFi250_arduino_library/src/WizFi250Server.h"
  "${CMAKE_CURRENT_LIST_DIR}/WizFi250_arduino_library/src/WizFi250Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/WizFi250_arduino_library/src/WizFi250Client.h"
  "${CMAKE_CURRENT_LIST_DIR}/WizFi250_arduino_library/src/WizFi250.h"
  "${CMAKE_CURRENT_LIST_DIR}/WizFi250_arduino_library/src/WizFi250_definitions.h"
  "${CMAKE_CURRENT_LIST_DIR}/WizFi250_arduino_library/src/utility/WizFiRingBuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/WizFi250_arduino_library/src/utility/Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/WizFi250_arduino_library/src/utility/general_parse.h"
  "${CMAKE_CURRENT_LIST_DIR}/WizFi250_arduino_library/src/utility/WizFi250_spi_drv.h"
)

target_include_directories(pac-wizfi250 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WizFi250_arduino_library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-wizfi250 INTERFACE
    arduino-compat
)
