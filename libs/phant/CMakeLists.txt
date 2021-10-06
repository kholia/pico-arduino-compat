add_library(phant INTERFACE)

target_sources(phant INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/phant-arduino/src/Phant.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/phant-arduino/src/Phant.h"
)

target_include_directories(phant INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/phant-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(phant INTERFACE
    arduino-compat
)
