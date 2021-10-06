add_library(bbq10keyboard INTERFACE)

target_sources(bbq10keyboard INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino_bbq10kbd/src/BBQ10Keyboard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_bbq10kbd/src/BBQ10Keyboard.h"
)

target_include_directories(bbq10keyboard INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino_bbq10kbd/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(bbq10keyboard INTERFACE
    arduino-compat
)
