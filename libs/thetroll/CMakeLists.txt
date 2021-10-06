add_library(thetroll INTERFACE)

target_sources(thetroll INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TheTroll/src/troll.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TheTroll/examples/extra/lbt_i2c_nano_code/LBTI2CSlave.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TheTroll/examples/extra/TheTroll_with_lbt_over_i2c/troll.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TheTroll/src/troll.h"
  "${CMAKE_CURRENT_LIST_DIR}/TheTroll/examples/extra/lbt_i2c_nano_code/LBTI2CSlave.h"
  "${CMAKE_CURRENT_LIST_DIR}/TheTroll/examples/extra/lbt_i2c_nano_code/default.h"
  "${CMAKE_CURRENT_LIST_DIR}/TheTroll/examples/extra/TheTroll_with_lbt_over_i2c/troll.h"
)

target_include_directories(thetroll INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TheTroll/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(thetroll INTERFACE
    arduino-compat
)
