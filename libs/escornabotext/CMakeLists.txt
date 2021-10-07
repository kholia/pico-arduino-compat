add_library(pac-escornabotext INTERFACE)

target_sources(pac-escornabotext INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/escornabot-extlib/src/EscornabotEXT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/escornabot-extlib/src/EXTpad.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/escornabot-extlib/src/lib/EXTstepper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/escornabot-extlib/src/EXTpad.h"
  "${CMAKE_CURRENT_LIST_DIR}/escornabot-extlib/src/EscornabotEXT.h"
  "${CMAKE_CURRENT_LIST_DIR}/escornabot-extlib/src/lib/EXTstepper.h"
)

target_include_directories(pac-escornabotext INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/escornabot-extlib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-escornabotext INTERFACE
    arduino-compat
)
