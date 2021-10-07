add_library(pac-mufonts INTERFACE)

target_sources(pac-mufonts INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mufonts/src/muHeavy8ptBold.h"
  "${CMAKE_CURRENT_LIST_DIR}/mufonts/src/muMatrix8ptRegular.h"
)

target_include_directories(pac-mufonts INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mufonts/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mufonts INTERFACE
    arduino-compat
)
