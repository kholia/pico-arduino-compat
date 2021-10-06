add_library(movingaveragefloat INTERFACE)

target_sources(movingaveragefloat INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MovingAverageFloat/MovingAverageFloat.h"
)

target_include_directories(movingaveragefloat INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MovingAverageFloat"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(movingaveragefloat INTERFACE
    arduino-compat
)
