add_library(microds18b20 INTERFACE)

target_sources(microds18b20 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/microDS18B20/src/DS_raw.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/microDS18B20/src/microOneWire.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/microDS18B20/src/microDS18B20.h"
  "${CMAKE_CURRENT_LIST_DIR}/microDS18B20/src/DS_raw.h"
  "${CMAKE_CURRENT_LIST_DIR}/microDS18B20/src/microOneWire.h"
)

target_include_directories(microds18b20 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/microDS18B20/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(microds18b20 INTERFACE
    arduino-compat
)
