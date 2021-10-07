add_library(pac-mbuspayload INTERFACE)

target_sources(pac-mbuspayload INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mbus-payload/test/aunit/test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mbus-payload/src/MBUSPayload.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mbus-payload/src/MBUSPayload.h"
)

target_include_directories(pac-mbuspayload INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mbus-payload/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mbuspayload INTERFACE
    arduino-compat
)
