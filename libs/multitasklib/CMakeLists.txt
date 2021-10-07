add_library(pac-multitasklib INTERFACE)

target_sources(pac-multitasklib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-MultiTask/src/MultiTaskLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-MultiTask/src/MultiTaskLib.h"
)

target_include_directories(pac-multitasklib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-MultiTask/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-multitasklib INTERFACE
    arduino-compat
)
