add_library(yaesu-ft857d-cat INTERFACE)

target_sources(yaesu-ft857d-cat INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FT857d/src/ft857d.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FT857d/src/ft857d.h"
)

target_include_directories(yaesu-ft857d-cat INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FT857d/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(yaesu-ft857d-cat INTERFACE
    arduino-compat
)
