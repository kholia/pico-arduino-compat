add_library(fmdataclient INTERFACE)

target_sources(fmdataclient INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FMDataClient/src/FMDataClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FMDataClient/examples/BasicExample/Basic.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FMDataClient/lib/PriUint64/PriUint64.h"
  "${CMAKE_CURRENT_LIST_DIR}/FMDataClient/src/FMDataClient.h"
)

target_include_directories(fmdataclient INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FMDataClient/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(fmdataclient INTERFACE
    arduino-compat
)
