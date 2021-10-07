add_library(pac-simpledstadjust INTERFACE)

target_sources(pac-simpledstadjust INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/simpleDSTadjust/simpleDSTadjust.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/simpleDSTadjust/simpleDSTadjust.h"
)

target_include_directories(pac-simpledstadjust INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/simpleDSTadjust"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-simpledstadjust INTERFACE
    arduino-compat
)
