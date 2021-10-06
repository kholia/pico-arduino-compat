add_library(s5851a INTERFACE)

target_sources(s5851a INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-S5851A/src/S5851A.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-S5851A/src/S5851A.h"
)

target_include_directories(s5851a INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-S5851A/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(s5851a INTERFACE
    arduino-compat
)
