add_library(pac-kniwwelino INTERFACE)

target_sources(pac-kniwwelino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/KniwwelinoLib/Kniwwelino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/KniwwelinoLib/Kniwwelino.h"
  "${CMAKE_CURRENT_LIST_DIR}/KniwwelinoLib/KniwwelinoIcons.h"
  "${CMAKE_CURRENT_LIST_DIR}/KniwwelinoLib/KniwwelinoTones.h"
)

target_include_directories(pac-kniwwelino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/KniwwelinoLib"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

target_link_libraries(pac-kniwwelino INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
)
