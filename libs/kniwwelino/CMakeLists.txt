add_library(kniwwelino INTERFACE)

target_sources(kniwwelino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/KniwwelinoLib/Kniwwelino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/KniwwelinoLib/Kniwwelino.h"
  "${CMAKE_CURRENT_LIST_DIR}/KniwwelinoLib/KniwwelinoIcons.h"
  "${CMAKE_CURRENT_LIST_DIR}/KniwwelinoLib/KniwwelinoTones.h"
)

target_include_directories(kniwwelino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/KniwwelinoLib"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_adafruit-gfx-library)
endif()

target_link_libraries(kniwwelino INTERFACE
    arduino-compat
    adafruit-gfx-library
)
