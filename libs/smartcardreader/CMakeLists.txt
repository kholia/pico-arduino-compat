add_library(smartcardreader INTERFACE)

target_sources(smartcardreader INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Parallax-Smart-Card-Reader-Library-for-Arduino/src/IS23SC4442.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Parallax-Smart-Card-Reader-Library-for-Arduino/src/SmartCardReader.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Parallax-Smart-Card-Reader-Library-for-Arduino/src/IS24C02A.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Parallax-Smart-Card-Reader-Library-for-Arduino/src/IS24C16A.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Parallax-Smart-Card-Reader-Library-for-Arduino/src/IS23SC4442.h"
  "${CMAKE_CURRENT_LIST_DIR}/Parallax-Smart-Card-Reader-Library-for-Arduino/src/IS24C02A.h"
  "${CMAKE_CURRENT_LIST_DIR}/Parallax-Smart-Card-Reader-Library-for-Arduino/src/SmartCardReader.h"
  "${CMAKE_CURRENT_LIST_DIR}/Parallax-Smart-Card-Reader-Library-for-Arduino/src/IS24C16A.h"
)

target_include_directories(smartcardreader INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Parallax-Smart-Card-Reader-Library-for-Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(smartcardreader INTERFACE
    arduino-compat
)
