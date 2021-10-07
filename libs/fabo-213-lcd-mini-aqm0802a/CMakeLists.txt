add_library(pac-fabo-213-lcd-mini-aqm0802a INTERFACE)

target_sources(pac-fabo-213-lcd-mini-aqm0802a INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FaBoLCDmini-AQM0802A-Library/src/FaBoLCDmini_AQM0802A.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FaBoLCDmini-AQM0802A-Library/src/FaBoLCDmini_AQM0802A.h"
)

target_include_directories(pac-fabo-213-lcd-mini-aqm0802a INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FaBoLCDmini-AQM0802A-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-fabo-213-lcd-mini-aqm0802a INTERFACE
    arduino-compat
)
