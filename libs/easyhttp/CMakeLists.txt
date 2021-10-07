add_library(pac-easyhttp INTERFACE)

target_sources(pac-easyhttp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EasyHTTP/EasyHTTP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EasyHTTP/EasyHTTP.h"
)

target_include_directories(pac-easyhttp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EasyHTTP"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-easyhttp INTERFACE
    arduino-compat
)
