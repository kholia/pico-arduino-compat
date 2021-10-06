add_library(mufonts INTERFACE)

target_sources(mufonts INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mufonts/src/muHeavy8ptBold.h"
  "${CMAKE_CURRENT_LIST_DIR}/mufonts/src/muMatrix8ptRegular.h"
)

target_include_directories(mufonts INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mufonts/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mufonts INTERFACE
    arduino-compat
)
