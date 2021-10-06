add_library(examplelibrary INTERFACE)

target_sources(examplelibrary INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ExampleArduinoLibrary/src/Example.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ExampleArduinoLibrary/src/Main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ExampleArduinoLibrary/src/Example.h"
)

target_include_directories(examplelibrary INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ExampleArduinoLibrary/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(examplelibrary INTERFACE
    arduino-compat
)
