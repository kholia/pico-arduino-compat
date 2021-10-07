add_library(pac-flashstringtable INTERFACE)

target_sources(pac-flashstringtable INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FlashStringTable/src/FlashStringTable.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FlashStringTable/src/FlashStringTable.h"
)

target_include_directories(pac-flashstringtable INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FlashStringTable/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-flashstringtable INTERFACE
    arduino-compat
)
