add_library(libestacionamiento INTERFACE)

target_sources(libestacionamiento INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LibEstacionamiento/src/LibEstacionamiento.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LibEstacionamiento/src/LibEstacionamiento.h"
)

target_include_directories(libestacionamiento INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LibEstacionamiento/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(libestacionamiento INTERFACE
    arduino-compat
)
