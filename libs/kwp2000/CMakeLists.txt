add_library(pac-kwp2000 INTERFACE)

target_sources(pac-kwp2000 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Keyword-Protocol-2000/src/KWP2000.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Keyword-Protocol-2000/src/ISO.h"
  "${CMAKE_CURRENT_LIST_DIR}/Keyword-Protocol-2000/src/KWP2000.h"
)

target_include_directories(pac-kwp2000 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Keyword-Protocol-2000/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-kwp2000 INTERFACE
    arduino-compat
)
