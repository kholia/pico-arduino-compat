add_library(pac-ad5254_asukiaaa INTERFACE)

target_sources(pac-ad5254_asukiaaa INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AD5254_asukiaaa/src/AD5254_asukiaaa.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AD5254_asukiaaa/src/AD5254_asukiaaa.h"
)

target_include_directories(pac-ad5254_asukiaaa INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AD5254_asukiaaa/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ad5254_asukiaaa INTERFACE
    arduino-compat
)
