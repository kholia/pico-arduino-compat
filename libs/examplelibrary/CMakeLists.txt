add_library(pac-examplelibrary INTERFACE)

target_sources(pac-examplelibrary INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ExampleArduinoLibrary/src/Example.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ExampleArduinoLibrary/src/Main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ExampleArduinoLibrary/src/Example.h"
)

target_include_directories(pac-examplelibrary INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ExampleArduinoLibrary/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-examplelibrary INTERFACE
    arduino-compat
)
