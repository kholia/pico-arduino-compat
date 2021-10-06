add_library(libminisys INTERFACE)

target_sources(libminisys INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LibMiniSys/src/LibMiniSys.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LibMiniSys/src/LibMiniSys.h"
)

target_include_directories(libminisys INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LibMiniSys/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(libminisys INTERFACE
    arduino-compat
)
