add_library(pac-tm1637-driver INTERFACE)

target_sources(pac-tm1637-driver INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TM1637/src/mI2C.h"
  "${CMAKE_CURRENT_LIST_DIR}/TM1637/src/TM1637.h"
  "${CMAKE_CURRENT_LIST_DIR}/TM1637/src/type_traits.h"
  "${CMAKE_CURRENT_LIST_DIR}/TM1637/src/animator.h"
)

target_include_directories(pac-tm1637-driver INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TM1637/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tm1637-driver INTERFACE
    arduino-compat
)
