add_library(egoshields INTERFACE)

target_sources(egoshields INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/egoShieldS/src/egoShieldS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/egoShieldS/src/screen.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/egoShieldS/src/screen.h"
  "${CMAKE_CURRENT_LIST_DIR}/egoShieldS/src/egoShieldS.h"
)

target_include_directories(egoshields INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/egoShieldS/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(egoshields INTERFACE
    arduino-compat
)
