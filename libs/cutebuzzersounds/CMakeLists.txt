add_library(cutebuzzersounds INTERFACE)

target_sources(cutebuzzersounds INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CuteBuzzerSounds/src/CuteBuzzerSounds.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CuteBuzzerSounds/src/CuteBuzzerSounds.h"
  "${CMAKE_CURRENT_LIST_DIR}/CuteBuzzerSounds/src/Sounds.h"
)

target_include_directories(cutebuzzersounds INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CuteBuzzerSounds/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(cutebuzzersounds INTERFACE
    arduino-compat
)
