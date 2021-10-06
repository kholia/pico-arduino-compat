add_library(kmp_rs485 INTERFACE)

target_sources(kmp_rs485 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/KMP_RS485/KMP_RS485.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/KMP_RS485/KMP_RS485.h"
)

target_include_directories(kmp_rs485 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/KMP_RS485"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(kmp_rs485 INTERFACE
    arduino-compat
)
