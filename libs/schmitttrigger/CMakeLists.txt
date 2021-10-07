add_library(pac-schmitttrigger INTERFACE)

target_sources(pac-schmitttrigger INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-SchmittTrigger/test/test_lib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-SchmittTrigger/src/SchmittTrigger.h"
)

target_include_directories(pac-schmitttrigger INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-SchmittTrigger/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-schmitttrigger INTERFACE
    arduino-compat
)
