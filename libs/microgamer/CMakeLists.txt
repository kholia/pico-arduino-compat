add_library(pac-microgamer INTERFACE)

target_sources(pac-microgamer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MicroGamer-Arduino/src/MicroGamerMemoryCard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MicroGamer-Arduino/src/MicroGamer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MicroGamer-Arduino/src/MicroGamerCore.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MicroGamer-Arduino/src/MicroGamerTones.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MicroGamer-Arduino/src/MicroGamerAudio.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MicroGamer-Arduino/src/Sprites.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MicroGamer-Arduino/src/ab_logo.c"
  "${CMAKE_CURRENT_LIST_DIR}/MicroGamer-Arduino/src/glcdfont.c"
  "${CMAKE_CURRENT_LIST_DIR}/MicroGamer-Arduino/src/MicroGamerCore.h"
  "${CMAKE_CURRENT_LIST_DIR}/MicroGamer-Arduino/src/MicroGamer.h"
  "${CMAKE_CURRENT_LIST_DIR}/MicroGamer-Arduino/src/MicroGamerMemoryCard.h"
  "${CMAKE_CURRENT_LIST_DIR}/MicroGamer-Arduino/src/MicroGamerTonesPitches.h"
  "${CMAKE_CURRENT_LIST_DIR}/MicroGamer-Arduino/src/Sprites.h"
  "${CMAKE_CURRENT_LIST_DIR}/MicroGamer-Arduino/src/MicroGamerTones.h"
  "${CMAKE_CURRENT_LIST_DIR}/MicroGamer-Arduino/src/MicroGamerAudio.h"
)

target_include_directories(pac-microgamer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MicroGamer-Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-microgamer INTERFACE
    arduino-compat
)
