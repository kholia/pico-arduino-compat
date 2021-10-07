add_library(pac-stringsplitter INTERFACE)

target_sources(pac-stringsplitter INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/StringSplitter/src/StringSplitter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/StringSplitter/src/StringSplitter.h"
)

target_include_directories(pac-stringsplitter INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/StringSplitter/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stringsplitter INTERFACE
    arduino-compat
)
