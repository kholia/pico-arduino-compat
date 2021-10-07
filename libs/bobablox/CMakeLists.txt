add_library(pac-bobablox INTERFACE)

target_sources(pac-bobablox INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BobaBlox/src/utility/Button.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BobaBlox/src/utility/LED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BobaBlox/src/utility/Knob.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BobaBlox/src/utility/Speaker.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BobaBlox/src/utility/Photocell.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BobaBlox/src/BobaBlox.h"
  "${CMAKE_CURRENT_LIST_DIR}/BobaBlox/src/utility/Button.h"
  "${CMAKE_CURRENT_LIST_DIR}/BobaBlox/src/utility/Speaker.h"
  "${CMAKE_CURRENT_LIST_DIR}/BobaBlox/src/utility/Photocell.h"
  "${CMAKE_CURRENT_LIST_DIR}/BobaBlox/src/utility/LED.h"
  "${CMAKE_CURRENT_LIST_DIR}/BobaBlox/src/utility/Knob.h"
)

target_include_directories(pac-bobablox INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BobaBlox/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-bobablox INTERFACE
    arduino-compat
)
