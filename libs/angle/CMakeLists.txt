add_library(angle INTERFACE)

target_sources(angle INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Angle/Angle.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Angle/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Angle/Angle.h"
)

target_include_directories(angle INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Angle"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(angle INTERFACE
    arduino-compat
)
