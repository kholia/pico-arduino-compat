add_library(pac-app-fernando-k INTERFACE)

target_sources(pac-app-fernando-k INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AppFernandok/AppFernandoK.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AppFernandok/AppFernandoK.h"
)

target_include_directories(pac-app-fernando-k INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AppFernandok"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-app-fernando-k INTERFACE
    arduino-compat
)
