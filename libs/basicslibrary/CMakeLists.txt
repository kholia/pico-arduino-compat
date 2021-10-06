add_library(basicslibrary INTERFACE)

target_sources(basicslibrary INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BasicsLibrary/BasicsLibrary.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BasicsLibrary/RTClib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BasicsLibrary/pitches.h"
  "${CMAKE_CURRENT_LIST_DIR}/BasicsLibrary/BasicsLibrary.h"
  "${CMAKE_CURRENT_LIST_DIR}/BasicsLibrary/themes.h"
  "${CMAKE_CURRENT_LIST_DIR}/BasicsLibrary/RTClib.h"
)

target_include_directories(basicslibrary INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BasicsLibrary"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-liquid-crystal)
    add_subdirectory(../../official-libs/liquid-crystal build_official-liquid-crystal)
endif()

target_link_libraries(basicslibrary INTERFACE
    arduino-compat
    official-liquid-crystal
)
