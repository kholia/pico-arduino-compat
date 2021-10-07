add_library(pac-mrm-us1 INTERFACE)

target_sources(pac-mrm-us1 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mrm-us1/src/mrm-us1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-us1/src/mrm-us1.h"
)

target_include_directories(pac-mrm-us1 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mrm-us1/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mrm-us1 INTERFACE
    arduino-compat
)
