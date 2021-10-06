add_library(sensirion-i2c-stc3x INTERFACE)

target_sources(sensirion-i2c-stc3x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-i2c-stc3x/src/SensirionI2CStc3x.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-i2c-stc3x/src/SensirionI2CStc3x.h"
)

target_include_directories(sensirion-i2c-stc3x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-i2c-stc3x/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sensirion-i2c-stc3x INTERFACE
    arduino-compat
)
