add_library(iwitvolumeknob INTERFACE)

target_sources(iwitvolumeknob INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/IwitVolumeKnob/IwitVolumeKnob.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IwitVolumeKnob/IwitVolumeKnob.h"
)

target_include_directories(iwitvolumeknob INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/IwitVolumeKnob"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(iwitvolumeknob INTERFACE
    arduino-compat
)
