add_library(tvout INTERFACE)

target_sources(tvout INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tvout/video_gen.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tvout/TVoutPrint.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tvout/TVout.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tvout/pollserial/pollserial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tvout/TVout/video_gen.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tvout/TVout/TVoutPrint.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tvout/TVout/TVout.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tvout/TVoutfonts/font8x8ext.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tvout/TVoutfonts/font4x6.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tvout/TVoutfonts/font6x8.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tvout/TVoutfonts/font8x8.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tvout/examples/DemoNTSC/TVOlogo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tvout/examples/DemoNTSC/schematic.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tvout/examples/DemoPAL/TVOlogo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tvout/examples/DemoPAL/schematic.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tvout/TVout.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tvout/video_gen.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tvout/pollserial/pollserial.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tvout/TVout/TVout.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tvout/TVout/video_gen.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tvout/TVout/spec/hardware_setup.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tvout/TVout/spec/video_properties.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tvout/TVout/spec/asm_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tvout/TVoutfonts/font8x8ext.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tvout/TVoutfonts/font8x8.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tvout/TVoutfonts/font4x6.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tvout/TVoutfonts/fontALL.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tvout/TVoutfonts/font6x8.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tvout/examples/DemoNTSC/TVOlogo.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tvout/examples/DemoNTSC/schematic.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tvout/examples/DemoPAL/TVOlogo.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tvout/examples/DemoPAL/schematic.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tvout/spec/hardware_setup.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tvout/spec/video_properties.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tvout/spec/asm_macros.h"
)

target_include_directories(tvout INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-tvout"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tvout INTERFACE
    arduino-compat
)
