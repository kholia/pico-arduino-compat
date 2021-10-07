add_library(pac-matrizled INTERFACE)

target_sources(pac-matrizled INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MatrizLed/src/MatrizLed.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MatrizLed/src/MatrizLed.h"
)

target_include_directories(pac-matrizled INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MatrizLed/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-matrizled INTERFACE
    arduino-compat
)
