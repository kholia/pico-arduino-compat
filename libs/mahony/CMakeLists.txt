add_library(mahony INTERFACE)

target_sources(mahony INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MahonyAHRS/src/MahonyAHRS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MahonyAHRS/src/MahonyAHRS.h"
)

target_include_directories(mahony INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MahonyAHRS/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mahony INTERFACE
    arduino-compat
)
