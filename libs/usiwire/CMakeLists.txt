add_library(usiwire INTERFACE)

target_sources(usiwire INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/USIWire/src/USIWire.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USIWire/src/USI_TWI_Master/USI_TWI_Master.c"
  "${CMAKE_CURRENT_LIST_DIR}/USIWire/src/USI_TWI_Slave/USI_TWI_Slave.c"
  "${CMAKE_CURRENT_LIST_DIR}/USIWire/src/USIWire.h"
  "${CMAKE_CURRENT_LIST_DIR}/USIWire/src/USI_TWI_Master/USI_TWI_Master.h"
  "${CMAKE_CURRENT_LIST_DIR}/USIWire/src/common/usi_io.h"
  "${CMAKE_CURRENT_LIST_DIR}/USIWire/src/USI_TWI_Slave/USI_TWI_Slave.h"
  "${CMAKE_CURRENT_LIST_DIR}/USIWire/examples/TestMaster/slave_register.h"
  "${CMAKE_CURRENT_LIST_DIR}/USIWire/examples/TestSlave/slave_register.h"
)

target_include_directories(usiwire INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/USIWire/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(usiwire INTERFACE
    arduino-compat
)
