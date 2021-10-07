add_library(pac-cbus INTERFACE)

target_sources(pac-cbus INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CBUS/src/CBUSLongMessage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CBUS/src/CBUSParams.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CBUS/src/CBUS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CBUS/src/cbusdefs.h"
  "${CMAKE_CURRENT_LIST_DIR}/CBUS/src/CBUS.h"
  "${CMAKE_CURRENT_LIST_DIR}/CBUS/src/CBUSParams.h"
)

target_include_directories(pac-cbus INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CBUS/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-cbus INTERFACE
    arduino-compat
)
