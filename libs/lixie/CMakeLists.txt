add_library(lixie INTERFACE)

target_sources(lixie INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Lixie-arduino/src/Lixie.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Lixie-arduino/src/Lixie.h"
)

target_include_directories(lixie INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Lixie-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(lixie INTERFACE
    arduino-compat
)
