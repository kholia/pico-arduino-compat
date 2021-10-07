add_library(pac-iwitvolumeknob INTERFACE)

target_sources(pac-iwitvolumeknob INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/IwitVolumeKnob/IwitVolumeKnob.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IwitVolumeKnob/IwitVolumeKnob.h"
)

target_include_directories(pac-iwitvolumeknob INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/IwitVolumeKnob"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-iwitvolumeknob INTERFACE
    arduino-compat
)
