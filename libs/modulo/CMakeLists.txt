add_library(modulo INTERFACE)

target_sources(modulo INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/modulo-lib/src/KnobModulo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/modulo-lib/src/IREncoding.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/modulo-lib/src/JoystickModulo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/modulo-lib/src/ControllerModuloBackend.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/modulo-lib/src/DisplayModulo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/modulo-lib/src/BaseModulo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/modulo-lib/src/IRRemoteModulo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/modulo-lib/src/Modulo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/modulo-lib/src/MotorDriverModulo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/modulo-lib/src/TemperatureProbeModulo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/modulo-lib/src/ControllerModulo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/modulo-lib/src/ModuloTWI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/modulo-lib/src/BlankSlateModulo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/modulo-lib/src/Modulo.h"
  "${CMAKE_CURRENT_LIST_DIR}/modulo-lib/src/DisplayModulo.h"
  "${CMAKE_CURRENT_LIST_DIR}/modulo-lib/src/ControllerModulo.h"
  "${CMAKE_CURRENT_LIST_DIR}/modulo-lib/src/IRRemoteModulo.h"
  "${CMAKE_CURRENT_LIST_DIR}/modulo-lib/src/IREncoding.h"
  "${CMAKE_CURRENT_LIST_DIR}/modulo-lib/src/TemperatureProbeModulo.h"
  "${CMAKE_CURRENT_LIST_DIR}/modulo-lib/src/MotorDriverModulo.h"
  "${CMAKE_CURRENT_LIST_DIR}/modulo-lib/src/ModuloWiring.h"
  "${CMAKE_CURRENT_LIST_DIR}/modulo-lib/src/BlankSlateModulo.h"
  "${CMAKE_CURRENT_LIST_DIR}/modulo-lib/src/JoystickModulo.h"
  "${CMAKE_CURRENT_LIST_DIR}/modulo-lib/src/ModuloTWI.h"
  "${CMAKE_CURRENT_LIST_DIR}/modulo-lib/src/KnobModulo.h"
  "${CMAKE_CURRENT_LIST_DIR}/modulo-lib/src/BaseModulo.h"
  "${CMAKE_CURRENT_LIST_DIR}/modulo-lib/src/ControllerModuloBackend.h"
)

target_include_directories(modulo INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/modulo-lib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(modulo INTERFACE
    arduino-compat
)
