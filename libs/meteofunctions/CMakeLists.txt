add_library(pac-meteofunctions INTERFACE)

target_sources(pac-meteofunctions INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MeteoFunctions/MeteoFunctions.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MeteoFunctions/MeteoFunctions.h"
)

target_include_directories(pac-meteofunctions INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MeteoFunctions"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-meteofunctions INTERFACE
    arduino-compat
)
