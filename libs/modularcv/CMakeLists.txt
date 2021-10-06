add_library(modularcv INTERFACE)

target_sources(modularcv INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/controlVoltage/src/LFO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/controlVoltage/src/Sequencer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/controlVoltage/src/controlVoltage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/controlVoltage/src/controlVoltage.h"
  "${CMAKE_CURRENT_LIST_DIR}/controlVoltage/src/LFO.h"
  "${CMAKE_CURRENT_LIST_DIR}/controlVoltage/src/Sequencer.h"
)

target_include_directories(modularcv INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/controlVoltage/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(modularcv INTERFACE
    arduino-compat
)
