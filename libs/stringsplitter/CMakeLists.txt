add_library(stringsplitter INTERFACE)

target_sources(stringsplitter INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/StringSplitter/src/StringSplitter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/StringSplitter/src/StringSplitter.h"
)

target_include_directories(stringsplitter INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/StringSplitter/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(stringsplitter INTERFACE
    arduino-compat
)
