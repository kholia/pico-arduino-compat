add_library(singleemafilterlib INTERFACE)

target_sources(singleemafilterlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-SingleEmaFilter/src/SingleEMAFilterLib.h"
)

target_include_directories(singleemafilterlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-SingleEmaFilter/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(singleemafilterlib INTERFACE
    arduino-compat
)
