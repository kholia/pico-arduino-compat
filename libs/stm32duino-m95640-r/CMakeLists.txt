add_library(pac-stm32duino-m95640-r INTERFACE)

target_sources(pac-stm32duino-m95640-r INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/M95640-R/src/M95640R.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M95640-R/src/M95640R.h"
)

target_include_directories(pac-stm32duino-m95640-r INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/M95640-R/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stm32duino-m95640-r INTERFACE
    arduino-compat
)
