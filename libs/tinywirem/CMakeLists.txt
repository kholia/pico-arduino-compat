add_library(tinywirem INTERFACE)

target_sources(tinywirem INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TinyWireM/TinyWireM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyWireM/USI_TWI_Master.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyWireM/TinyWireM.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyWireM/USI_TWI_Master.h"
)

target_include_directories(tinywirem INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TinyWireM"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tinywirem INTERFACE
    arduino-compat
)
