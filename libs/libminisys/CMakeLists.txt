add_library(pac-libminisys INTERFACE)

target_sources(pac-libminisys INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LibMiniSys/src/LibMiniSys.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LibMiniSys/src/LibMiniSys.h"
)

target_include_directories(pac-libminisys INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LibMiniSys/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-libminisys INTERFACE
    arduino-compat
)
