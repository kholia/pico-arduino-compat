add_library(pac-ad57x4r INTERFACE)

target_sources(pac-ad57x4r INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AD57X4R/src/AD57X4R.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AD57X4R/src/AD57X4R.h"
)

target_include_directories(pac-ad57x4r INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AD57X4R/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ad57x4r INTERFACE
    arduino-compat
)
