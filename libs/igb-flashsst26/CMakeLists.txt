add_library(igb-flashsst26 INTERFACE)

target_sources(igb-flashsst26 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/IGB-FlashSst26/src/FlashSst26.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IGB-FlashSst26/src/PrintSerialFlashSst26.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IGB-FlashSst26/src/PrintSerialFlashSst26.h"
  "${CMAKE_CURRENT_LIST_DIR}/IGB-FlashSst26/src/FlashSst26.h"
)

target_include_directories(igb-flashsst26 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/IGB-FlashSst26/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(igb-flashsst26 INTERFACE
    arduino-compat
)
