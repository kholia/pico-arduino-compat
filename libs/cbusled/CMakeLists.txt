add_library(pac-cbusled INTERFACE)

target_sources(pac-cbusled INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CBUSLED/src/CBUSLED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CBUSLED/src/CBUSLED.h"
)

target_include_directories(pac-cbusled INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CBUSLED/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-cbusled INTERFACE
    arduino-compat
)
