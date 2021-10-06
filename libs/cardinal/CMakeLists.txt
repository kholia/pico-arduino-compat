add_library(cardinal INTERFACE)

target_sources(cardinal INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-cardinal/Cardinal.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-cardinal/Cardinal.h"
)

target_include_directories(cardinal INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-cardinal"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(cardinal INTERFACE
    arduino-compat
)
