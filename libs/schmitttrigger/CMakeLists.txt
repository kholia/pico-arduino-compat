add_library(schmitttrigger INTERFACE)

target_sources(schmitttrigger INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-SchmittTrigger/test/test_lib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-SchmittTrigger/src/SchmittTrigger.h"
)

target_include_directories(schmitttrigger INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-SchmittTrigger/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(schmitttrigger INTERFACE
    arduino-compat
)
