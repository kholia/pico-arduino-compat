add_library(pac-aeslib INTERFACE)

target_sources(pac-aeslib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/thinx-aes-lib/test/020-TestCase.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/thinx-aes-lib/src/AES.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/thinx-aes-lib/src/AESLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/thinx-aes-lib/src/xbase64.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/thinx-aes-lib/examples/platformio/medium/lib/AESLib/src/AES.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/thinx-aes-lib/examples/platformio/medium/lib/AESLib/src/AESLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/thinx-aes-lib/examples/platformio/medium/lib/AESLib/src/xbase64.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/thinx-aes-lib/examples/platformio/aes-test-2/lib/AESLib/src/AES.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/thinx-aes-lib/examples/platformio/aes-test-2/lib/AESLib/src/AESLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/thinx-aes-lib/examples/platformio/aes-test-2/lib/AESLib/src/xbase64.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/thinx-aes-lib/examples/platformio/aes-test-2/src/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/thinx-aes-lib/examples/platformio/aes-test/lib/AESLib/src/AES.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/thinx-aes-lib/examples/platformio/aes-test/lib/AESLib/src/AESLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/thinx-aes-lib/examples/platformio/aes-test/lib/AESLib/src/xbase64.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/thinx-aes-lib/examples/platformio/aes-test/src/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/thinx-aes-lib/test/catch2.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/thinx-aes-lib/test/test_ncrypt.c"
  "${CMAKE_CURRENT_LIST_DIR}/thinx-aes-lib/src/xbase64.h"
  "${CMAKE_CURRENT_LIST_DIR}/thinx-aes-lib/src/AES_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/thinx-aes-lib/src/AESLib.h"
  "${CMAKE_CURRENT_LIST_DIR}/thinx-aes-lib/src/AES.h"
  "${CMAKE_CURRENT_LIST_DIR}/thinx-aes-lib/examples/platformio/medium/lib/AESLib/src/xbase64.h"
  "${CMAKE_CURRENT_LIST_DIR}/thinx-aes-lib/examples/platformio/medium/lib/AESLib/src/AES_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/thinx-aes-lib/examples/platformio/medium/lib/AESLib/src/AESLib.h"
  "${CMAKE_CURRENT_LIST_DIR}/thinx-aes-lib/examples/platformio/medium/lib/AESLib/src/AES.h"
  "${CMAKE_CURRENT_LIST_DIR}/thinx-aes-lib/examples/platformio/aes-test-2/lib/AESLib/src/xbase64.h"
  "${CMAKE_CURRENT_LIST_DIR}/thinx-aes-lib/examples/platformio/aes-test-2/lib/AESLib/src/AES_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/thinx-aes-lib/examples/platformio/aes-test-2/lib/AESLib/src/AESLib.h"
  "${CMAKE_CURRENT_LIST_DIR}/thinx-aes-lib/examples/platformio/aes-test-2/lib/AESLib/src/AES.h"
  "${CMAKE_CURRENT_LIST_DIR}/thinx-aes-lib/examples/platformio/aes-test/lib/AESLib/src/xbase64.h"
  "${CMAKE_CURRENT_LIST_DIR}/thinx-aes-lib/examples/platformio/aes-test/lib/AESLib/src/AES_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/thinx-aes-lib/examples/platformio/aes-test/lib/AESLib/src/AESLib.h"
  "${CMAKE_CURRENT_LIST_DIR}/thinx-aes-lib/examples/platformio/aes-test/lib/AESLib/src/AES.h"
)

target_include_directories(pac-aeslib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/thinx-aes-lib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-aeslib INTERFACE
    arduino-compat
)
