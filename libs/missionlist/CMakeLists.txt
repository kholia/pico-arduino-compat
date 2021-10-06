add_library(missionlist INTERFACE)

target_sources(missionlist INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MissionList/src/MissionList.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MissionList/src/MissionList.hpp"
)

target_include_directories(missionlist INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MissionList/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(missionlist INTERFACE
    arduino-compat
)
