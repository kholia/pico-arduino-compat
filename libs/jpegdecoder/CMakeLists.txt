add_library(jpegdecoder INTERFACE)

target_sources(jpegdecoder INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/JPEGDecoder/src/JPEGDecoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/JPEGDecoder/src/picojpeg.c"
  "${CMAKE_CURRENT_LIST_DIR}/JPEGDecoder/src/picojpeg.h"
  "${CMAKE_CURRENT_LIST_DIR}/JPEGDecoder/src/User_Config.h"
  "${CMAKE_CURRENT_LIST_DIR}/JPEGDecoder/src/JPEGDecoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/JPEGDecoder/examples/Other libraries/Mega and Due/TFT_flash_jpg/jpeg3.h"
  "${CMAKE_CURRENT_LIST_DIR}/JPEGDecoder/examples/Other libraries/Mega and Due/TFT_flash_jpg/jpeg1.h"
  "${CMAKE_CURRENT_LIST_DIR}/JPEGDecoder/examples/Other libraries/Mega and Due/TFT_flash_jpg/jpeg2.h"
  "${CMAKE_CURRENT_LIST_DIR}/JPEGDecoder/examples/Other libraries/Mega and Due/TFT_flash_jpg/jpeg4.h"
  "${CMAKE_CURRENT_LIST_DIR}/JPEGDecoder/examples/UTFT/UTFT_Flash_Jpeg/jpeg1.h"
  "${CMAKE_CURRENT_LIST_DIR}/JPEGDecoder/examples/MCUFRIEND_kbv/jpeg_kbv/jpeg1.h"
)

target_include_directories(jpegdecoder INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/JPEGDecoder/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-sd)
    add_subdirectory(../../official-libs/sd build_official-sd)
endif()

target_link_libraries(jpegdecoder INTERFACE
    arduino-compat
    official-sd
)
