add_library(etherkit-jtencode INTERFACE)

target_sources(etherkit-jtencode INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/JTEncode/src/encode_rs_int.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/JTEncode/src/init_rs_int.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/JTEncode/src/JTEncode.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/JTEncode/src/nhash.c"
  "${CMAKE_CURRENT_LIST_DIR}/JTEncode/src/crc14.c"
  "${CMAKE_CURRENT_LIST_DIR}/JTEncode/src/crc14.h"
  "${CMAKE_CURRENT_LIST_DIR}/JTEncode/src/generator.h"
  "${CMAKE_CURRENT_LIST_DIR}/JTEncode/src/JTEncode.h"
  "${CMAKE_CURRENT_LIST_DIR}/JTEncode/src/nhash.h"
  "${CMAKE_CURRENT_LIST_DIR}/JTEncode/src/encode_rs.h"
  "${CMAKE_CURRENT_LIST_DIR}/JTEncode/src/rs_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/JTEncode/src/int.h"
  "${CMAKE_CURRENT_LIST_DIR}/JTEncode/src/init_rs.h"
)

target_include_directories(etherkit-jtencode INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/JTEncode/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(etherkit-jtencode INTERFACE
    arduino-compat
)
