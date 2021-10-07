add_library(pac-effortless-spiffs INTERFACE)

target_sources(pac-effortless-spiffs INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Effortless-SPIFFS/src/Effortless_SPIFFS.h"
)

target_include_directories(pac-effortless-spiffs INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Effortless-SPIFFS/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-effortless-spiffs INTERFACE
    arduino-compat
)
