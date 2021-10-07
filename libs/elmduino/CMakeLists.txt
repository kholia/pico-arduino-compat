add_library(pac-elmduino INTERFACE)

target_sources(pac-elmduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ELMduino/src/ELMduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ELMduino/src/ELMduino.h"
)

target_include_directories(pac-elmduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ELMduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-elmduino INTERFACE
    arduino-compat
)
