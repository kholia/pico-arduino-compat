add_library(mrm-mot2x50 INTERFACE)

target_sources(mrm-mot2x50 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mrm-mot2x50/src/mrm-mot2x50.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-mot2x50/src/mrm-mot2x50.h"
)

target_include_directories(mrm-mot2x50 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mrm-mot2x50/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mrm-mot2x50 INTERFACE
    arduino-compat
)
