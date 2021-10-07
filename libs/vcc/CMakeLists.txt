add_library(pac-vcc INTERFACE)

target_sources(pac-vcc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Vcc/src/Vcc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Vcc/src/Vcc.h"
)

target_include_directories(pac-vcc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Vcc/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-vcc INTERFACE
    arduino-compat
)
