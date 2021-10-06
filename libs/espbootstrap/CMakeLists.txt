add_library(espbootstrap INTERFACE)

target_sources(espbootstrap INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EspBootstrap/src/EspBootstrapMap.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspBootstrap/src/ParametersEEPROM.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspBootstrap/src/JsonConfigHttp.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspBootstrap/src/EspBootstrapDict.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspBootstrap/src/ParametersSPIFFS.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspBootstrap/src/JsonConfigHttpMap.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspBootstrap/src/JsonConfigBase.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspBootstrap/src/ParametersBase.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspBootstrap/src/JsonConfigSPIFFS.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspBootstrap/src/ParametersEEPROMMap.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspBootstrap/src/JsonConfigSPIFFSMap.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspBootstrap/src/EspBootstrapBase.h"
)

target_include_directories(espbootstrap INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EspBootstrap/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(espbootstrap INTERFACE
    arduino-compat
)
