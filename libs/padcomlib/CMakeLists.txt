add_library(padcomlib INTERFACE)

target_sources(padcomlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PadComLib/src/PadComLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PadComLib/src/PadComLib.h"
)

target_include_directories(padcomlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PadComLib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(padcomlib INTERFACE
    arduino-compat
)
