add_library(pac-alpenglow-funicorn INTERFACE)

target_sources(pac-alpenglow-funicorn INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FUnicorn/src/FUnicorn.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FUnicorn/src/FUnicorn.h"
)

target_include_directories(pac-alpenglow-funicorn INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FUnicorn/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-alpenglow-funicorn INTERFACE
    arduino-compat
)
