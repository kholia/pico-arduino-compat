add_library(pac-scheduletable INTERFACE)

target_sources(pac-scheduletable INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ScheduleTable/src/ScheduleTable.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ScheduleTable/src/ScheduleTable.h"
)

target_include_directories(pac-scheduletable INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ScheduleTable/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-scheduletable INTERFACE
    arduino-compat
)
