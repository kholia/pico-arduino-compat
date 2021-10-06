add_library(gt811-library INTERFACE)

target_sources(gt811-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GT811/GT811.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GT811/GT811.h"
)

target_include_directories(gt811-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GT811"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(gt811-library INTERFACE
    arduino-compat
)
