add_library(pac-tsd305lib INTERFACE)

target_sources(pac-tsd305lib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TSD305Lib-Arduino/tsd305lib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TSD305Lib-Arduino/tsd305lib.h"
)

target_include_directories(pac-tsd305lib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TSD305Lib-Arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tsd305lib INTERFACE
    arduino-compat
)
