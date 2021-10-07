add_library(pac-audioshielddtmf INTERFACE)

target_sources(pac-audioshielddtmf INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AudioShieldDTMF/src/dtmf.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AudioShieldDTMF/src/Dac.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AudioShieldDTMF/examples/dial/dtmf.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AudioShieldDTMF/examples/dial/Dac.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AudioShieldDTMF/src/dtmf.h"
  "${CMAKE_CURRENT_LIST_DIR}/AudioShieldDTMF/src/Dac.h"
  "${CMAKE_CURRENT_LIST_DIR}/AudioShieldDTMF/examples/dial/dtmf.h"
  "${CMAKE_CURRENT_LIST_DIR}/AudioShieldDTMF/examples/dial/Dac.h"
)

target_include_directories(pac-audioshielddtmf INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AudioShieldDTMF/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-audioshielddtmf INTERFACE
    arduino-compat
)
