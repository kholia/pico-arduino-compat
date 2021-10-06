add_library(sevensegint INTERFACE)

target_sources(sevensegint INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SevenSegInt/src/SevenSegInt.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SevenSegInt/userdefs.h"
  "${CMAKE_CURRENT_LIST_DIR}/SevenSegInt/src/SevenSegSys.h"
  "${CMAKE_CURRENT_LIST_DIR}/SevenSegInt/src/userdefs.h"
  "${CMAKE_CURRENT_LIST_DIR}/SevenSegInt/src/SevenSegInt.h"
)

target_include_directories(sevensegint INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SevenSegInt/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sevensegint INTERFACE
    arduino-compat
)
