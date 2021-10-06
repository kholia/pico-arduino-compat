add_library(balboa-spa-communications INTERFACE)

target_sources(balboa-spa-communications INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BalBoaSpa/src/BalBoaSpa.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BalBoaSpa/src/BalBoaMessages.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BalBoaSpa/src/crc.c"
  "${CMAKE_CURRENT_LIST_DIR}/BalBoaSpa/src/BalBoaMessages.h"
  "${CMAKE_CURRENT_LIST_DIR}/BalBoaSpa/src/crc.h"
  "${CMAKE_CURRENT_LIST_DIR}/BalBoaSpa/src/BalBoaSpa.h"
)

target_include_directories(balboa-spa-communications INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BalBoaSpa/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(balboa-spa-communications INTERFACE
    arduino-compat
)
