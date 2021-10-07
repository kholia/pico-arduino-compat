add_library(pac-bm64-library INTERFACE)

target_sources(pac-bm64-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BM64_arduino/src/BM64.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BM64_arduino/src/BM64_enum.h"
  "${CMAKE_CURRENT_LIST_DIR}/BM64_arduino/src/BM64.h"
  "${CMAKE_CURRENT_LIST_DIR}/BM64_arduino/src/BM64_Debug.h"
)

target_include_directories(pac-bm64-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BM64_arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-bm64-library INTERFACE
    arduino-compat
)
