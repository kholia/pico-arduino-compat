add_library(pac-gyverencoder INTERFACE)

target_sources(pac-gyverencoder INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GyverEncoder/src/GyverEncoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GyverEncoder/src/GyverEncoder.h"
)

target_include_directories(pac-gyverencoder INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GyverEncoder/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-gyverencoder INTERFACE
    arduino-compat
)
