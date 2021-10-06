add_library(bitkitrobit INTERFACE)

target_sources(bitkitrobit INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BitkitRobit/src/Encoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BitkitRobit/src/BitkitRobit.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BitkitRobit/src/Encoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/BitkitRobit/src/BitkitRobit.h"
)

target_include_directories(bitkitrobit INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BitkitRobit/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(bitkitrobit INTERFACE
    arduino-compat
)
