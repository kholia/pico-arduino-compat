add_library(pac-parse-arduino-sdk INTERFACE)

target_sources(pac-parse-arduino-sdk INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Parse-SDK-Arduino/src/internal/ParseObjectGet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Parse-SDK-Arduino/src/internal/ParseRequest.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Parse-SDK-Arduino/src/internal/ParseCloudFunction.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Parse-SDK-Arduino/src/internal/ParseObjectDelete.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Parse-SDK-Arduino/src/internal/ParseTrackEvent.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Parse-SDK-Arduino/src/internal/ParseObjectUpdate.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Parse-SDK-Arduino/src/internal/ParseQuery.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Parse-SDK-Arduino/src/internal/ParseObjectCreate.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Parse-SDK-Arduino/src/internal/yun/ParsePush.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Parse-SDK-Arduino/src/internal/yun/ParsePlatformSupport.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Parse-SDK-Arduino/src/internal/yun/ParseClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Parse-SDK-Arduino/src/internal/yun/ParseResponse.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Parse-SDK-Arduino/src/internal/esp8266/ParsePush.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Parse-SDK-Arduino/src/internal/esp8266/ParseClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Parse-SDK-Arduino/src/internal/esp8266/ParseResponse.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Parse-SDK-Arduino/src/internal/zero/ParsePush.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Parse-SDK-Arduino/src/internal/zero/ParseClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Parse-SDK-Arduino/src/internal/zero/ParseResponse.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Parse-SDK-Arduino/src/external/FlashStorage/FlashStorage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Parse-SDK-Arduino/src/Parse.h"
  "${CMAKE_CURRENT_LIST_DIR}/Parse-SDK-Arduino/src/internal/ParseUtils.h"
  "${CMAKE_CURRENT_LIST_DIR}/Parse-SDK-Arduino/src/internal/ParseResponse.h"
  "${CMAKE_CURRENT_LIST_DIR}/Parse-SDK-Arduino/src/internal/ParsePush.h"
  "${CMAKE_CURRENT_LIST_DIR}/Parse-SDK-Arduino/src/internal/ParseCloudFunction.h"
  "${CMAKE_CURRENT_LIST_DIR}/Parse-SDK-Arduino/src/internal/ParseQuery.h"
  "${CMAKE_CURRENT_LIST_DIR}/Parse-SDK-Arduino/src/internal/ConnectionClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/Parse-SDK-Arduino/src/internal/ParseObjectUpdate.h"
  "${CMAKE_CURRENT_LIST_DIR}/Parse-SDK-Arduino/src/internal/ParseObjectDelete.h"
  "${CMAKE_CURRENT_LIST_DIR}/Parse-SDK-Arduino/src/internal/ParseInternal.h"
  "${CMAKE_CURRENT_LIST_DIR}/Parse-SDK-Arduino/src/internal/ParseObjectGet.h"
  "${CMAKE_CURRENT_LIST_DIR}/Parse-SDK-Arduino/src/internal/ParseObjectCreate.h"
  "${CMAKE_CURRENT_LIST_DIR}/Parse-SDK-Arduino/src/internal/ParseClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/Parse-SDK-Arduino/src/internal/ParsePlatformSupport.h"
  "${CMAKE_CURRENT_LIST_DIR}/Parse-SDK-Arduino/src/internal/ParseRequest.h"
  "${CMAKE_CURRENT_LIST_DIR}/Parse-SDK-Arduino/src/internal/ParseTrackEvent.h"
  "${CMAKE_CURRENT_LIST_DIR}/Parse-SDK-Arduino/src/external/FlashStorage/FlashStorage.h"
)

target_include_directories(pac-parse-arduino-sdk INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Parse-SDK-Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-parse-arduino-sdk INTERFACE
    arduino-compat
)
