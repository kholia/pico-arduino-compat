add_library(simpledstadjust INTERFACE)

target_sources(simpledstadjust INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/simpleDSTadjust/simpleDSTadjust.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/simpleDSTadjust/simpleDSTadjust.h"
)

target_include_directories(simpledstadjust INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/simpleDSTadjust"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(simpledstadjust INTERFACE
    arduino-compat
)
