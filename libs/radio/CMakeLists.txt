add_library(pac-radio INTERFACE)

target_sources(pac-radio INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Radio/src/SI4703.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Radio/src/RDA5807M.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Radio/src/RDSParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Radio/src/SI4705.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Radio/src/newchip.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Radio/src/radio.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Radio/src/SI47xx.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Radio/src/TEA5767.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Radio/src/SI4705.h"
  "${CMAKE_CURRENT_LIST_DIR}/Radio/src/radio.h"
  "${CMAKE_CURRENT_LIST_DIR}/Radio/src/newchip.h"
  "${CMAKE_CURRENT_LIST_DIR}/Radio/src/SI4703.h"
  "${CMAKE_CURRENT_LIST_DIR}/Radio/src/RDSParser.h"
  "${CMAKE_CURRENT_LIST_DIR}/Radio/src/SI47xx.h"
  "${CMAKE_CURRENT_LIST_DIR}/Radio/src/RDA5807M.h"
  "${CMAKE_CURRENT_LIST_DIR}/Radio/src/TEA5767.h"
  "${CMAKE_CURRENT_LIST_DIR}/Radio/examples/WebRadio/StringBuffer.h"
)

target_include_directories(pac-radio INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Radio/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-radio INTERFACE
    arduino-compat
)
