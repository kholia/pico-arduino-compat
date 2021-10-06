add_library(makestrocloudclient INTERFACE)

target_sources(makestrocloudclient INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MakestroCloudClient/src/MakestroCloudClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MakestroCloudClient/src/MakestroCloudClient.h"
)

target_include_directories(makestrocloudclient INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MakestroCloudClient/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(makestrocloudclient INTERFACE
    arduino-compat
)
