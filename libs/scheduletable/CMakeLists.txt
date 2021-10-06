add_library(scheduletable INTERFACE)

target_sources(scheduletable INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ScheduleTable/src/ScheduleTable.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ScheduleTable/src/ScheduleTable.h"
)

target_include_directories(scheduletable INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ScheduleTable/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(scheduletable INTERFACE
    arduino-compat
)
