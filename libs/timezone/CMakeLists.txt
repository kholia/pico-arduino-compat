add_library(pac-timezone INTERFACE)

target_sources(pac-timezone INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Timezone/src/Timezone.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Timezone/src/Timezone.h"
)

target_include_directories(pac-timezone INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Timezone/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-timezone INTERFACE
    arduino-compat
)
