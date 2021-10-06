add_library(at24cm01 INTERFACE)

target_sources(at24cm01 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AT24CM01/src/AT24CM01.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AT24CM01/src/AT24CM01.h"
)

target_include_directories(at24cm01 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AT24CM01/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(at24cm01 INTERFACE
    arduino-compat
)
