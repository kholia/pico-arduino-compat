add_library(effortless-spiffs INTERFACE)

target_sources(effortless-spiffs INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Effortless-SPIFFS/src/Effortless_SPIFFS.h"
)

target_include_directories(effortless-spiffs INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Effortless-SPIFFS/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(effortless-spiffs INTERFACE
    arduino-compat
)
