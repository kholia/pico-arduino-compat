add_library(pac-esp8266-google-tts INTERFACE)

target_sources(pac-esp8266-google-tts INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-google-tts/src/google-tts.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-google-tts/src/google-tts.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-google-tts/src/esp8266sdk_version.h"
)

target_include_directories(pac-esp8266-google-tts INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/esp8266-google-tts/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp8266-google-tts INTERFACE
    arduino-compat
)
