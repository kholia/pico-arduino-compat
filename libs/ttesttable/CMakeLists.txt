add_library(pac-ttesttable INTERFACE)

target_sources(pac-ttesttable INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/tTestTable/ttestTable.h"
)

target_include_directories(pac-ttesttable INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/tTestTable"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ttesttable INTERFACE
    arduino-compat
)
