add_library(pac-sevensegint INTERFACE)

target_sources(pac-sevensegint INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SevenSegInt/src/SevenSegInt.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SevenSegInt/userdefs.h"
  "${CMAKE_CURRENT_LIST_DIR}/SevenSegInt/src/SevenSegSys.h"
  "${CMAKE_CURRENT_LIST_DIR}/SevenSegInt/src/userdefs.h"
  "${CMAKE_CURRENT_LIST_DIR}/SevenSegInt/src/SevenSegInt.h"
)

target_include_directories(pac-sevensegint INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SevenSegInt/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sevensegint INTERFACE
    arduino-compat
)
