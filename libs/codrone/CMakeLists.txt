add_library(codrone INTERFACE)

target_sources(codrone INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CoDrone/CoDrone.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CoDrone/CoDrone_request.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CoDrone/CoDrone_util.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CoDrone/CoDrone_send.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CoDrone/CoDrone_led.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CoDrone/examples/LED/ChangeLEDColor/ChangeLEDColor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CoDrone/examples/LED/ResetDefaultLED/ResetDefaultLED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CoDrone/examples/LED/ChangeLEDMode/ChangeLEDMode.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CoDrone/examples/LED/ChangeDefaultLEDMode/ChangeDefaultLEDMode.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CoDrone/examples/LED/ChangeDefaultLEDColor/ChangeDefaultLEDColor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CoDrone/utility/EEPROM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CoDrone/CoDrone.h"
  "${CMAKE_CURRENT_LIST_DIR}/CoDrone/utility/EEPROM.h"
)

target_include_directories(codrone INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CoDrone"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(codrone INTERFACE
    arduino-compat
)
