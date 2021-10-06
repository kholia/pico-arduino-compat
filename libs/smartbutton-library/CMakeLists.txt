add_library(smartbutton-library INTERFACE)

target_sources(smartbutton-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SmartButton/src/SmartButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SmartButton/src/SmartButtonDefs.h"
  "${CMAKE_CURRENT_LIST_DIR}/SmartButton/src/SmartButton.h"
)

target_include_directories(smartbutton-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SmartButton/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(smartbutton-library INTERFACE
    arduino-compat
)
