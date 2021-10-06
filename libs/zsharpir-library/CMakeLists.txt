add_library(zsharpir-library INTERFACE)

target_sources(zsharpir-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ZSharpIR/ZSharpIR.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ZSharpIR/ZSharpIR.h"
)

target_include_directories(zsharpir-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ZSharpIR"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(zsharpir-library INTERFACE
    arduino-compat
)
