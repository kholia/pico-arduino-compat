add_library(esp8266-google-tts INTERFACE)

target_sources(esp8266-google-tts INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-google-tts/src/google-tts.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-google-tts/src/google-tts.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp8266-google-tts/src/esp8266sdk_version.h"
)

target_include_directories(esp8266-google-tts INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/esp8266-google-tts/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(esp8266-google-tts INTERFACE
    arduino-compat
)
