add_library(hl1606-led-strip INTERFACE)

target_sources(hl1606-led-strip INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HL1606-LED-Strip/HL1606strip.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HL1606-LED-Strip/HL1606strip.h"
)

target_include_directories(hl1606-led-strip INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HL1606-LED-Strip"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(hl1606-led-strip INTERFACE
    arduino-compat
)
