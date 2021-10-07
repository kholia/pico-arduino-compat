add_library(pac-charset INTERFACE)

target_sources(pac-charset INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Charset/Charset.h"
)

target_include_directories(pac-charset INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Charset"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-charset INTERFACE
    arduino-compat
)
