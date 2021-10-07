add_library(pac-lime-labs-hdc2080 INTERFACE)

target_sources(pac-lime-labs-hdc2080 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HDC2080-Arduino/src/HDC2080.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HDC2080-Arduino/src/HDC2080.h"
)

target_include_directories(pac-lime-labs-hdc2080 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HDC2080-Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-lime-labs-hdc2080 INTERFACE
    arduino-compat
)
