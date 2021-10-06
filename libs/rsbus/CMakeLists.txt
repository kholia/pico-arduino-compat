add_library(rsbus INTERFACE)

target_sources(rsbus INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RSbus/src/RSbus.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RSbus/src/support_fifo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RSbus/src/support_usart.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RSbus/src/support_isr.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RSbus/src/support_isr.h"
  "${CMAKE_CURRENT_LIST_DIR}/RSbus/src/RSbus.h"
  "${CMAKE_CURRENT_LIST_DIR}/RSbus/src/support_usart.h"
  "${CMAKE_CURRENT_LIST_DIR}/RSbus/src/support_fifo.h"
)

target_include_directories(rsbus INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RSbus/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rsbus INTERFACE
    arduino-compat
)
