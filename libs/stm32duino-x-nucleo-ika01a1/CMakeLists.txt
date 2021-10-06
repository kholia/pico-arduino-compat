add_library(stm32duino-x-nucleo-ika01a1 INTERFACE)

target_sources(stm32duino-x-nucleo-ika01a1 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IKA01A1/src/TSU104.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IKA01A1/src/TSV734.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IKA01A1/src/TSZ124.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IKA01A1/src/XNucleoIKA01A1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IKA01A1/src/TSV734_def.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IKA01A1/src/x_nucleo_ika01a1_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IKA01A1/src/TSU104_def.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IKA01A1/src/InstrumentationAmp.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IKA01A1/src/TSV734.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IKA01A1/src/PhotoSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IKA01A1/src/XNucleoIKA01A1.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IKA01A1/src/Component.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IKA01A1/src/TSZ124.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IKA01A1/src/LedDriver.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IKA01A1/src/instrumentation_amp_def.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IKA01A1/src/TSU104.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IKA01A1/src/led_driver_def.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IKA01A1/src/TSZ124_def.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IKA01A1/src/photosensor_def.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IKA01A1/src/component_def.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IKA01A1/src/Windcomp.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IKA01A1/src/windcomp_def.h"
)

target_include_directories(stm32duino-x-nucleo-ika01a1 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IKA01A1/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(stm32duino-x-nucleo-ika01a1 INTERFACE
    arduino-compat
)
