add_library(rmcs-220x INTERFACE)

target_sources(rmcs-220x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RMCS-220X-Control/src/RMCS-220X.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RMCS-220X-Control/src/RMCS-220X.h"
)

target_include_directories(rmcs-220x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RMCS-220X-Control/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rmcs-220x INTERFACE
    arduino-compat
)
