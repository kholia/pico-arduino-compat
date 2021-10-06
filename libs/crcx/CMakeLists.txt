add_library(crcx INTERFACE)

target_sources(crcx INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CRCx/examples/cpp/continuous.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CRCx/examples/cpp/one_time.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CRCx/CRCx.h"
  "${CMAKE_CURRENT_LIST_DIR}/CRCx/libs/FastCRC/FastCRC_cpu.h"
  "${CMAKE_CURRENT_LIST_DIR}/CRCx/libs/FastCRC/FastCRCsw.h"
  "${CMAKE_CURRENT_LIST_DIR}/CRCx/libs/FastCRC/FastCRC.h"
  "${CMAKE_CURRENT_LIST_DIR}/CRCx/libs/FastCRC/FastCRChw.h"
  "${CMAKE_CURRENT_LIST_DIR}/CRCx/libs/FastCRC/FastCRC_tables.h"
  "${CMAKE_CURRENT_LIST_DIR}/CRCx/libs/CRCpp/CRC.h"
)

target_include_directories(crcx INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CRCx"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(crcx INTERFACE
    arduino-compat
)
