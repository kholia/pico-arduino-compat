add_library(slight_fdc1004 INTERFACE)

target_sources(slight_fdc1004 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/slight_FDC1004/src/slight_FDC1004.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/slight_FDC1004/src/slight_FDC1004.h"
)

target_include_directories(slight_fdc1004 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/slight_FDC1004/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(slight_fdc1004 INTERFACE
    arduino-compat
)
