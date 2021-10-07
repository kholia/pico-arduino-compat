add_library(pac-dbs-lib INTERFACE)

target_sources(pac-dbs-lib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DBS_Lib/Adafruit_MCP3008.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DBS_Lib/Adafruit_MCP3008.h"
  "${CMAKE_CURRENT_LIST_DIR}/DBS_Lib/DBS_AVRIII.h"
  "${CMAKE_CURRENT_LIST_DIR}/DBS_Lib/DBS_AVRIV.h"
)

target_include_directories(pac-dbs-lib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DBS_Lib"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dbs-lib INTERFACE
    arduino-compat
)
