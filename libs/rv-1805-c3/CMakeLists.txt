add_library(rv-1805-c3 INTERFACE)

target_sources(rv-1805-c3 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RV-1805-C3-Arduino-Library/src/RV1805C3.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RV-1805-C3-Arduino-Library/src/RV1805C3.h"
)

target_include_directories(rv-1805-c3 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RV-1805-C3-Arduino-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rv-1805-c3 INTERFACE
    arduino-compat
)
