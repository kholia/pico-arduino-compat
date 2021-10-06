add_library(app-fernando-k INTERFACE)

target_sources(app-fernando-k INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AppFernandok/AppFernandoK.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AppFernandok/AppFernandoK.h"
)

target_include_directories(app-fernando-k INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AppFernandok"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(app-fernando-k INTERFACE
    arduino-compat
)
