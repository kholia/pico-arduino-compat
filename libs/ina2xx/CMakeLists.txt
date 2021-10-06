add_library(ina2xx INTERFACE)

target_sources(ina2xx INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/INA/src/INA.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/INA/src/INA.h"
)

target_include_directories(ina2xx INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/INA/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ina2xx INTERFACE
    arduino-compat
)
