add_library(pac-um3750-library INTERFACE)

target_sources(pac-um3750-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/UM3750/src/UM3750.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UM3750/src/UM3750.h"
)

target_include_directories(pac-um3750-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/UM3750/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-um3750-library INTERFACE
    arduino-compat
)
