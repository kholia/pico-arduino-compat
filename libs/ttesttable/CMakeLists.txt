add_library(ttesttable INTERFACE)

target_sources(ttesttable INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/tTestTable/ttestTable.h"
)

target_include_directories(ttesttable INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/tTestTable"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ttesttable INTERFACE
    arduino-compat
)
