add_library(adafruit-fona-library INTERFACE)

target_sources(adafruit-fona-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_FONA/Adafruit_FONA.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_FONA/Adafruit_FONA.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_FONA/includes/FONAConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_FONA/includes/FONAExtIncludes.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_FONA/includes/platform/FONAPlatform.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_FONA/includes/platform/FONAPlatStd.h"
)

target_include_directories(adafruit-fona-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_FONA"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adafruit-fona-library INTERFACE
    arduino-compat
)
