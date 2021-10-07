add_library(pac-embui INTERFACE)

target_sources(pac-embui INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EmbUI/src/timeProcessor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EmbUI/src/gpio.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EmbUI/src/CustomTask.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EmbUI/src/mqtt.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EmbUI/src/udpecho.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EmbUI/src/EmbUI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EmbUI/src/ui.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EmbUI/src/basicui.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EmbUI/src/ts.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EmbUI/src/wi-fi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EmbUI/src/config.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EmbUI/examples/01_ex_generic/src/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EmbUI/examples/01_ex_generic/src/interface.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EmbUI/examples/02_sensors/src/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EmbUI/examples/02_sensors/src/interface.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EmbUI/src/ts.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmbUI/src/wi-fi.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmbUI/src/CustomTask.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmbUI/src/gpio.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmbUI/src/mqtt.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmbUI/src/constants.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmbUI/src/config.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmbUI/src/globals.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmbUI/src/EmbUI.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmbUI/src/ui.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmbUI/src/LList.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmbUI/src/udpecho.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmbUI/src/basicui.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmbUI/src/i18n.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmbUI/src/timeProcessor.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmbUI/examples/01_ex_generic/src/uistrings.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmbUI/examples/01_ex_generic/src/ftpSrv.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmbUI/examples/01_ex_generic/src/globals.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmbUI/examples/01_ex_generic/src/interface.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmbUI/examples/01_ex_generic/src/main.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmbUI/examples/02_sensors/src/uistrings.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmbUI/examples/02_sensors/src/ftpSrv.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmbUI/examples/02_sensors/src/globals.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmbUI/examples/02_sensors/src/interface.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmbUI/examples/02_sensors/src/main.h"
)

target_include_directories(pac-embui INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EmbUI/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-embui INTERFACE
    arduino-compat
)
