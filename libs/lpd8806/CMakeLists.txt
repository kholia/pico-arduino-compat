add_library(lpd8806 INTERFACE)

target_sources(lpd8806 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LPD8806/LPD8806.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LPD8806/LPD8806.h"
)

target_include_directories(lpd8806 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LPD8806"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(lpd8806 INTERFACE
    arduino-compat
)
