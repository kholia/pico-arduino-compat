add_library(ad5254_asukiaaa INTERFACE)

target_sources(ad5254_asukiaaa INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AD5254_asukiaaa/src/AD5254_asukiaaa.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AD5254_asukiaaa/src/AD5254_asukiaaa.h"
)

target_include_directories(ad5254_asukiaaa INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AD5254_asukiaaa/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ad5254_asukiaaa INTERFACE
    arduino-compat
)
