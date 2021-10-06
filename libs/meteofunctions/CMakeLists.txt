add_library(meteofunctions INTERFACE)

target_sources(meteofunctions INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MeteoFunctions/MeteoFunctions.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MeteoFunctions/MeteoFunctions.h"
)

target_include_directories(meteofunctions INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MeteoFunctions"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(meteofunctions INTERFACE
    arduino-compat
)
