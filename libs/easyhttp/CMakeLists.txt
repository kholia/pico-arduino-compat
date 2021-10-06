add_library(easyhttp INTERFACE)

target_sources(easyhttp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EasyHTTP/EasyHTTP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EasyHTTP/EasyHTTP.h"
)

target_include_directories(easyhttp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EasyHTTP"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(easyhttp INTERFACE
    arduino-compat
)
