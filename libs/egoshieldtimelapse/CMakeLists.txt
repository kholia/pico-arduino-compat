add_library(egoshieldtimelapse INTERFACE)

target_sources(egoshieldtimelapse INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/egoShieldTimeLapse/src/egoShieldTimeLapse.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/egoShieldTimeLapse/src/egoShieldTimeLapse.h"
)

target_include_directories(egoshieldtimelapse INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/egoShieldTimeLapse/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(egoshieldtimelapse INTERFACE
    arduino-compat
)
