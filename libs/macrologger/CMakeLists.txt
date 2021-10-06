add_library(macrologger INTERFACE)

target_sources(macrologger INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/macro-logger/src/MacroLogger.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/macro-logger/src/MacroLogger.h"
)

target_include_directories(macrologger INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/macro-logger/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(macrologger INTERFACE
    arduino-compat
)
