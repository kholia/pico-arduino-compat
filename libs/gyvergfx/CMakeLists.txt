add_library(pac-gyvergfx INTERFACE)

target_sources(pac-gyvergfx INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GyverGFX/src/GyverGFX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GyverGFX/src/GyverGFX.h"
  "${CMAKE_CURRENT_LIST_DIR}/GyverGFX/src/charMap.h"
)

target_include_directories(pac-gyvergfx INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GyverGFX/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-gyvergfx INTERFACE
    arduino-compat
)
