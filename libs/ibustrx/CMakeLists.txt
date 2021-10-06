add_library(ibustrx INTERFACE)

target_sources(ibustrx INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-ibustrx/src/IbusTrx.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-ibustrx/src/IbusMessage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-ibustrx/src/IbusNames.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-ibustrx/src/IbusTrx.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-ibustrx/src/IbusMessage.h"
)

target_include_directories(ibustrx INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-ibustrx/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ibustrx INTERFACE
    arduino-compat
)
