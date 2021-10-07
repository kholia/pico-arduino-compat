add_library(pac-stereosid INTERFACE)

target_sources(pac-stereosid INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/sid-arduino-lib/SID.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/sid-arduino-lib/SID.h"
  "${CMAKE_CURRENT_LIST_DIR}/sid-arduino-lib/midi_support.h"
  "${CMAKE_CURRENT_LIST_DIR}/sid-arduino-lib/examples/sid_player/Castlevania_64_Mixes_dmp.h"
  "${CMAKE_CURRENT_LIST_DIR}/sid-arduino-lib/examples/sid_player/Open_Groove_dmp.h"
  "${CMAKE_CURRENT_LIST_DIR}/sid-arduino-lib/examples/sid_player/Visitors_dmp.h"
  "${CMAKE_CURRENT_LIST_DIR}/sid-arduino-lib/examples/sid_player/Vibralux_dmp.h"
  "${CMAKE_CURRENT_LIST_DIR}/sid-arduino-lib/examples/sid_player/Zelda_1_Dungeon_dmp.h"
  "${CMAKE_CURRENT_LIST_DIR}/sid-arduino-lib/examples/sid_player/marche_hiver_dmp.h"
  "${CMAKE_CURRENT_LIST_DIR}/sid-arduino-lib/examples/sid_player/Alternative_Fuel_dmp.h"
  "${CMAKE_CURRENT_LIST_DIR}/sid-arduino-lib/examples/sid_player/Commando_dmp.h"
)

target_include_directories(pac-stereosid INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/sid-arduino-lib"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stereosid INTERFACE
    arduino-compat
)
