add_library(preciselm35 INTERFACE)

target_sources(preciselm35 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PreciseLM35/src/PreciseLM35.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PreciseLM35/src/PreciseLM35.h"
)

target_include_directories(preciselm35 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PreciseLM35/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(preciselm35 INTERFACE
    arduino-compat
)
