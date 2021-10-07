add_library(pac-seg7 INTERFACE)

target_sources(pac-seg7 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Seg7/src/Seg7.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seg7/src/Seg7.h"
)

target_include_directories(pac-seg7 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Seg7/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-seg7 INTERFACE
    arduino-compat
)
