add_library(pac-zforce-air-library INTERFACE)

target_sources(pac-zforce-air-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/zforce-arduino/src/Zforce.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/zforce-arduino/src/I2C/I2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/zforce-arduino/src/Zforce.h"
  "${CMAKE_CURRENT_LIST_DIR}/zforce-arduino/src/I2C/I2C.h"
)

target_include_directories(pac-zforce-air-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/zforce-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-zforce-air-library INTERFACE
    arduino-compat
)
