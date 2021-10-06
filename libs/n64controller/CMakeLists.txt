add_library(n64controller INTERFACE)

target_sources(n64controller INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-n64-controller-library/src/N64Controller.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-n64-controller-library/src/N64Interface.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-n64-controller-library/src/N64Interface.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-n64-controller-library/src/N64Controller.h"
)

target_include_directories(n64controller INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-n64-controller-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(n64controller INTERFACE
    arduino-compat
)
