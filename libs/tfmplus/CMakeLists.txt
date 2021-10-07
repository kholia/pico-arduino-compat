add_library(pac-tfmplus INTERFACE)

target_sources(pac-tfmplus INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TFMini-Plus/src/TFMPlus.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TFMini-Plus/src/TFMPlus.h"
  "${CMAKE_CURRENT_LIST_DIR}/TFMini-Plus/example/printf.h"
)

target_include_directories(pac-tfmplus INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TFMini-Plus/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tfmplus INTERFACE
    arduino-compat
)
