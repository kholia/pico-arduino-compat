add_library(flashstorage_rtl8720 INTERFACE)

target_sources(flashstorage_rtl8720 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FlashStorage_RTL8720/src/FlashStorage_RTL8720.h"
)

target_include_directories(flashstorage_rtl8720 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FlashStorage_RTL8720/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(flashstorage_rtl8720 INTERFACE
    arduino-compat
)
