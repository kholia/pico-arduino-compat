add_library(timeouttasklib INTERFACE)

target_sources(timeouttasklib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-TimeoutTask/src/TimeoutTask.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-TimeoutTask/src/TimeoutTask.h"
)

target_include_directories(timeouttasklib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-TimeoutTask/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(timeouttasklib INTERFACE
    arduino-compat
)
