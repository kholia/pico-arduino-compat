add_library(espalexa INTERFACE)

target_sources(espalexa INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Espalexa/src/EspalexaDevice.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Espalexa/src/Espalexa.h"
  "${CMAKE_CURRENT_LIST_DIR}/Espalexa/src/EspalexaDevice.h"
)

target_include_directories(espalexa INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Espalexa/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(espalexa INTERFACE
    arduino-compat
)
