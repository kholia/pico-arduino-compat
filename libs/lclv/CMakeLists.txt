add_library(lclv INTERFACE)

target_sources(lclv INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LCLV/LCLV.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LCLV/LCLV.h"
)

target_include_directories(lclv INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LCLV"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(lclv INTERFACE
    arduino-compat
)
