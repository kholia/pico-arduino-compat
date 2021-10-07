add_library(pac-moonphase INTERFACE)

target_sources(pac-moonphase INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/moonPhase-esp32/moonPhase.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/moonPhase-esp32/examples/esp32/ILI9341/phases/phase_065.c"
  "${CMAKE_CURRENT_LIST_DIR}/moonPhase-esp32/examples/esp32/ILI9341/phases/phase_075.c"
  "${CMAKE_CURRENT_LIST_DIR}/moonPhase-esp32/examples/esp32/ILI9341/phases/phase_105.c"
  "${CMAKE_CURRENT_LIST_DIR}/moonPhase-esp32/examples/esp32/ILI9341/phases/phase_225.c"
  "${CMAKE_CURRENT_LIST_DIR}/moonPhase-esp32/examples/esp32/ILI9341/phases/phase_090.c"
  "${CMAKE_CURRENT_LIST_DIR}/moonPhase-esp32/examples/esp32/ILI9341/phases/phase_315.c"
  "${CMAKE_CURRENT_LIST_DIR}/moonPhase-esp32/examples/esp32/ILI9341/phases/phase_210.c"
  "${CMAKE_CURRENT_LIST_DIR}/moonPhase-esp32/examples/esp32/ILI9341/phases/phase_015.c"
  "${CMAKE_CURRENT_LIST_DIR}/moonPhase-esp32/examples/esp32/ILI9341/phases/phase_270.c"
  "${CMAKE_CURRENT_LIST_DIR}/moonPhase-esp32/examples/esp32/ILI9341/phases/phase_030.c"
  "${CMAKE_CURRENT_LIST_DIR}/moonPhase-esp32/examples/esp32/ILI9341/phases/phase_195.c"
  "${CMAKE_CURRENT_LIST_DIR}/moonPhase-esp32/examples/esp32/ILI9341/phases/phase_255.c"
  "${CMAKE_CURRENT_LIST_DIR}/moonPhase-esp32/examples/esp32/ILI9341/phases/phase_000.c"
  "${CMAKE_CURRENT_LIST_DIR}/moonPhase-esp32/examples/esp32/ILI9341/phases/phase_300.c"
  "${CMAKE_CURRENT_LIST_DIR}/moonPhase-esp32/examples/esp32/ILI9341/phases/phase_120.c"
  "${CMAKE_CURRENT_LIST_DIR}/moonPhase-esp32/examples/esp32/ILI9341/phases/phase_240.c"
  "${CMAKE_CURRENT_LIST_DIR}/moonPhase-esp32/examples/esp32/ILI9341/phases/phase_285.c"
  "${CMAKE_CURRENT_LIST_DIR}/moonPhase-esp32/examples/esp32/ILI9341/phases/phase_345.c"
  "${CMAKE_CURRENT_LIST_DIR}/moonPhase-esp32/examples/esp32/ILI9341/phases/phase_165.c"
  "${CMAKE_CURRENT_LIST_DIR}/moonPhase-esp32/examples/esp32/ILI9341/phases/phase_330.c"
  "${CMAKE_CURRENT_LIST_DIR}/moonPhase-esp32/examples/esp32/ILI9341/phases/phase_045.c"
  "${CMAKE_CURRENT_LIST_DIR}/moonPhase-esp32/examples/esp32/ILI9341/phases/phase_150.c"
  "${CMAKE_CURRENT_LIST_DIR}/moonPhase-esp32/examples/esp32/ILI9341/phases/phase_060.c"
  "${CMAKE_CURRENT_LIST_DIR}/moonPhase-esp32/examples/esp32/ILI9341/phases/phase_180.c"
  "${CMAKE_CURRENT_LIST_DIR}/moonPhase-esp32/examples/esp32/ILI9341/phases/phase_360.c"
  "${CMAKE_CURRENT_LIST_DIR}/moonPhase-esp32/examples/esp32/ILI9341/phases/phase_135.c"
  "${CMAKE_CURRENT_LIST_DIR}/moonPhase-esp32/moonPhase.h"
)

target_include_directories(pac-moonphase INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/moonPhase-esp32"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-moonphase INTERFACE
    arduino-compat
)
