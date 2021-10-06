add_library(emotibit-xplat-utils INTERFACE)

target_sources(emotibit-xplat-utils INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_XPlat_Utils/src/DigitalFilter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_XPlat_Utils/src/EmotiBitVariants.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_XPlat_Utils/src/EmotiBitPacket.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_XPlat_Utils/src/EmotiBitFactoryTest.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_XPlat_Utils/src/EmotiBitFactoryTest.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_XPlat_Utils/src/EmotiBitVariants.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_XPlat_Utils/src/EmotiBitComms.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_XPlat_Utils/src/DigitalFilter.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_XPlat_Utils/src/EmotiBitPacket.h"
)

target_include_directories(emotibit-xplat-utils INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_XPlat_Utils/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(emotibit-xplat-utils INTERFACE
    arduino-compat
)
