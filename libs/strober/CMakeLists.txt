add_library(strober INTERFACE)

target_sources(strober INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Strober/Strober.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Strober/Strober.h"
)

target_include_directories(strober INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Strober"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(strober INTERFACE
    arduino-compat
)
