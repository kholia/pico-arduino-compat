add_library(pac-zsharpir-library INTERFACE)

target_sources(pac-zsharpir-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ZSharpIR/ZSharpIR.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ZSharpIR/ZSharpIR.h"
)

target_include_directories(pac-zsharpir-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ZSharpIR"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-zsharpir-library INTERFACE
    arduino-compat
)
