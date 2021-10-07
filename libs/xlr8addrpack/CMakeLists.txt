add_library(pac-xlr8addrpack INTERFACE)

target_sources(pac-xlr8addrpack INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/XLR8AddrPack/src/XLR8AddrPack.h"
)

target_include_directories(pac-xlr8addrpack INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/XLR8AddrPack/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-xlr8addrpack INTERFACE
    arduino-compat
)
