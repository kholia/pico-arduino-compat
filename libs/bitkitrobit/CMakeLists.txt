add_library(pac-bitkitrobit INTERFACE)

target_sources(pac-bitkitrobit INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BitkitRobit/src/Encoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BitkitRobit/src/BitkitRobit.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BitkitRobit/src/Encoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/BitkitRobit/src/BitkitRobit.h"
)

target_include_directories(pac-bitkitrobit INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BitkitRobit/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-bitkitrobit INTERFACE
    arduino-compat
)
