add_library(zeroregs INTERFACE)

target_sources(zeroregs INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-ZeroRegs/src/ZeroRegs.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-ZeroRegs/src/ZeroRegs.h"
)

target_include_directories(zeroregs INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-ZeroRegs/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(zeroregs INTERFACE
    arduino-compat
)
