add_library(uc1701 INTERFACE)

target_sources(uc1701 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/UC1701/src/UC1701.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UC1701/src/charset.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UC1701/src/UC1701.h"
)

target_include_directories(uc1701 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/UC1701/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(uc1701 INTERFACE
    arduino-compat
)
