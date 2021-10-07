add_library(pac-andee101 INTERFACE)

target_sources(pac-andee101 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Andee101/src/Andee101.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Andee101/src/Andee101.h"
)

target_include_directories(pac-andee101 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Andee101/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-andee101 INTERFACE
    arduino-compat
)
