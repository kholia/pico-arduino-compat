add_library(pac-grove-4-digit-display INTERFACE)

target_sources(pac-grove-4-digit-display INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Grove_4Digital_Display/TM1637.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_4Digital_Display/TM1637.h"
)

target_include_directories(pac-grove-4-digit-display INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Grove_4Digital_Display"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-grove-4-digit-display INTERFACE
    arduino-compat
)
