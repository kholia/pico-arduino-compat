add_library(pac-digi-dot-booster-library INTERFACE)

target_sources(pac-digi-dot-booster-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DD-Booster-Library/src/DDBooster.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DD-Booster-Library/src/DDBooster.h"
)

target_include_directories(pac-digi-dot-booster-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DD-Booster-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-digi-dot-booster-library INTERFACE
    arduino-compat
)
