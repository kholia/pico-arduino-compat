add_library(pac-youtubelivestreamarduino INTERFACE)

target_sources(pac-youtubelivestreamarduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/youtube-livestream-arduino/src/YouTubeLiveStream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/youtube-livestream-arduino/src/YouTubeLiveStream.h"
  "${CMAKE_CURRENT_LIST_DIR}/youtube-livestream-arduino/src/YouTubeLiveStreamCert.h"
)

target_include_directories(pac-youtubelivestreamarduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/youtube-livestream-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-youtubelivestreamarduino INTERFACE
    arduino-compat
)
