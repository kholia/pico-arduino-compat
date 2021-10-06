add_library(string_asukiaaa INTERFACE)

target_sources(string_asukiaaa INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-string/src/string_asukiaaa.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-string/src/string_asukiaaa.h"
)

target_include_directories(string_asukiaaa INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-string/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(string_asukiaaa INTERFACE
    arduino-compat
)
