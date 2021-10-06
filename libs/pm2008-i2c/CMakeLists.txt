add_library(pm2008-i2c INTERFACE)

target_sources(pm2008-i2c INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/pm2008_i2c/src/pm2008_i2c.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pm2008_i2c/src/pm2008_i2c.h"
)

target_include_directories(pm2008-i2c INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/pm2008_i2c/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pm2008-i2c INTERFACE
    arduino-compat
)
