add_library(eewrap INTERFACE)

target_sources(eewrap INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EEWrap/EEWrap.h"
)

target_include_directories(eewrap INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EEWrap"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(eewrap INTERFACE
    arduino-compat
)
