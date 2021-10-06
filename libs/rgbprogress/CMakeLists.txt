add_library(rgbprogress INTERFACE)

target_sources(rgbprogress INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RGBProgress/src/RGBProgress.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RGBProgress/src/RGBProgress.h"
)

target_include_directories(rgbprogress INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RGBProgress/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rgbprogress INTERFACE
    arduino-compat
)
