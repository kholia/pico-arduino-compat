add_library(mpower INTERFACE)

target_sources(mpower INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mPower/mPower.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mPower/mPower.h"
)

target_include_directories(mpower INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mPower"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mpower INTERFACE
    arduino-compat
)
