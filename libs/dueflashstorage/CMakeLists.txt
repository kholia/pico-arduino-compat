add_library(pac-dueflashstorage INTERFACE)

target_sources(pac-dueflashstorage INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DueFlashStorage/src/DueFlashStorage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DueFlashStorage/src/flash_efc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DueFlashStorage/src/efc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DueFlashStorage/src/flash_efc.h"
  "${CMAKE_CURRENT_LIST_DIR}/DueFlashStorage/src/DueFlashStorage.h"
  "${CMAKE_CURRENT_LIST_DIR}/DueFlashStorage/src/efc.h"
)

target_include_directories(pac-dueflashstorage INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DueFlashStorage/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dueflashstorage INTERFACE
    arduino-compat
)
