add_library(pac-anyleaf INTERFACE)

target_sources(pac-anyleaf INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ph-cpp/Anyleaf.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ph-cpp/Anyleaf.h"
)

target_include_directories(pac-anyleaf INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ph-cpp"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-anyleaf INTERFACE
    arduino-compat
)
