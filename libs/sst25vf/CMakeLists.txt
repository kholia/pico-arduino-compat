add_library(pac-sst25vf INTERFACE)

target_sources(pac-sst25vf INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SST25VF/SST25VF.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SST25VF/SST25VF.h"
)

target_include_directories(pac-sst25vf INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SST25VF"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sst25vf INTERFACE
    arduino-compat
)
