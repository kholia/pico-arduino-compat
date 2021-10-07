add_library(pac-doubleemafilterlib INTERFACE)

target_sources(pac-doubleemafilterlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-DoubleEmaFilter/src/DoubleEMAFilterLib.h"
)

target_include_directories(pac-doubleemafilterlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-DoubleEmaFilter/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-doubleemafilterlib INTERFACE
    arduino-compat
)
