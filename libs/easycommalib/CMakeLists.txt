add_library(easycommalib INTERFACE)

target_sources(easycommalib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-EasyComma/src/EasyCommaLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-EasyComma/src/EasyCommaLib.h"
)

target_include_directories(easycommalib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-EasyComma/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(easycommalib INTERFACE
    arduino-compat
)
