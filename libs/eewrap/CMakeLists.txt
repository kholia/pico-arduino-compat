add_library(pac-eewrap INTERFACE)

target_sources(pac-eewrap INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EEWrap/EEWrap.h"
)

target_include_directories(pac-eewrap INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EEWrap"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-eewrap INTERFACE
    arduino-compat
)
