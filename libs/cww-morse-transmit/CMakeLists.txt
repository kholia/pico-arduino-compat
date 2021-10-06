add_library(cww-morse-transmit INTERFACE)

target_sources(cww-morse-transmit INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/cww_MorseTx/cww_MorseTx.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cww_MorseTx/cww_MorseTx.h"
)

target_include_directories(cww-morse-transmit INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/cww_MorseTx"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(cww-morse-transmit INTERFACE
    arduino-compat
)
