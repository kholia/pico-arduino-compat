add_library(pac-tinywirem INTERFACE)

target_sources(pac-tinywirem INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TinyWireM/TinyWireM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyWireM/USI_TWI_Master.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyWireM/TinyWireM.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyWireM/USI_TWI_Master.h"
)

target_include_directories(pac-tinywirem INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TinyWireM"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tinywirem INTERFACE
    arduino-compat
)
