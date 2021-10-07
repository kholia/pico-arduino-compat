add_library(pac-lm35 INTERFACE)

target_sources(pac-lm35 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LM35/LM35.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LM35/LM35.h"
)

target_include_directories(pac-lm35 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LM35"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-lm35 INTERFACE
    arduino-compat
)
