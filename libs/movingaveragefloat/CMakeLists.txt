add_library(pac-movingaveragefloat INTERFACE)

target_sources(pac-movingaveragefloat INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MovingAverageFloat/MovingAverageFloat.h"
)

target_include_directories(pac-movingaveragefloat INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MovingAverageFloat"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-movingaveragefloat INTERFACE
    arduino-compat
)
