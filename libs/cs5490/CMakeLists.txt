add_library(pac-cs5490 INTERFACE)

target_sources(pac-cs5490 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CS5490/src/CS5490.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CS5490/src/CS5490.h"
)

target_include_directories(pac-cs5490 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CS5490/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-cs5490 INTERFACE
    arduino-compat
)
