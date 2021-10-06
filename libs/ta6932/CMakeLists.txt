add_library(ta6932 INTERFACE)

target_sources(ta6932 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TA6932/src/TA6932.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TA6932/src/TA6932.h"
)

target_include_directories(ta6932 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TA6932/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ta6932 INTERFACE
    arduino-compat
)
