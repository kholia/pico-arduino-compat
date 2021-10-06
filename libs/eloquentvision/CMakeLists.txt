add_library(eloquentvision INTERFACE)

target_sources(eloquentvision INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EloquentVision/src/EloquentVision.h"
  "${CMAKE_CURRENT_LIST_DIR}/EloquentVision/src/ESP32CameraHTTPVideoStreamingServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/EloquentVision/src/io/JpegWriter.h"
  "${CMAKE_CURRENT_LIST_DIR}/EloquentVision/src/io/BitmapWriter.h"
  "${CMAKE_CURRENT_LIST_DIR}/EloquentVision/src/camera/pins.h"
  "${CMAKE_CURRENT_LIST_DIR}/EloquentVision/src/camera/ESP32Camera.h"
  "${CMAKE_CURRENT_LIST_DIR}/EloquentVision/src/ImageProcessing/RGB565Decoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/EloquentVision/src/ImageProcessing/YUV422Decoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/EloquentVision/src/ImageProcessing/MotionDetection.h"
  "${CMAKE_CURRENT_LIST_DIR}/EloquentVision/src/ImageProcessing/Downscale.h"
  "${CMAKE_CURRENT_LIST_DIR}/EloquentVision/src/ImageProcessing/DownscaleStrategies/Diagonal.h"
  "${CMAKE_CURRENT_LIST_DIR}/EloquentVision/src/ImageProcessing/DownscaleStrategies/Strategy.h"
  "${CMAKE_CURRENT_LIST_DIR}/EloquentVision/src/ImageProcessing/DownscaleStrategies/Core.h"
  "${CMAKE_CURRENT_LIST_DIR}/EloquentVision/src/ImageProcessing/DownscaleStrategies/Center.h"
  "${CMAKE_CURRENT_LIST_DIR}/EloquentVision/src/ImageProcessing/DownscaleStrategies/Cross.h"
)

target_include_directories(eloquentvision INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EloquentVision/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(eloquentvision INTERFACE
    arduino-compat
)
