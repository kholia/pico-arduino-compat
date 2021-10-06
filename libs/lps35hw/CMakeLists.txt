add_library(lps35hw INTERFACE)

target_sources(lps35hw INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LPS35HW/LPS35HW.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LPS35HW/LPS35HW.h"
)

target_include_directories(lps35hw INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LPS35HW"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(lps35hw INTERFACE
    arduino-compat
)
