add_library(ambimate INTERFACE)

target_sources(ambimate INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Ambimate/Ambimate.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ambimate/Ambimate.h"
)

target_include_directories(ambimate INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Ambimate"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ambimate INTERFACE
    arduino-compat
)
