add_library(pac-wizfi360 INTERFACE)

target_sources(pac-wizfi360 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WizFi360/src/WizFi360Server.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WizFi360/src/WizFi360Client.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WizFi360/src/WizFi360Udp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WizFi360/src/WizFi360.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WizFi360/src/utility/RingBuffer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WizFi360/src/utility/WizFi360Drv.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WizFi360/src/WizFi360Server.h"
  "${CMAKE_CURRENT_LIST_DIR}/WizFi360/src/WizFi360.h"
  "${CMAKE_CURRENT_LIST_DIR}/WizFi360/src/WizFi360Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/WizFi360/src/WizFi360Client.h"
  "${CMAKE_CURRENT_LIST_DIR}/WizFi360/src/utility/RingBuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/WizFi360/src/utility/WizFi360Drv.h"
  "${CMAKE_CURRENT_LIST_DIR}/WizFi360/src/utility/debug.h"
)

target_include_directories(pac-wizfi360 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WizFi360/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-wizfi360 INTERFACE
    arduino-compat
)
