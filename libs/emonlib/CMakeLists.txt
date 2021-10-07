add_library(pac-emonlib INTERFACE)

target_sources(pac-emonlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EmonLib/EmonLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EmonLib/EmonLib.h"
)

target_include_directories(pac-emonlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EmonLib"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-emonlib INTERFACE
    arduino-compat
)
