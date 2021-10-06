add_library(aprs-decoder-lib INTERFACE)

target_sources(aprs-decoder-lib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/APRS-Decoder-Lib/test/test_basic_msg/test_basic_msg.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/APRS-Decoder-Lib/test/test_compressed_msg/test_compressed_msg.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/APRS-Decoder-Lib/test/test_content/test_content.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/APRS-Decoder-Lib/src/APRSMessage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/APRS-Decoder-Lib/src/APRSPosition.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/APRS-Decoder-Lib/src/APRS-Decoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/APRS-Decoder-Lib/src/APRSPosition.h"
  "${CMAKE_CURRENT_LIST_DIR}/APRS-Decoder-Lib/src/APRSMessageType.h"
  "${CMAKE_CURRENT_LIST_DIR}/APRS-Decoder-Lib/src/APRSMessage.h"
)

target_include_directories(aprs-decoder-lib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/APRS-Decoder-Lib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(aprs-decoder-lib INTERFACE
    arduino-compat
)
