add_library(fuzzy-spooder INTERFACE)

target_sources(fuzzy-spooder INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Fuzzy-Spooder/src/Filament_Estimator.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Fuzzy-Spooder/src/Filament_Estimator.h"
)

target_include_directories(fuzzy-spooder INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Fuzzy-Spooder/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(fuzzy-spooder INTERFACE
    arduino-compat
)
