add_library(pac-slipstream INTERFACE)

target_sources(pac-slipstream INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SLIPStream/src/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SLIPStream/src/SLIPStream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SLIPStream/src/SLIPStream.h"
)

target_include_directories(pac-slipstream INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SLIPStream/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-slipstream INTERFACE
    arduino-compat
)
