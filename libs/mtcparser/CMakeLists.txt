add_library(mtcparser INTERFACE)

target_sources(mtcparser INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MTCParser/MTCParser.h"
)

target_include_directories(mtcparser INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MTCParser"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mtcparser INTERFACE
    arduino-compat
)
