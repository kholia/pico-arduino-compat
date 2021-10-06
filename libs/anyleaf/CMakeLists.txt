add_library(anyleaf INTERFACE)

target_sources(anyleaf INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ph-cpp/Anyleaf.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ph-cpp/Anyleaf.h"
)

target_include_directories(anyleaf INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ph-cpp"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(anyleaf INTERFACE
    arduino-compat
)
