add_library(pac-slipmassage INTERFACE)

target_sources(pac-slipmassage INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SlipMassage/src/SlipMassagePacker.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SlipMassage/src/SlipMassageParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SlipMassage/extras/slipMassage_octo/SlipMassage_octo_teensy/LedBlinker.h"
  "${CMAKE_CURRENT_LIST_DIR}/SlipMassage/src/SlipMassageParser.h"
  "${CMAKE_CURRENT_LIST_DIR}/SlipMassage/src/SlipMassagePacker.h"
  "${CMAKE_CURRENT_LIST_DIR}/SlipMassage/src/Massage/MassagePacker.h"
  "${CMAKE_CURRENT_LIST_DIR}/SlipMassage/src/Massage/MassageParser.h"
)

target_include_directories(pac-slipmassage INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SlipMassage/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-slipmassage INTERFACE
    arduino-compat
)
