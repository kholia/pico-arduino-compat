add_library(pac-by8x01-16p-audio-module-library INTERFACE)

target_sources(pac-by8x01-16p-audio-module-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BY8X01-16P-Arduino/src/BY8X01-16P.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BY8X01-16P-Arduino/src/BY8X01-16P.h"
)

target_include_directories(pac-by8x01-16p-audio-module-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BY8X01-16P-Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-by8x01-16p-audio-module-library INTERFACE
    arduino-compat
)
