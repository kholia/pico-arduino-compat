add_library(ufox INTERFACE)

target_sources(ufox INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Ufox/Ufox.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ufox/Ufox.h"
)

target_include_directories(ufox INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Ufox"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ufox INTERFACE
    arduino-compat
)
