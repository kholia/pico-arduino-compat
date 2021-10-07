add_library(pac-missionlist INTERFACE)

target_sources(pac-missionlist INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MissionList/src/MissionList.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MissionList/src/MissionList.hpp"
)

target_include_directories(pac-missionlist INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MissionList/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-missionlist INTERFACE
    arduino-compat
)
