add_library(pac-ts8000-library INTERFACE)

target_sources(pac-ts8000-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TS8000/ts8000.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TS8000/ts8000.h"
)

target_include_directories(pac-ts8000-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TS8000"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ts8000-library INTERFACE
    arduino-compat
)
