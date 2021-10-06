add_library(m5stack_simplebeep INTERFACE)

target_sources(m5stack_simplebeep INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack_SimpleBeep/src/SimpleBeep.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack_SimpleBeep/src/SimpleBeep.h"
)

target_include_directories(m5stack_simplebeep INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/M5Stack_SimpleBeep/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(m5stack_simplebeep INTERFACE
    arduino-compat
)
