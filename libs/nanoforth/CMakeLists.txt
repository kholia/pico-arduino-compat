add_library(nanoforth INTERFACE)

target_sources(nanoforth INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/nanoFORTH/src/nanoforth_core.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/nanoFORTH/src/nanoforth_vm.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/nanoFORTH/src/nanoforth_asm.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/nanoFORTH/src/nanoforth.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/nanoFORTH/tests/test_core.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/nanoFORTH/tests/test_asm.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/nanoFORTH/src/nanoforth_vm.h"
  "${CMAKE_CURRENT_LIST_DIR}/nanoFORTH/src/nanoforth_core.h"
  "${CMAKE_CURRENT_LIST_DIR}/nanoFORTH/src/nanoforth_asm.h"
  "${CMAKE_CURRENT_LIST_DIR}/nanoFORTH/src/nanoforth.h"
)

target_include_directories(nanoforth INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/nanoFORTH/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(nanoforth INTERFACE
    arduino-compat
)
