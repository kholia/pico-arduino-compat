add_library(sparkfun-simultaneous-rfid-tag-reader-library INTERFACE)

target_sources(sparkfun-simultaneous-rfid-tag-reader-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Simultaneous_RFID_Tag_Reader_Library/src/SparkFun_UHF_RFID_Reader.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Simultaneous_RFID_Tag_Reader_Library/src/SparkFun_UHF_RFID_Reader.h"
)

target_include_directories(sparkfun-simultaneous-rfid-tag-reader-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Simultaneous_RFID_Tag_Reader_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-simultaneous-rfid-tag-reader-library INTERFACE
    arduino-compat
)
