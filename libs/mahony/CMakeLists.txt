add_library(pac-mahony INTERFACE)

target_sources(pac-mahony INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MahonyAHRS/src/MahonyAHRS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MahonyAHRS/src/MahonyAHRS.h"
)

target_include_directories(pac-mahony INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MahonyAHRS/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mahony INTERFACE
    arduino-compat
)
