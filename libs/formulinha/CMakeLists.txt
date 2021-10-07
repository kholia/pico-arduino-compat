add_library(pac-formulinha INTERFACE)

target_sources(pac-formulinha INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Formulinha/src/CuteBuzzerSounds.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Formulinha/src/Formulinha.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Formulinha/src/CuteBuzzerSounds.h"
  "${CMAKE_CURRENT_LIST_DIR}/Formulinha/src/Sounds.h"
  "${CMAKE_CURRENT_LIST_DIR}/Formulinha/src/Formulinha.h"
)

target_include_directories(pac-formulinha INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Formulinha/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-formulinha INTERFACE
    arduino-compat
)
