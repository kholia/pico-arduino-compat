add_library(easymorse INTERFACE)

target_sources(easymorse INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EasyMorse/src/EasyMorse.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EasyMorse/src/EasyMorse.h"
)

target_include_directories(easymorse INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EasyMorse/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(easymorse INTERFACE
    arduino-compat
)
