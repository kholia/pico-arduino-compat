add_library(iftttmaker INTERFACE)

target_sources(iftttmaker INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-ifttt-maker/src/IFTTTMaker.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-ifttt-maker/src/IFTTTMaker.h"
)

target_include_directories(iftttmaker INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-ifttt-maker/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(iftttmaker INTERFACE
    arduino-compat
)
