add_library(pac-ospom INTERFACE)

target_sources(pac-ospom INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/OSPOM/src/Ospom.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OSPOM/src/Ospom.h"
)

target_include_directories(pac-ospom INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/OSPOM/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ospom INTERFACE
    arduino-compat
)
