add_library(liteoscparser INTERFACE)

target_sources(liteoscparser INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LiteOSCParser/src/LiteOSCParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LiteOSCParser/src/OSCBundle.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LiteOSCParser/src_tests/tests.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LiteOSCParser/src/LiteOSCParser.h"
)

target_include_directories(liteoscparser INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LiteOSCParser/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(liteoscparser INTERFACE
    arduino-compat
)
