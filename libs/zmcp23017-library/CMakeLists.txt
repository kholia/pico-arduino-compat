add_library(zmcp23017-library INTERFACE)

target_sources(zmcp23017-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ZMCP23017/ZMCP23017.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ZMCP23017/ZMCP23017.h"
)

target_include_directories(zmcp23017-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ZMCP23017"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(zmcp23017-library INTERFACE
    arduino-compat
)
