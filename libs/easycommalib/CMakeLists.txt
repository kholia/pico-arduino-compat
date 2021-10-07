add_library(pac-easycommalib INTERFACE)

target_sources(pac-easycommalib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-EasyComma/src/EasyCommaLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-EasyComma/src/EasyCommaLib.h"
)

target_include_directories(pac-easycommalib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-EasyComma/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-easycommalib INTERFACE
    arduino-compat
)
