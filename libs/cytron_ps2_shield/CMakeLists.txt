add_library(cytron_ps2_shield INTERFACE)

target_sources(cytron_ps2_shield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_PS2_Shield/src/Cytron_PS2_Shield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_PS2_Shield/src/DebuggerSerial/src/DebuggerSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_PS2_Shield/src/Cytron_PS2_Shield.h"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_PS2_Shield/src/DebuggerSerial/src/DebuggerSerial.h"
)

target_include_directories(cytron_ps2_shield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Cytron_PS2_Shield/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(cytron_ps2_shield INTERFACE
    arduino-compat
)
