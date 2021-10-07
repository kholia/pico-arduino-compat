add_library(pac-fabo-205-proximity-vcnl4010 INTERFACE)

target_sources(pac-fabo-205-proximity-vcnl4010 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FaBoProximity-VCNL4010-Library/src/FaBoProximity_VCNL4010.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FaBoProximity-VCNL4010-Library/src/FaBoProximity_VCNL4010.h"
)

target_include_directories(pac-fabo-205-proximity-vcnl4010 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FaBoProximity-VCNL4010-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-fabo-205-proximity-vcnl4010 INTERFACE
    arduino-compat
)
