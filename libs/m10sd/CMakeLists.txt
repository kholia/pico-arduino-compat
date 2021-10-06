add_library(m10sd INTERFACE)

target_sources(m10sd INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/M10SD/src/M10SD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M10SD/src/M10SD.h"
)

target_include_directories(m10sd INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/M10SD/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(m10sd INTERFACE
    arduino-compat
)
