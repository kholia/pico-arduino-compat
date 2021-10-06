add_library(callback INTERFACE)

target_sources(callback INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Callback/Callback.h"
)

target_include_directories(callback INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Callback"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(callback INTERFACE
    arduino-compat
)
