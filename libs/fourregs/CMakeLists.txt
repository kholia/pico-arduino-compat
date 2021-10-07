add_library(pac-fourregs INTERFACE)

target_sources(pac-fourregs INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-FourRegs/src/FourRegs.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-FourRegs/src/FourRegs.h"
)

target_include_directories(pac-fourregs INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-FourRegs/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-fourregs INTERFACE
    arduino-compat
)
