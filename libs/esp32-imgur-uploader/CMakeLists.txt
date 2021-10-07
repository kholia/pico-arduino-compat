add_library(pac-esp32-imgur-uploader INTERFACE)

target_sources(pac-esp32-imgur-uploader INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ImgurUploader/src/ImgurUploader.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ImgurUploader/src/ImgurUploader.h"
  "${CMAKE_CURRENT_LIST_DIR}/ImgurUploader/src/cert.h"
  "${CMAKE_CURRENT_LIST_DIR}/ImgurUploader/examples/Submit-From-SD-Card/assets.h"
  "${CMAKE_CURRENT_LIST_DIR}/ImgurUploader/examples/Submit-From-Bytes-Array/assets.h"
  "${CMAKE_CURRENT_LIST_DIR}/ImgurUploader/examples/M5Stack-ScreenShot-Poster/AmigaRulez.h"
  "${CMAKE_CURRENT_LIST_DIR}/ImgurUploader/examples/M5Stack-ScreenShot-Poster/assets.h"
)

target_include_directories(pac-esp32-imgur-uploader INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ImgurUploader/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp32-imgur-uploader INTERFACE
    arduino-compat
)
