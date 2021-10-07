add_library(pac-sds011_vers INTERFACE)

target_sources(pac-sds011_vers INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SDS011_vers/src/SDS011_vers.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SDS011_vers/src/SDS011_vers.h"
)

target_include_directories(pac-sds011_vers INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SDS011_vers/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sds011_vers INTERFACE
    arduino-compat
)
