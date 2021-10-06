add_library(vcnl4010 INTERFACE)

target_sources(vcnl4010 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/VCNL4010/src/VCNL4010.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VCNL4010/src/VCNL4010.h"
)

target_include_directories(vcnl4010 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/VCNL4010/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(vcnl4010 INTERFACE
    arduino-compat
)
