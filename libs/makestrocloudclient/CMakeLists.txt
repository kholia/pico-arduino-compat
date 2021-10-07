add_library(pac-makestrocloudclient INTERFACE)

target_sources(pac-makestrocloudclient INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MakestroCloudClient/src/MakestroCloudClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MakestroCloudClient/src/MakestroCloudClient.h"
)

target_include_directories(pac-makestrocloudclient INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MakestroCloudClient/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-makestrocloudclient INTERFACE
    arduino-compat
)
