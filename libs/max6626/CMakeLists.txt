add_library(pac-max6626 INTERFACE)

target_sources(pac-max6626 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MAX6626_library/MAX6626.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MAX6626_library/MAX6626.h"
  "${CMAKE_CURRENT_LIST_DIR}/MAX6626_library/MAX6626CFG.h"
)

target_include_directories(pac-max6626 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MAX6626_library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-max6626 INTERFACE
    arduino-compat
)
