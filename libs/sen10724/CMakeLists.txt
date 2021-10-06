add_library(sen10724 INTERFACE)

target_sources(sen10724 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SEN10724/src/SEN10724.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SEN10724/src/SEN10724.h"
)

target_include_directories(sen10724 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SEN10724/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sen10724 INTERFACE
    arduino-compat
)
