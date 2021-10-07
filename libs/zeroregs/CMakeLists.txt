add_library(pac-zeroregs INTERFACE)

target_sources(pac-zeroregs INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-ZeroRegs/src/ZeroRegs.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-ZeroRegs/src/ZeroRegs.h"
)

target_include_directories(pac-zeroregs INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-ZeroRegs/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-zeroregs INTERFACE
    arduino-compat
)
