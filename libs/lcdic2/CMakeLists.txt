add_library(pac-lcdic2 INTERFACE)

target_sources(pac-lcdic2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LCDIC2/LCDIC2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LCDIC2/LCDIC2.h"
)

target_include_directories(pac-lcdic2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LCDIC2"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-lcdic2 INTERFACE
    arduino-compat
)
