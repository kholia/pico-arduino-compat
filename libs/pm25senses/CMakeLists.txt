add_library(pac-pm25senses INTERFACE)

target_sources(pac-pm25senses INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/pm25senses/src/pm25senses.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pm25senses/src/pm25senses.h"
)

target_include_directories(pac-pm25senses INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/pm25senses/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pm25senses INTERFACE
    arduino-compat
)
