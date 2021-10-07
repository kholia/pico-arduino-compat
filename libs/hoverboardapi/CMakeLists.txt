add_library(pac-hoverboardapi INTERFACE)

target_sources(pac-hoverboardapi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/bipropellant-hoverboard-api/src/HoverboardAPI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/bipropellant-hoverboard-api/src/protocolFunctions.c"
  "${CMAKE_CURRENT_LIST_DIR}/bipropellant-hoverboard-api/src/HoverboardAPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/bipropellant-hoverboard-api/src/protocolFunctions.h"
)

target_include_directories(pac-hoverboardapi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/bipropellant-hoverboard-api/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-hoverboardapi INTERFACE
    arduino-compat
)
