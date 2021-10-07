add_library(pac-mpower INTERFACE)

target_sources(pac-mpower INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mPower/mPower.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mPower/mPower.h"
)

target_include_directories(pac-mpower INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mPower"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mpower INTERFACE
    arduino-compat
)
