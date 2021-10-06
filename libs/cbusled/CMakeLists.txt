add_library(cbusled INTERFACE)

target_sources(cbusled INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CBUSLED/src/CBUSLED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CBUSLED/src/CBUSLED.h"
)

target_include_directories(cbusled INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CBUSLED/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(cbusled INTERFACE
    arduino-compat
)
