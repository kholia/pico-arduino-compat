add_library(ubidots-arduino-yun INTERFACE)

target_sources(ubidots-arduino-yun INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ubidots-arduino-yun/src/UbidotsYUN.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ubidots-arduino-yun/src/UbidotsYUN.h"
)

target_include_directories(ubidots-arduino-yun INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ubidots-arduino-yun/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ubidots-arduino-yun INTERFACE
    arduino-compat
)
