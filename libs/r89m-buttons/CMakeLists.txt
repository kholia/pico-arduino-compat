add_library(r89m-buttons INTERFACE)

target_sources(r89m-buttons INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Button/src/Button/Button.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Button/src/Button/ButtonEventCallback.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Button/src/BasicButton/BasicButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Button/src/ButtonEventCallback.h"
  "${CMAKE_CURRENT_LIST_DIR}/Button/src/Button.h"
  "${CMAKE_CURRENT_LIST_DIR}/Button/src/BasicButton.h"
  "${CMAKE_CURRENT_LIST_DIR}/Button/src/BasicButton/BasicButton.h"
)

target_include_directories(r89m-buttons INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Button/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(r89m-buttons INTERFACE
    arduino-compat
)
