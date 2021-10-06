add_library(fourregs INTERFACE)

target_sources(fourregs INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-FourRegs/src/FourRegs.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-FourRegs/src/FourRegs.h"
)

target_include_directories(fourregs INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-FourRegs/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(fourregs INTERFACE
    arduino-compat
)
