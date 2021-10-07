add_library(pac-emotibit-si7013 INTERFACE)

target_sources(pac-emotibit-si7013 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_FW_Si7013/EmotiBit_Si7013.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_FW_Si7013/EmotiBit_Si7013.h"
)

target_include_directories(pac-emotibit-si7013 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_FW_Si7013"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-emotibit-si7013 INTERFACE
    arduino-compat
)
