add_library(rbase64 INTERFACE)

target_sources(rbase64 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/rBASE64/src/rBase64.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/rBASE64/src/rBase64.h"
)

target_include_directories(rbase64 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/rBASE64/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rbase64 INTERFACE
    arduino-compat
)
