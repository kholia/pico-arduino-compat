add_library(pm2005lib INTERFACE)

target_sources(pm2005lib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino_pm2005lib/src/PM2005Lib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_pm2005lib/src/PM2005Lib.h"
)

target_include_directories(pm2005lib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino_pm2005lib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pm2005lib INTERFACE
    arduino-compat
)
