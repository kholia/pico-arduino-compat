add_library(printcppversion INTERFACE)

target_sources(printcppversion INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PrintCppVersion/src/PrintCppVersion.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PrintCppVersion/src/PrintCppVersion.h"
)

target_include_directories(printcppversion INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PrintCppVersion/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(printcppversion INTERFACE
    arduino-compat
)
