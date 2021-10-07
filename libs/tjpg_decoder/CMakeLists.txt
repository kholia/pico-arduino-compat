add_library(pac-tjpg_decoder INTERFACE)

target_sources(pac-tjpg_decoder INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TJpg_Decoder/src/TJpg_Decoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TJpg_Decoder/src/tjpgd.c"
  "${CMAKE_CURRENT_LIST_DIR}/TJpg_Decoder/src/TJpg_Decoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/TJpg_Decoder/src/tjpgd.h"
  "${CMAKE_CURRENT_LIST_DIR}/TJpg_Decoder/src/User_Config.h"
  "${CMAKE_CURRENT_LIST_DIR}/TJpg_Decoder/examples/Flash_Jpg/panda.h"
  "${CMAKE_CURRENT_LIST_DIR}/TJpg_Decoder/examples/Web_Jpg/List_SPIFFS.h"
  "${CMAKE_CURRENT_LIST_DIR}/TJpg_Decoder/examples/Web_Jpg/Web_Fetch.h"
  "${CMAKE_CURRENT_LIST_DIR}/TJpg_Decoder/examples/Flash_Jpg_GFX/panda.h"
  "${CMAKE_CURRENT_LIST_DIR}/TJpg_Decoder/examples/ESP32_Dual_Core_Flash_Jpg/panda.h"
)

target_include_directories(pac-tjpg_decoder INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TJpg_Decoder/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-sd)
    add_subdirectory(../../libs/sd build_pac-sd)
endif()

target_link_libraries(pac-tjpg_decoder INTERFACE
    arduino-compat
    pac-sd
)
