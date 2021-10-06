add_library(fdc2214 INTERFACE)

target_sources(fdc2214 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FDC2214/src/FDC2214.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FDC2214/src/FDC2214.h"
)

target_include_directories(fdc2214 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FDC2214/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(fdc2214 INTERFACE
    arduino-compat
)
