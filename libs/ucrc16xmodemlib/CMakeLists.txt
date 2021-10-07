add_library(pac-ucrc16xmodemlib INTERFACE)

target_sources(pac-ucrc16xmodemlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/uCRC16XModemLib/src/uCRC16XModemLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uCRC16XModemLib/src/uCRC16XModemLib.h"
)

target_include_directories(pac-ucrc16xmodemlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/uCRC16XModemLib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ucrc16xmodemlib INTERFACE
    arduino-compat
)
