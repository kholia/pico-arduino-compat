add_library(xlr8addrpack INTERFACE)

target_sources(xlr8addrpack INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/XLR8AddrPack/src/XLR8AddrPack.h"
)

target_include_directories(xlr8addrpack INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/XLR8AddrPack/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(xlr8addrpack INTERFACE
    arduino-compat
)
