add_library(umulti INTERFACE)

target_sources(umulti INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/uMulti/uMulti.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uMulti/uMulti.h"
  "${CMAKE_CURRENT_LIST_DIR}/uMulti/examples/timer/uMultiConfig.h"
)

target_include_directories(umulti INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/uMulti"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(umulti INTERFACE
    arduino-compat
)
