add_library(pac-macrologger INTERFACE)

target_sources(pac-macrologger INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/macro-logger/src/MacroLogger.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/macro-logger/src/MacroLogger.h"
)

target_include_directories(pac-macrologger INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/macro-logger/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-macrologger INTERFACE
    arduino-compat
)
