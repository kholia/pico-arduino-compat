add_library(pac-freenove-vk16k33-lib INTERFACE)

target_sources(pac-freenove-vk16k33-lib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Freenove_VK16K33_Lib/src/Freenove_VK16K33_Lib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Freenove_VK16K33_Lib/examples/03.showEmotion/Emotion.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Freenove_VK16K33_Lib/src/Freenove_VK16K33_Lib.h"
  "${CMAKE_CURRENT_LIST_DIR}/Freenove_VK16K33_Lib/examples/03.showEmotion/Emotion.h"
)

target_include_directories(pac-freenove-vk16k33-lib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Freenove_VK16K33_Lib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-freenove-vk16k33-lib INTERFACE
    arduino-compat
)
