add_library(pac-uselesslib INTERFACE)

target_sources(pac-uselesslib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/UselessLib/src/UselessLib.h"
)

target_include_directories(pac-uselesslib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/UselessLib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-uselesslib INTERFACE
    arduino-compat
)
