add_library(pac-mrm-mot2x50 INTERFACE)

target_sources(pac-mrm-mot2x50 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mrm-mot2x50/src/mrm-mot2x50.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-mot2x50/src/mrm-mot2x50.h"
)

target_include_directories(pac-mrm-mot2x50 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mrm-mot2x50/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mrm-mot2x50 INTERFACE
    arduino-compat
)
