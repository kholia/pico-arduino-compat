add_library(pac-fabo-206-uv-si1132 INTERFACE)

target_sources(pac-fabo-206-uv-si1132 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FaBoUV-Si1132-Library/src/FaBoUV_Si1132.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FaBoUV-Si1132-Library/src/FaBoUV_Si1132.h"
)

target_include_directories(pac-fabo-206-uv-si1132 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FaBoUV-Si1132-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-fabo-206-uv-si1132 INTERFACE
    arduino-compat
)
