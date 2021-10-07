add_library(pac-multiplepinops INTERFACE)

target_sources(pac-multiplepinops INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-multiplePinsAPIs/src/multiplePinOps.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-multiplePinsAPIs/src/multiplePinOps.h"
)

target_include_directories(pac-multiplepinops INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-multiplePinsAPIs/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-multiplepinops INTERFACE
    arduino-compat
)
