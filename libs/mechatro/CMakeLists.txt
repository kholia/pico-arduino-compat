add_library(mechatro INTERFACE)

target_sources(mechatro INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Mechatro/src/Mechatro.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Mechatro/src/Mechatro.h"
)

target_include_directories(mechatro INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Mechatro/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mechatro INTERFACE
    arduino-compat
)
