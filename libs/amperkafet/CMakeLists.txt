add_library(amperkafet INTERFACE)

target_sources(amperkafet INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AmperkaFET/src/AmperkaFET.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AmperkaFET/src/AmperkaFET.h"
)

target_include_directories(amperkafet INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AmperkaFET/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(amperkafet INTERFACE
    arduino-compat
)
