add_library(pac-halakekitfirst INTERFACE)

target_sources(pac-halakekitfirst INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HaLakeKitFirst-Library/src/HaLakeKitFirst.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HaLakeKitFirst-Library/examples/InputUpDownButtons/PushButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HaLakeKitFirst-Library/src/HaLakeKitFirst.h"
  "${CMAKE_CURRENT_LIST_DIR}/HaLakeKitFirst-Library/examples/InputUpDownButtons/PushButton.h"
)

target_include_directories(pac-halakekitfirst INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HaLakeKitFirst-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-halakekitfirst INTERFACE
    arduino-compat
)
