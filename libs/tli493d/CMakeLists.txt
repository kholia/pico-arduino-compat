add_library(pac-tli493d INTERFACE)

target_sources(pac-tli493d INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TLI493D-W2BW/src/Tli493d.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLI493D-W2BW/src/util/RegMask.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLI493D-W2BW/src/util/BusInterface.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLI493D-W2BW/src/Tli493d.h"
  "${CMAKE_CURRENT_LIST_DIR}/TLI493D-W2BW/src/util/Tli493d_conf.h"
  "${CMAKE_CURRENT_LIST_DIR}/TLI493D-W2BW/src/util/BusInterface.h"
  "${CMAKE_CURRENT_LIST_DIR}/TLI493D-W2BW/src/util/BusInterface2.h"
  "${CMAKE_CURRENT_LIST_DIR}/TLI493D-W2BW/src/util/RegMask.h"
)

target_include_directories(pac-tli493d INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TLI493D-W2BW/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tli493d INTERFACE
    arduino-compat
)
