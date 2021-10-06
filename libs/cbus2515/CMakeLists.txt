add_library(cbus2515 INTERFACE)

target_sources(cbus2515 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CBUS2515/src/CBUS2515.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CBUS2515/src/CBUS2515.h"
)

target_include_directories(cbus2515 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CBUS2515/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(cbus2515 INTERFACE
    arduino-compat
)
