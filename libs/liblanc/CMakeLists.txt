add_library(pac-liblanc INTERFACE)

target_sources(pac-liblanc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LibLanc/LibLanc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LibLanc/LibLanc.h"
)

target_include_directories(pac-liblanc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LibLanc"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-liblanc INTERFACE
    arduino-compat
)
