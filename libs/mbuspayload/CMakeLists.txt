add_library(mbuspayload INTERFACE)

target_sources(mbuspayload INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mbus-payload/test/aunit/test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mbus-payload/src/MBUSPayload.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mbus-payload/src/MBUSPayload.h"
)

target_include_directories(mbuspayload INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mbus-payload/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mbuspayload INTERFACE
    arduino-compat
)
