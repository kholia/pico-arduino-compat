add_library(wroobimp INTERFACE)

target_sources(wroobimp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-wroobimp/src/WroobImp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-wroobimp/src/WroobImp.h"
)

target_include_directories(wroobimp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-wroobimp/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(wroobimp INTERFACE
    arduino-compat
)
