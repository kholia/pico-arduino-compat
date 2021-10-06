add_library(gadgetbox INTERFACE)

target_sources(gadgetbox INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Gadget-Box/src/GadgetBox.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Gadget-Box/src/GadgetBox.h"
  "${CMAKE_CURRENT_LIST_DIR}/Gadget-Box/examples/IRBox-Blynk-UniversalRemote/GadgetBox_esp8266.h"
  "${CMAKE_CURRENT_LIST_DIR}/Gadget-Box/examples/IRBox-Blynk-UniversalRemote/password.h"
  "${CMAKE_CURRENT_LIST_DIR}/Gadget-Box/examples/eCogs/eCog110-Buzzer/pitches.h"
)

target_include_directories(gadgetbox INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Gadget-Box/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(gadgetbox INTERFACE
    arduino-compat
)
