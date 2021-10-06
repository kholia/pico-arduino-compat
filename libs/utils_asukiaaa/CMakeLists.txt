add_library(utils_asukiaaa INTERFACE)

target_sources(utils_asukiaaa INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/utils_asukiaaa/src/utils_asukiaaa/wire.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/utils_asukiaaa/src/utils_asukiaaa/string.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/utils_asukiaaa/src/utils_asukiaaa/button.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/utils_asukiaaa/src/utils_asukiaaa.h"
  "${CMAKE_CURRENT_LIST_DIR}/utils_asukiaaa/src/utils_asukiaaa/button.h"
  "${CMAKE_CURRENT_LIST_DIR}/utils_asukiaaa/src/utils_asukiaaa/wire.h"
  "${CMAKE_CURRENT_LIST_DIR}/utils_asukiaaa/src/utils_asukiaaa/string.h"
)

target_include_directories(utils_asukiaaa INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/utils_asukiaaa/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(utils_asukiaaa INTERFACE
    arduino-compat
)
