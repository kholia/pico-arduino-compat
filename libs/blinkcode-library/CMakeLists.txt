add_library(blinkcode-library INTERFACE)

target_sources(blinkcode-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BlinkCode/src/BlinkCode.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlinkCode/src/BlinkCodeDefs.h"
  "${CMAKE_CURRENT_LIST_DIR}/BlinkCode/src/BlinkCode.h"
)

target_include_directories(blinkcode-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BlinkCode/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(blinkcode-library INTERFACE
    arduino-compat
)
