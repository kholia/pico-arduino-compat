add_library(multitasklib INTERFACE)

target_sources(multitasklib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-MultiTask/src/MultiTaskLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-MultiTask/src/MultiTaskLib.h"
)

target_include_directories(multitasklib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-MultiTask/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(multitasklib INTERFACE
    arduino-compat
)
