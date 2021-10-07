add_library(pac-i2ckeypad INTERFACE)

target_sources(pac-i2ckeypad INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/I2CKeyPad/I2CKeyPad .cpp"
  "${CMAKE_CURRENT_LIST_DIR}/I2CKeyPad/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/I2CKeyPad/I2CKeyPad.h"
)

target_include_directories(pac-i2ckeypad INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/I2CKeyPad"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-i2ckeypad INTERFACE
    arduino-compat
)
