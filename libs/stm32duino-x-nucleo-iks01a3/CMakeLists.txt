add_library(stm32duino-x-nucleo-iks01a3 INTERFACE)

target_sources(stm32duino-x-nucleo-iks01a3 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IKS01A3/src/X-NUCLEO-IKS01A3.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IKS01A3/examples/X_NUCLEO_IKS01A3_LSM6DSOX_MLC/lsm6dsox_activity_recognition_for_mobile.h"
)

target_include_directories(stm32duino-x-nucleo-iks01a3 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-IKS01A3/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(stm32duino-x-nucleo-iks01a3 INTERFACE
    arduino-compat
)
