add_library(pac-senses_nbiot INTERFACE)

target_sources(pac-senses_nbiot INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Senses_NBIoT/src/Senses_NBIoT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Senses_NBIoT/src/Senses_NBIoT.h"
)

target_include_directories(pac-senses_nbiot INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Senses_NBIoT/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-senses_nbiot INTERFACE
    arduino-compat
)
