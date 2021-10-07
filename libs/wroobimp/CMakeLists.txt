add_library(pac-wroobimp INTERFACE)

target_sources(pac-wroobimp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-wroobimp/src/WroobImp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-wroobimp/src/WroobImp.h"
)

target_include_directories(pac-wroobimp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-wroobimp/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-wroobimp INTERFACE
    arduino-compat
)
