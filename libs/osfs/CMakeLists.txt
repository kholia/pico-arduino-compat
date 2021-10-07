add_library(pac-osfs INTERFACE)

target_sources(pac-osfs INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/OSFS/test/test_write.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OSFS/src/OSFS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OSFS/test/RAM_storage.h"
  "${CMAKE_CURRENT_LIST_DIR}/OSFS/src/OSFS.h"
)

target_include_directories(pac-osfs INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/OSFS/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-osfs INTERFACE
    arduino-compat
)
