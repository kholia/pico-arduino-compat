add_library(cbus INTERFACE)

target_sources(cbus INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CBUS/src/CBUSLongMessage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CBUS/src/CBUSParams.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CBUS/src/CBUS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CBUS/src/cbusdefs.h"
  "${CMAKE_CURRENT_LIST_DIR}/CBUS/src/CBUS.h"
  "${CMAKE_CURRENT_LIST_DIR}/CBUS/src/CBUSParams.h"
)

target_include_directories(cbus INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CBUS/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(cbus INTERFACE
    arduino-compat
)
