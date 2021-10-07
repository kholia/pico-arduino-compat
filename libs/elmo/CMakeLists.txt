add_library(pac-elmo INTERFACE)

target_sources(pac-elmo INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ELMo/src/ELMo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ELMo/src/ELMo.h"
)

target_include_directories(pac-elmo INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ELMo/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-elmo INTERFACE
    arduino-compat
)
