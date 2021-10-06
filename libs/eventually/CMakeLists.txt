add_library(eventually INTERFACE)

target_sources(eventually INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Eventually/src/Eventually.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Eventually/src/Eventually.h"
)

target_include_directories(eventually INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Eventually/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(eventually INTERFACE
    arduino-compat
)
