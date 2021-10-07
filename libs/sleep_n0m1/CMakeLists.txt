add_library(pac-sleep_n0m1 INTERFACE)

target_sources(pac-sleep_n0m1 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Sleep_n0m1/Sleep_n0m1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Sleep_n0m1/Sleep_n0m1.h"
)

target_include_directories(pac-sleep_n0m1 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Sleep_n0m1"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sleep_n0m1 INTERFACE
    arduino-compat
)
