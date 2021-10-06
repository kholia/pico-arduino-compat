add_library(emonlib INTERFACE)

target_sources(emonlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EmonLib/EmonLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EmonLib/EmonLib.h"
)

target_include_directories(emonlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EmonLib"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(emonlib INTERFACE
    arduino-compat
)
