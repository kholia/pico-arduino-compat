add_library(pac-sparkfun-metawatch INTERFACE)

target_sources(pac-sparkfun-metawatch INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MetaWatch_Library/src/SparkFun_MetaWatch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MetaWatch_Library/src/SparkFun_MetaWatch.h"
)

target_include_directories(pac-sparkfun-metawatch INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MetaWatch_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-metawatch INTERFACE
    arduino-compat
)
