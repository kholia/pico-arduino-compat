add_library(pac-simple5641as INTERFACE)

target_sources(pac-simple5641as INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Simple5641AS/src/Simple5641AS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Simple5641AS/src/Simple5641AS.h"
)

target_include_directories(pac-simple5641as INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Simple5641AS/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-simple5641as INTERFACE
    arduino-compat
)
