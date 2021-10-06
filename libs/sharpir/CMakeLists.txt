add_library(sharpir INTERFACE)

target_sources(sharpir INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SharpIR/src/SharpIR.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SharpIR/src/SharpIR.h"
)

target_include_directories(sharpir INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SharpIR/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sharpir INTERFACE
    arduino-compat
)
