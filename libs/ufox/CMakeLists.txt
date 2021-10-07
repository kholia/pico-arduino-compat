add_library(pac-ufox INTERFACE)

target_sources(pac-ufox INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Ufox/Ufox.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ufox/Ufox.h"
)

target_include_directories(pac-ufox INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Ufox"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ufox INTERFACE
    arduino-compat
)
