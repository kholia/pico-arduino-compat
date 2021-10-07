add_library(pac-egoshieldtimelapse INTERFACE)

target_sources(pac-egoshieldtimelapse INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/egoShieldTimeLapse/src/egoShieldTimeLapse.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/egoShieldTimeLapse/src/egoShieldTimeLapse.h"
)

target_include_directories(pac-egoshieldtimelapse INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/egoShieldTimeLapse/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-egoshieldtimelapse INTERFACE
    arduino-compat
)
