add_library(siktec_rotary INTERFACE)

target_sources(siktec_rotary INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SIK-Rotary-Encoder/SIKTEC_Rotary.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SIK-Rotary-Encoder/SIKTEC_Rotary.h"
)

target_include_directories(siktec_rotary INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SIK-Rotary-Encoder"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(siktec_rotary INTERFACE
    arduino-compat
)
