add_library(fir-filter INTERFACE)

target_sources(fir-filter INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FIR_Filter_Arduino_Library/src/FIR.h"
)

target_include_directories(fir-filter INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FIR_Filter_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(fir-filter INTERFACE
    arduino-compat
)
