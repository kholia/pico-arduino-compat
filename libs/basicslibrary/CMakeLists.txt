add_library(pac-basicslibrary INTERFACE)

target_sources(pac-basicslibrary INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BasicsLibrary/BasicsLibrary.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BasicsLibrary/RTClib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BasicsLibrary/pitches.h"
  "${CMAKE_CURRENT_LIST_DIR}/BasicsLibrary/BasicsLibrary.h"
  "${CMAKE_CURRENT_LIST_DIR}/BasicsLibrary/themes.h"
  "${CMAKE_CURRENT_LIST_DIR}/BasicsLibrary/RTClib.h"
)

target_include_directories(pac-basicslibrary INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BasicsLibrary"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-liquidcrystal)
    add_subdirectory(../../libs/liquidcrystal build_pac-liquidcrystal)
endif()

target_link_libraries(pac-basicslibrary INTERFACE
    arduino-compat
    pac-liquidcrystal
)
