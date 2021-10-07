add_library(pac-vs1053-for-use-with-sdfat INTERFACE)

target_sources(pac-vs1053-for-use-with-sdfat INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_Library-vs1053_for_SdFat/src/vs1053_SdFat.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_Library-vs1053_for_SdFat/src/vs1053_SdFat.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_Library-vs1053_for_SdFat/src/vs1053_SdFat_mainpage.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_Library-vs1053_for_SdFat/src/vs1053_SdFat_config.h"
)

target_include_directories(pac-vs1053-for-use-with-sdfat INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_Library-vs1053_for_SdFat/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-vs1053-for-use-with-sdfat INTERFACE
    arduino-compat
)
