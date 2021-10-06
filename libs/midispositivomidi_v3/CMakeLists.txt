add_library(midispositivomidi_v3 INTERFACE)

target_sources(midispositivomidi_v3 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MiDispositivoMIDI_V3/test/tests.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MiDispositivoMIDI_V3/src/MiDispositivoMIDI_V3.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MiDispositivoMIDI_V3/src/MiDispositivoMIDI_V3.h"
)

target_include_directories(midispositivomidi_v3 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MiDispositivoMIDI_V3/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(midispositivomidi_v3 INTERFACE
    arduino-compat
)
