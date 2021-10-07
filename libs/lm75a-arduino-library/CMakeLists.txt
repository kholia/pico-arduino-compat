add_library(pac-lm75a-arduino-library INTERFACE)

target_sources(pac-lm75a-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/M2M_LM75A/src/M2M_LM75A.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M2M_LM75A/src/M2M_LM75A.h"
)

target_include_directories(pac-lm75a-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/M2M_LM75A/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-lm75a-arduino-library INTERFACE
    arduino-compat
)
