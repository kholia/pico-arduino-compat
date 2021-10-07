add_library(pac-pwfusion_mcp960x INTERFACE)

target_sources(pac-pwfusion_mcp960x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PWFusion_Mcp960x/src/PWFusion_Mcp960x.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PWFusion_Mcp960x/src/PWFusion_Mcp960x.h"
)

target_include_directories(pac-pwfusion_mcp960x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PWFusion_Mcp960x/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pwfusion_mcp960x INTERFACE
    arduino-compat
)
