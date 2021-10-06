add_library(ospom INTERFACE)

target_sources(ospom INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/OSPOM/src/Ospom.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OSPOM/src/Ospom.h"
)

target_include_directories(ospom INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/OSPOM/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ospom INTERFACE
    arduino-compat
)
