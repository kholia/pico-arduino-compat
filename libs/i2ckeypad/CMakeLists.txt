add_library(i2ckeypad INTERFACE)

target_sources(i2ckeypad INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/I2CKeyPad/I2CKeyPad .cpp"
  "${CMAKE_CURRENT_LIST_DIR}/I2CKeyPad/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/I2CKeyPad/I2CKeyPad.h"
)

target_include_directories(i2ckeypad INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/I2CKeyPad"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(i2ckeypad INTERFACE
    arduino-compat
)
