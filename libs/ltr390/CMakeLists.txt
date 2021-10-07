add_library(pac-ltr390 INTERFACE)

target_sources(pac-ltr390 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LTR390/src/LTR390.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LTR390/src/LTR390.h"
)

target_include_directories(pac-ltr390 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LTR390/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ltr390 INTERFACE
    arduino-compat
)
