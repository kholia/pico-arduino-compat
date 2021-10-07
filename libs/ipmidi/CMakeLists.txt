add_library(pac-ipmidi INTERFACE)

target_sources(pac-ipmidi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-ipMIDI/src/ipMIDI_Namespace.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-ipMIDI/src/ipMIDI.h"
)

target_include_directories(pac-ipmidi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-ipMIDI/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ipmidi INTERFACE
    arduino-compat
)
