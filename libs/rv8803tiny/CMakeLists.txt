add_library(rv8803tiny INTERFACE)

target_sources(rv8803tiny INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RV8803Tiny/src/RV8803Tiny.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RV8803Tiny/src/RV8803Tiny.h"
)

target_include_directories(rv8803tiny INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RV8803Tiny/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rv8803tiny INTERFACE
    arduino-compat
)
