add_library(pac-debouncefilterlib INTERFACE)

target_sources(pac-debouncefilterlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-DebounceFilter/src/DebounceFilterLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-DebounceFilter/src/DebounceFilterLib.h"
)

target_include_directories(pac-debouncefilterlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-DebounceFilter/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-debouncefilterlib INTERFACE
    arduino-compat
)
