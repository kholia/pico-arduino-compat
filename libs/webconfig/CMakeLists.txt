add_library(pac-webconfig INTERFACE)

target_sources(pac-webconfig INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WebConfig/src/WebConfig.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WebConfig/src/WebConfig.h"
)

target_include_directories(pac-webconfig INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WebConfig/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-webconfig INTERFACE
    arduino-compat
)
