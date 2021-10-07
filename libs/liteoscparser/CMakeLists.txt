add_library(pac-liteoscparser INTERFACE)

target_sources(pac-liteoscparser INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LiteOSCParser/src/LiteOSCParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LiteOSCParser/src/OSCBundle.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LiteOSCParser/src_tests/tests.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LiteOSCParser/src/LiteOSCParser.h"
)

target_include_directories(pac-liteoscparser INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LiteOSCParser/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-liteoscparser INTERFACE
    arduino-compat
)
