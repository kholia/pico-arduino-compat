add_library(pac-sonari2c INTERFACE)

target_sources(pac-sonari2c INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SonarI2C/src/SonarI2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SonarI2C/src/SonarI2C.h"
)

target_include_directories(pac-sonari2c INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SonarI2C/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sonari2c INTERFACE
    arduino-compat
)
