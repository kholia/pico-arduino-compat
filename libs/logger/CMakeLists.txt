add_library(pac-logger INTERFACE)

target_sources(pac-logger INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Logger/src/Logger.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Logger/src/Logger.h"
  "${CMAKE_CURRENT_LIST_DIR}/Logger/examples/Logger/CustomLoggerOutput.h"
)

target_include_directories(pac-logger INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Logger/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-logger INTERFACE
    arduino-compat
)
