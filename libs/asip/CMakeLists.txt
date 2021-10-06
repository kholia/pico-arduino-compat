add_library(asip INTERFACE)

target_sources(asip INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/asip/src/asipIO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/asip/src/asip.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/asip/src/utility/debug.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/asip/src/asipService.h"
  "${CMAKE_CURRENT_LIST_DIR}/asip/src/asipIO.h"
  "${CMAKE_CURRENT_LIST_DIR}/asip/src/asip.h"
  "${CMAKE_CURRENT_LIST_DIR}/asip/src/utility/boards.h"
  "${CMAKE_CURRENT_LIST_DIR}/asip/src/utility/debug.h"
)

target_include_directories(asip INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/asip/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(asip INTERFACE
    arduino-compat
)
