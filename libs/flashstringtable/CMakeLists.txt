add_library(flashstringtable INTERFACE)

target_sources(flashstringtable INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FlashStringTable/src/FlashStringTable.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FlashStringTable/src/FlashStringTable.h"
)

target_include_directories(flashstringtable INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FlashStringTable/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(flashstringtable INTERFACE
    arduino-compat
)
