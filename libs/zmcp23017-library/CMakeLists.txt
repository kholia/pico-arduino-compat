add_library(pac-zmcp23017-library INTERFACE)

target_sources(pac-zmcp23017-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ZMCP23017/ZMCP23017.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ZMCP23017/ZMCP23017.h"
)

target_include_directories(pac-zmcp23017-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ZMCP23017"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-zmcp23017-library INTERFACE
    arduino-compat
)
