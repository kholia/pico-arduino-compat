add_library(digi-dot-booster-library INTERFACE)

target_sources(digi-dot-booster-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DD-Booster-Library/src/DDBooster.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DD-Booster-Library/src/DDBooster.h"
)

target_include_directories(digi-dot-booster-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DD-Booster-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(digi-dot-booster-library INTERFACE
    arduino-compat
)
