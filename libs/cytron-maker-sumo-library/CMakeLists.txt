add_library(cytron-maker-sumo-library INTERFACE)

target_sources(cytron-maker-sumo-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CytronMakerSumo/CytronMakerSumo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CytronMakerSumo/CytronMakerSumo.h"
)

target_include_directories(cytron-maker-sumo-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CytronMakerSumo"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(cytron-maker-sumo-library INTERFACE
    arduino-compat
)
