add_library(pac-iobeam INTERFACE)

target_sources(pac-iobeam INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/iobeam-client-embedded/Iobeam.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/iobeam-client-embedded/src/arduino/Iobeam.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/iobeam-client-embedded/include/arduino/Iobeam.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/iobeam-client-embedded/src/http.c"
  "${CMAKE_CURRENT_LIST_DIR}/iobeam-client-embedded/src/cc3200/iobeam.c"
  "${CMAKE_CURRENT_LIST_DIR}/iobeam-client-embedded/examples/cc3200/Temperature/pinmux.c"
  "${CMAKE_CURRENT_LIST_DIR}/iobeam-client-embedded/examples/cc3200/Temperature/main.c"
  "${CMAKE_CURRENT_LIST_DIR}/iobeam-client-embedded/examples/cc3200/Temperature/tmp006drv.c"
  "${CMAKE_CURRENT_LIST_DIR}/iobeam-client-embedded/Iobeam.h"
  "${CMAKE_CURRENT_LIST_DIR}/iobeam-client-embedded/include/http.h"
  "${CMAKE_CURRENT_LIST_DIR}/iobeam-client-embedded/include/iobeam_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/iobeam-client-embedded/include/iobeam_log.h"
  "${CMAKE_CURRENT_LIST_DIR}/iobeam-client-embedded/include/arduino/log.h"
  "${CMAKE_CURRENT_LIST_DIR}/iobeam-client-embedded/include/cc3200/log.h"
  "${CMAKE_CURRENT_LIST_DIR}/iobeam-client-embedded/include/cc3200/iobeam.h"
  "${CMAKE_CURRENT_LIST_DIR}/iobeam-client-embedded/src/Iobeam.h"
  "${CMAKE_CURRENT_LIST_DIR}/iobeam-client-embedded/examples/cc3200/Temperature/wifi.h"
  "${CMAKE_CURRENT_LIST_DIR}/iobeam-client-embedded/examples/cc3200/Temperature/pinmux.h"
  "${CMAKE_CURRENT_LIST_DIR}/iobeam-client-embedded/examples/cc3200/Temperature/tmp006drv.h"
)

target_include_directories(pac-iobeam INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/iobeam-client-embedded/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-iobeam INTERFACE
    arduino-compat
)
