add_library(pm25senses INTERFACE)

target_sources(pm25senses INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/pm25senses/src/pm25senses.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pm25senses/src/pm25senses.h"
)

target_include_directories(pm25senses INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/pm25senses/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pm25senses INTERFACE
    arduino-compat
)
