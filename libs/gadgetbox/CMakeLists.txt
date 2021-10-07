add_library(pac-gadgetbox INTERFACE)

target_sources(pac-gadgetbox INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Gadget-Box/src/GadgetBox.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Gadget-Box/src/GadgetBox.h"
  "${CMAKE_CURRENT_LIST_DIR}/Gadget-Box/examples/IRBox-Blynk-UniversalRemote/GadgetBox_esp8266.h"
  "${CMAKE_CURRENT_LIST_DIR}/Gadget-Box/examples/IRBox-Blynk-UniversalRemote/password.h"
  "${CMAKE_CURRENT_LIST_DIR}/Gadget-Box/examples/eCogs/eCog110-Buzzer/pitches.h"
)

target_include_directories(pac-gadgetbox INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Gadget-Box/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-gadgetbox INTERFACE
    arduino-compat
)
